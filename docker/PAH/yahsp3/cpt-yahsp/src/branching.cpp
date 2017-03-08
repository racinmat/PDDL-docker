/*
 * CPT - a Constraint Programming Temporal planner
 *
 * File : branching.c
 *
 * Copyright (C) 2005-2014  Vincent Vidal <Vincent.Vidal@onera.fr>
 */


#include "cpt.h"
#include "options.h"
#include "structs.h"
#include "propagations.h"
#include "scheduling.h"
#include "plan.h"
#include "trace_planner.h"
#include "heuristics.h"
#include "branching.h"
#include "globs.h"


/*---------------------------------------------------------------------------*/
/* Local Types                                                               */
/*---------------------------------------------------------------------------*/


typedef struct Choice Choice;

struct Choice {
  void *choice1;
  void *choice2;
  bool direction;
  void (*propagate) (Choice *c, bool first);
};


/*---------------------------------------------------------------------------*/
/* Global Variables                                                          */
/*---------------------------------------------------------------------------*/


Causal *last_conflict_candidate;
VECTOR(Causal *, last_conflicts);


/*---------------------------------------------------------------------------*/
/* Local Variables                                                           */
/*---------------------------------------------------------------------------*/


static Comparison (*is_best_action) (Action *a, Action *a0, Causal *c);
static Comparison (*is_best_support) (Causal *c, Action *a, Causal *c0, Action *a0);
static Comparison (*is_best_conflict) (Causal *c, Action *a, Causal *c0, Action *a0);
static Comparison (*is_best_mutex) (Action *a, Action *b, Action *a0, Action *b0);
static Comparison (*is_best_start_time) (Action *a, Action *a0);
static Comparison (*order_threat_before) (Causal *c, Action *a);
static Comparison (*order_mutex_before) (Action *a1, Action *a2);
static bool (*make_choice) (Choice *c);


/*---------------------------------------------------------------------------*/
/* Local Macros                                                              */
/*---------------------------------------------------------------------------*/


#define choice_causal(c) ((Causal *) (c)->choice1)
#define choice_action(c) ((Action *) (c)->choice2)
#define choice_action1(c) ((Action *) (c)->choice1)
#define choice_action2(c) ((Action *) (c)->choice2)

#define set_choice(type, c, c0, a0, dir)				\
  (c0 == NULL ? false :							\
    ({ Comparison test = dir; c->choice1 = c0; c->choice2 = a0;				\
      c->direction = (test == Better || (opt.random && test == Equal && cpt_rand() % 2 == 0)); \
      c->propagate = propagate_##type##_choice; stats.type##_choices++; true; }))

#define _inith(h, o) h = h##_##o
#define _init_heuristic(o)						\
  NEST(									\
       cpt_calloc(last_conflicts, opt.last_conflicts);			\
       _inith(is_best_action, o);					\
       _inith(is_best_support, o);					\
       _inith(is_best_conflict, o);					\
       _inith(is_best_mutex, o);					\
       _inith(is_best_start_time, o);					\
       _inith(order_threat_before, o);					\
       _inith(order_mutex_before, o); )


/*---------------------------------------------------------------------------*/
/* Static Functions                                                          */
/*---------------------------------------------------------------------------*/


static bool choose_support(Choice *c);
static Action *best_action(Causal *c);
static bool choose_conflict(Choice *c);
static bool choose_mutex(Choice *choice);
static void propagate_conflict_choice(Choice *c, bool first);
static void propagate_support_choice(Choice *c, bool first);
static void propagate_mutex_choice(Choice *c, bool first);
static void propagate_start_time_choice(Choice *choice, bool first);
static bool conflicts_first(Choice *c);
static bool supports_first(Choice *c);
static bool mutex_first(Choice *c);


/*****************************************************************************/


void init_heuristics(void)
{
  if (opt.random) cpt_srand(opt.seed);
  if (opt.optimal) _init_heuristic(optimal); 
  else _init_heuristic(suboptimal);
#ifdef RATP
  is_best_support = is_best_support_ratp;
#endif
  switch (opt.branching_strategy) {
  case CONFLICTS_FIRST: make_choice = conflicts_first; break;
  case SUPPORTS_FIRST: make_choice = supports_first; break;
  case MUTEX_FIRST: make_choice = mutex_first; break;
  }
}

void reset_last_conflicts(void)
{
  last_conflict_candidate = NULL;
  last_conflicts_nb = 0;
}

void reset_weights(void)
{
  FOR(c, causals) { c->weight = 0; } EFOR;
  FOR(a, actions) { a->weight = 0; } EFOR; 
}

static bool choose_support(Choice *choice)
{
  Causal *c0 = NULL;
  Action *a, *a0 = NULL;
  ulong ties = 1;

  FOR(c, active_causals) {
#ifndef RESOURCES
    if (!is_produced(c))
#else
    if (!is_produced(c) && !c->fluent->no_branching)
#endif
      c->best_producer = best_action(c);
  } EFOR;
  FOR(c, active_causals) {
#ifndef RESOURCES
    if (!is_produced(c)) {
#else
    if (!is_produced(c) && !c->fluent->no_branching) {
#endif
      a = c->best_producer;
      if (!c0 || preferred(is_best_support(c, a, c0, a0), opt.random, ties)) 
	{ c0 = c; a0 = a; }
    }
  } EFOR;
  return set_choice(support, choice, c0, a0, Better);
}

static Action *best_action(Causal *c)
{
  Action *a0 = NULL;
  ulong ties = 1;

  FORPROD(a, c) {
    if (!a0 || preferred(is_best_action(a, a0, c), opt.random, ties)) a0 = a; } EFOR;
  return a0;
}

static bool choose_conflict(Choice *choice)
{
  Causal *c0 = NULL;
  Action *a0 = NULL;
  ulong ties = 1;

  RFOR(c, active_causals) {
    FOR(a, c->fluent->edeleters) {
      if (support_threat(c, a) && (!c0 || preferred(is_best_conflict(c, a, c0, a0), opt.random, ties)))
	{ c0 = c; a0 = a; }
    } EFOR;
  } EFOR;  
  return set_choice(conflict, choice, c0, a0, order_threat_before(c0, a0)); 
}

static bool choose_mutex(Choice *choice)
{
  Action *a0 = NULL;
  Action *b0 = NULL;
  ulong ties = 1;

  FORPAIR(a, b, active_actions) {
    if (mutex_threat(a, b) && (!a0 || preferred(is_best_mutex(a, b, a0, b0), opt.random, ties)))
      { a0 = a ; b0 = b; }
  } EFORPAIR;
  return set_choice(mutex, choice, a0, b0, order_mutex_before(a0, b0));
}

static bool choose_start_time(Choice *choice)
{
  Action *a0 = NULL;
  ulong ties = 1;

  FOR(a, active_actions) {
    if (first_start(a) < last_start(a) && (!a0 || preferred(is_best_start_time(a, a0), opt.random, ties)))
	a0 = a ;
  } EFOR;
  return set_choice(start_time, choice, a0, NULL, Better);
}

static void propagate_conflict_choice(Choice *choice, bool first)
{
  Causal *c = choice_causal(choice);
  Action *a = choice_action(choice);

  trace_proc(conflict_choice, c, a, choice->direction, first);
  if (first == choice->direction) order_before_ac(a, c);
  else order_before_ca(c, a);
}

static void propagate_support_choice(Choice *choice, bool first)
{
  Causal *c = choice_causal(choice);
  Action *a = choice_action(choice);

  trace_proc(support_choice, c, a, choice->direction, first);
  if (first == choice->direction) {
    if (opt.last_conflicts) {
      if (c == last_conflict_candidate) {
	last_conflicts[last_conflicts_nb++] = last_conflict_candidate;
	last_conflict_candidate = NULL;
	goto suite;
      } 
      FOR(conflict, last_conflicts) { if (c == conflict) goto suite; } EFOR;
      last_conflicts[0] = c;
      last_conflicts_nb = 1;
      last_conflict_candidate = NULL;
    }
  suite:
    set_producer(c, a);
  }
  else {
    if (opt.last_conflicts) {
      if (last_conflict_candidate == NULL && last_conflicts_nb < opt.last_conflicts) {
	FOR(conflict, last_conflicts) { if (c == conflict) goto suite2; } EFOR;
	last_conflict_candidate = c;
      }
    }
  suite2:
    rem_producer(c, a);      
  }
}

static void propagate_mutex_choice(Choice *choice, bool first)
{
  Action *a1 = choice_action1(choice);
  Action *a2 = choice_action2(choice);

  trace_proc(mutex_choice, a1, a2, choice->direction, first);
  if (first == choice->direction) order_before_aa(a1, a2);
  else order_before_aa(a2, a1);
}

static void propagate_start_time_choice(Choice *choice, bool first)
{
  Action *a = choice_action1(choice);

  trace_proc(start_time_choice, a, choice->direction, first);
  if (first == choice->direction) update_sup_a(a, first_start(a));
  else increment_inf_a(a, 1);
}

static bool conflicts_first(Choice *c)
{
  return (choose_conflict(c) || choose_support(c) || choose_mutex(c));
}

static bool supports_first(Choice *c)
{
  return (choose_support(c) || choose_mutex(c) || choose_start_time(c));
}

static bool mutex_first(Choice *c)
{
  return (choose_mutex(c) || choose_conflict(c) || choose_support(c));
}

void search(void)
{
  Choice c;

  propagate();
  if (opt.shaving) shaving();
  if (make_choice(&c)) {
    c.propagate(&c, new_world(true));
    search();
  }// else { best_plan_cost = total_plan_cost; cpt_trace(normal,"%" TIMEP " ", total_plan_cost); contradiction(); }
}
