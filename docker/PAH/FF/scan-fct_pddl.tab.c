
/*  A Bison parser, made from scan-fct_pddl.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse fct_pddlparse
#define yylex fct_pddllex
#define yyerror fct_pddlerror
#define yylval fct_pddllval
#define yychar fct_pddlchar
#define yydebug fct_pddldebug
#define yynerrs fct_pddlnerrs
#define	DEFINE_TOK	258
#define	PROBLEM_TOK	259
#define	SITUATION_TOK	260
#define	BSITUATION_TOK	261
#define	OBJECTS_TOK	262
#define	BDOMAIN_TOK	263
#define	INIT_TOK	264
#define	GOAL_TOK	265
#define	EQ_TOK	266
#define	AND_TOK	267
#define	NOT_TOK	268
#define	NAME	269
#define	VARIABLE	270
#define	TYPE	271
#define	FORALL_TOK	272
#define	IMPLY_TOK	273
#define	OR_TOK	274
#define	EXISTS_TOK	275
#define	EITHER_TOK	276
#define	OPEN_PAREN	277
#define	CLOSE_PAREN	278

#line 1 "scan-fct_pddl.y"

#ifdef YYDEBUG
  extern int yydebug=1;
#endif


#include <stdio.h>
#include <string.h> 
#include "ff.h"
#include "memory.h"
#include "parse.h"


#ifndef SCAN_ERR
#define SCAN_ERR
#define DEFINE_EXPECTED            0
#define PROBLEM_EXPECTED           1
#define PROBNAME_EXPECTED          2
#define LBRACKET_EXPECTED          3
#define RBRACKET_EXPECTED          4
#define DOMDEFS_EXPECTED           5
#define REQUIREM_EXPECTED          6
#define TYPEDLIST_EXPECTED         7
#define DOMEXT_EXPECTED            8
#define DOMEXTNAME_EXPECTED        9
#define TYPEDEF_EXPECTED          10
#define CONSTLIST_EXPECTED        11
#define PREDDEF_EXPECTED          12 
#define NAME_EXPECTED             13
#define VARIABLE_EXPECTED         14
#define ACTIONFUNCTOR_EXPECTED    15
#define ATOM_FORMULA_EXPECTED     16
#define EFFECT_DEF_EXPECTED       17
#define NEG_FORMULA_EXPECTED      18
#define NOT_SUPPORTED             19
#define SITUATION_EXPECTED        20
#define SITNAME_EXPECTED          21
#define BDOMAIN_EXPECTED          22
#define BADDOMAIN                 23
#define INIFACTS                  24
#define GOALDEF                   25
#define ADLGOAL                   26
#endif


static char * serrmsg[] = {
  "'define' expected",
  "'problem' expected",
  "problem name expected",
  "'(' expected",
  "')' expected",
  "additional domain definitions expected",
  "requirements (e.g. ':strips') expected",
  "typed list of <%s> expected",
  "domain extension expected",
  "domain to be extented expected",
  "type definition expected",
  "list of constants expected",
  "predicate definition expected",
  "<name> expected",
  "<variable> expected",
  "action functor expected",
  "atomic formula expected",
  "effect definition expected",
  "negated atomic formula expected",
  "requirement %s not supported by this IPP version",  
  "'situation' expected",
  "situation name expected",
  "':domain' expected",
  "this problem needs another domain file",
  "initial facts definition expected",
  "goal definition expected",
  "first order logic expression expected",
  NULL
};


/* void fcterr( int errno, char *par ); */


static int sact_err;
static char *sact_err_par = NULL;
static Bool sis_negated = FALSE;


#line 91 "scan-fct_pddl.y"
typedef union {

  char string[MAX_LENGTH];
  char* pstring;
  PlNode* pPlNode;
  FactList* pFactList;
  TokenList* pTokenList;
  TypedList* pTypedList;

} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		112
#define	YYFLAG		-32768
#define	YYNTBASE	24

#define YYTRANSLATE(x) ((unsigned)(x) <= 278 ? yytranslate[x] : 49)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,    12,    17,    22,    23,    26,    29,
    32,    35,    40,    41,    47,    48,    54,    56,    61,    66,
    71,    77,    85,    93,    94,    97,   102,   104,   109,   114,
   115,   118,   120,   122,   124,   127,   128,   134,   138,   141,
   142,   148,   152,   155,   157,   159,   162,   167,   169,   174,
   175
};

static const short yyrhs[] = {    -1,
    25,    24,     0,     0,    22,     3,    26,    27,    29,    23,
     0,    22,     4,    14,    23,     0,    22,     8,    14,    23,
     0,     0,    30,    29,     0,    31,    29,     0,    33,    29,
     0,    28,    29,     0,    22,     7,    42,    23,     0,     0,
    22,     9,    32,    45,    23,     0,     0,    22,    10,    34,
    35,    23,     0,    37,     0,    22,    12,    36,    23,     0,
    22,    19,    36,    23,     0,    22,    13,    35,    23,     0,
    22,    18,    35,    35,    23,     0,    22,    20,    22,    43,
    23,    35,    23,     0,    22,    17,    22,    43,    23,    35,
    23,     0,     0,    35,    36,     0,    22,    13,    38,    23,
     0,    38,     0,    22,    44,    39,    23,     0,    22,    11,
    39,    23,     0,     0,    40,    39,     0,    14,     0,    15,
     0,    14,     0,    14,    41,     0,     0,    14,    21,    41,
    23,    42,     0,    14,    16,    42,     0,    14,    42,     0,
     0,    15,    21,    41,    23,    43,     0,    15,    16,    43,
     0,    15,    43,     0,    14,     0,    46,     0,    46,    45,
     0,    22,    13,    47,    23,     0,    47,     0,    22,    44,
    48,    23,     0,     0,    14,    48,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   145,   147,   153,   158,   169,   179,   191,   193,   195,   197,
   199,   205,   214,   219,   228,   233,   246,   259,   265,   271,
   277,   287,   302,   324,   329,   340,   346,   355,   362,   374,
   379,   390,   396,   406,   413,   424,   427,   436,   447,   466,
   469,   478,   489,   510,   520,   525,   534,   544,   554,   565,
   568
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","DEFINE_TOK",
"PROBLEM_TOK","SITUATION_TOK","BSITUATION_TOK","OBJECTS_TOK","BDOMAIN_TOK","INIT_TOK",
"GOAL_TOK","EQ_TOK","AND_TOK","NOT_TOK","NAME","VARIABLE","TYPE","FORALL_TOK",
"IMPLY_TOK","OR_TOK","EXISTS_TOK","EITHER_TOK","OPEN_PAREN","CLOSE_PAREN","file",
"problem_definition","@1","problem_name","base_domain_name","problem_defs","objects_def",
"init_def","@2","goal_def","@3","adl_goal_description","adl_goal_description_star",
"literal_term","atomic_formula_term","term_star","term","name_plus","typed_list_name",
"typed_list_variable","predicate","literal_name_plus","literal_name","atomic_formula_name",
"name_star", NULL
};
#endif

static const short yyr1[] = {     0,
    24,    24,    26,    25,    27,    28,    29,    29,    29,    29,
    29,    30,    32,    31,    34,    33,    35,    35,    35,    35,
    35,    35,    35,    36,    36,    37,    37,    38,    38,    39,
    39,    40,    40,    41,    41,    42,    42,    42,    42,    43,
    43,    43,    43,    44,    45,    45,    46,    46,    47,    48,
    48
};

static const short yyr2[] = {     0,
     0,     2,     0,     6,     4,     4,     0,     2,     2,     2,
     2,     4,     0,     5,     0,     5,     1,     4,     4,     4,
     5,     7,     7,     0,     2,     4,     1,     4,     4,     0,
     2,     1,     1,     1,     2,     0,     5,     3,     2,     0,
     5,     3,     2,     1,     1,     2,     4,     1,     4,     0,
     2
};

static const short yydefact[] = {     1,
     0,     1,     3,     2,     0,     0,     7,     0,     0,     7,
     0,     7,     7,     7,     0,    36,     0,    13,    15,    11,
     4,     8,     9,    10,     5,    36,     0,     0,     0,     0,
    36,     0,    39,    12,     6,     0,     0,    45,    48,     0,
     0,    17,    27,    38,    34,     0,     0,    44,    50,    14,
    46,    30,    24,     0,     0,     0,    24,     0,    30,    16,
    35,    36,     0,     0,    50,     0,    32,    33,     0,    30,
    24,     0,     0,     0,    40,     0,     0,    40,     0,    37,
    47,    51,    49,    29,    31,    25,    18,    20,    26,    40,
     0,     0,    19,     0,    28,    40,     0,    43,     0,    21,
     0,    42,     0,     0,     0,    40,    23,    22,    41,     0,
     0,     0
};

static const short yydefgoto[] = {     4,
     2,     5,     7,    10,    11,    12,    13,    29,    14,    30,
    71,    72,    42,    43,    69,    70,    46,    27,    91,    49,
    37,    38,    39,    66
};

static const short yypact[] = {     0,
    11,     0,-32768,-32768,     1,    21,    10,    33,    35,    10,
    25,    10,    10,    10,    26,    36,    37,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    -8,    29,    31,    34,    38,
    36,    41,-32768,-32768,-32768,     6,    39,    34,-32768,    16,
    40,-32768,-32768,-32768,    41,    42,    44,-32768,    43,-32768,
-32768,    -5,    38,    38,    45,    38,    38,    46,    -5,-32768,
-32768,    36,    47,    49,    43,    50,-32768,-32768,    51,    -5,
    38,    52,    53,    54,    55,    38,    56,    55,    57,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    -4,
    58,    59,-32768,    60,-32768,    55,    41,-32768,    38,-32768,
    38,-32768,    61,    62,    63,    55,-32768,-32768,-32768,    64,
    78,-32768
};

static const short yypgoto[] = {    87,
-32768,-32768,-32768,-32768,    27,-32768,-32768,-32768,-32768,-32768,
   -30,   -53,-32768,     4,   -54,-32768,   -44,   -24,   -75,    19,
    65,-32768,    48,    23
};


#define	YYLAST		103


static const short yytable[] = {    41,
    61,    33,    94,    77,    79,    26,    44,    31,    67,    68,
    90,    96,    32,     3,    98,    85,    97,    86,    47,    48,
   102,     1,     6,    73,     8,    76,    52,    53,    54,    48,
   109,     9,    55,    56,    57,    58,    20,    80,    22,    23,
    24,    16,    17,    18,    19,    92,    15,    21,    25,    26,
    28,    34,   103,    35,    45,    36,    65,    74,    59,    40,
    48,    50,    60,   111,    62,    63,    75,    78,   104,    90,
   105,    81,    83,    84,    87,    88,    89,   112,    93,    95,
    99,   100,   101,   106,   107,   108,   110,    82,     0,     0,
     0,     0,     0,     0,    64,     0,     0,     0,     0,     0,
     0,     0,    51
};

static const short yycheck[] = {    30,
    45,    26,    78,    57,    59,    14,    31,    16,    14,    15,
    15,    16,    21,     3,    90,    70,    21,    71,    13,    14,
    96,    22,    22,    54,     4,    56,    11,    12,    13,    14,
   106,    22,    17,    18,    19,    20,    10,    62,    12,    13,
    14,     7,     8,     9,    10,    76,    14,    23,    23,    14,
    14,    23,    97,    23,    14,    22,    14,    54,    40,    22,
    14,    23,    23,     0,    23,    22,    22,    22,    99,    15,
   101,    23,    23,    23,    23,    23,    23,     0,    23,    23,
    23,    23,    23,    23,    23,    23,     0,    65,    -1,    -1,
    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    38
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 3:
#line 155 "scan-fct_pddl.y"
{ 
  fcterr( PROBNAME_EXPECTED, NULL ); 
;
    break;}
case 4:
#line 159 "scan-fct_pddl.y"
{  
  gproblem_name = yyvsp[-2].pstring;
  if ( gcmd_line.display_info >= 1 ) {
    printf("\nproblem '%s' defined\n", gproblem_name);
  }
;
    break;}
case 5:
#line 171 "scan-fct_pddl.y"
{ 
  yyval.pstring = new_Token( strlen(yyvsp[-1].string)+1 );
  strcpy(yyval.pstring, yyvsp[-1].string);
;
    break;}
case 6:
#line 181 "scan-fct_pddl.y"
{ 
  if ( SAME != strcmp(yyvsp[-1].string, gdomain_name) ) {
    fcterr( BADDOMAIN, NULL );
    yyerror();
  }
;
    break;}
case 12:
#line 207 "scan-fct_pddl.y"
{ 
  gparse_objects = yyvsp[-1].pTypedList;
;
    break;}
case 13:
#line 216 "scan-fct_pddl.y"
{
  fcterr( INIFACTS, NULL ); 
;
    break;}
case 14:
#line 220 "scan-fct_pddl.y"
{
  gorig_initial_facts = new_PlNode(AND);
  gorig_initial_facts->sons = yyvsp[-1].pPlNode;
;
    break;}
case 15:
#line 230 "scan-fct_pddl.y"
{ 
  fcterr( GOALDEF, NULL ); 
;
    break;}
case 16:
#line 234 "scan-fct_pddl.y"
{
  yyvsp[-1].pPlNode->next = gorig_goal_facts;
  gorig_goal_facts = yyvsp[-1].pPlNode;
;
    break;}
case 17:
#line 248 "scan-fct_pddl.y"
{ 
  if ( sis_negated ) {
    yyval.pPlNode = new_PlNode(NOT);
    yyval.pPlNode->sons = new_PlNode(ATOM);
    yyval.pPlNode->sons->atom = yyvsp[0].pTokenList;
    sis_negated = FALSE;
  } else {
    yyval.pPlNode = new_PlNode(ATOM);
    yyval.pPlNode->atom = yyvsp[0].pTokenList;
  }
;
    break;}
case 18:
#line 261 "scan-fct_pddl.y"
{ 
  yyval.pPlNode = new_PlNode(AND);
  yyval.pPlNode->sons = yyvsp[-1].pPlNode;
;
    break;}
case 19:
#line 267 "scan-fct_pddl.y"
{ 
  yyval.pPlNode = new_PlNode(OR);
  yyval.pPlNode->sons = yyvsp[-1].pPlNode;
;
    break;}
case 20:
#line 273 "scan-fct_pddl.y"
{ 
  yyval.pPlNode = new_PlNode(NOT);
  yyval.pPlNode->sons = yyvsp[-1].pPlNode;
;
    break;}
case 21:
#line 279 "scan-fct_pddl.y"
{ 
  PlNode *np = new_PlNode(NOT);
  np->sons = yyvsp[-2].pPlNode;
  np->next = yyvsp[-1].pPlNode;

  yyval.pPlNode = new_PlNode(OR);
  yyval.pPlNode->sons = np;
;
    break;}
case 22:
#line 291 "scan-fct_pddl.y"
{ 

  PlNode *pln;

  pln = new_PlNode(EX);
  pln->parse_vars = yyvsp[-3].pTypedList;

  yyval.pPlNode = pln;
  pln->sons = yyvsp[-1].pPlNode;

;
    break;}
case 23:
#line 306 "scan-fct_pddl.y"
{ 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = yyvsp[-3].pTypedList;

  yyval.pPlNode = pln;
  pln->sons = yyvsp[-1].pPlNode;

;
    break;}
case 24:
#line 326 "scan-fct_pddl.y"
{
  yyval.pPlNode = NULL;
;
    break;}
case 25:
#line 331 "scan-fct_pddl.y"
{
  yyvsp[-1].pPlNode->next = yyvsp[0].pPlNode;
  yyval.pPlNode = yyvsp[-1].pPlNode;
;
    break;}
case 26:
#line 342 "scan-fct_pddl.y"
{ 
  yyval.pTokenList = yyvsp[-1].pTokenList;
  sis_negated = TRUE;
;
    break;}
case 27:
#line 348 "scan-fct_pddl.y"
{
  yyval.pTokenList = yyvsp[0].pTokenList;
;
    break;}
case 28:
#line 357 "scan-fct_pddl.y"
{ 
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = yyvsp[-2].pstring;
  yyval.pTokenList->next = yyvsp[-1].pTokenList;
;
    break;}
case 29:
#line 364 "scan-fct_pddl.y"
{
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = new_Token( 5 );
  yyval.pTokenList->item = "=";
  yyval.pTokenList->next = yyvsp[-1].pTokenList;
;
    break;}
case 30:
#line 376 "scan-fct_pddl.y"
{
  yyval.pTokenList = NULL;
;
    break;}
case 31:
#line 381 "scan-fct_pddl.y"
{
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = yyvsp[-1].pstring;
  yyval.pTokenList->next = yyvsp[0].pTokenList;
;
    break;}
case 32:
#line 392 "scan-fct_pddl.y"
{ 
  yyval.pstring = new_Token(strlen(yyvsp[0].string) + 1);
  strcpy(yyval.pstring, yyvsp[0].string);
;
    break;}
case 33:
#line 398 "scan-fct_pddl.y"
{ 
  yyval.pstring = new_Token(strlen(yyvsp[0].string) + 1);
  strcpy(yyval.pstring, yyvsp[0].string);
;
    break;}
case 34:
#line 408 "scan-fct_pddl.y"
{
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = new_Token(strlen(yyvsp[0].string) + 1);
  strcpy(yyval.pTokenList->item, yyvsp[0].string);
;
    break;}
case 35:
#line 415 "scan-fct_pddl.y"
{
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = new_Token(strlen(yyvsp[-1].string) + 1);
  strcpy(yyval.pTokenList->item, yyvsp[-1].string);
  yyval.pTokenList->next = yyvsp[0].pTokenList;
;
    break;}
case 36:
#line 426 "scan-fct_pddl.y"
{ yyval.pTypedList = NULL; ;
    break;}
case 37:
#line 429 "scan-fct_pddl.y"
{ 
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-4].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-4].string );
  yyval.pTypedList->type = yyvsp[-2].pTokenList;
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 38:
#line 438 "scan-fct_pddl.y"
{
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-2].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-2].string );
  yyval.pTypedList->type = new_TokenList();
  yyval.pTypedList->type->item = new_Token( strlen(yyvsp[-1].string)+1 );
  strcpy( yyval.pTypedList->type->item, yyvsp[-1].string );
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 39:
#line 449 "scan-fct_pddl.y"
{
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-1].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-1].string );
  if ( yyvsp[0].pTypedList ) {/* another element (already typed) is following */
    yyval.pTypedList->type = copy_TokenList( yyvsp[0].pTypedList->type );
  } else {/* no further element - it must be an untyped list */
    yyval.pTypedList->type = new_TokenList();
    yyval.pTypedList->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( yyval.pTypedList->type->item, STANDARD_TYPE );
  }
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 40:
#line 468 "scan-fct_pddl.y"
{ yyval.pTypedList = NULL; ;
    break;}
case 41:
#line 471 "scan-fct_pddl.y"
{ 
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-4].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-4].string );
  yyval.pTypedList->type = yyvsp[-2].pTokenList;
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 42:
#line 480 "scan-fct_pddl.y"
{
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-2].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-2].string );
  yyval.pTypedList->type = new_TokenList();
  yyval.pTypedList->type->item = new_Token( strlen(yyvsp[-1].string)+1 );
  strcpy( yyval.pTypedList->type->item, yyvsp[-1].string );
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 43:
#line 491 "scan-fct_pddl.y"
{
  yyval.pTypedList = new_TypedList();
  yyval.pTypedList->name = new_Token( strlen(yyvsp[-1].string)+1 );
  strcpy( yyval.pTypedList->name, yyvsp[-1].string );
  if ( yyvsp[0].pTypedList ) {/* another element (already typed) is following */
    yyval.pTypedList->type = copy_TokenList( yyvsp[0].pTypedList->type );
  } else {/* no further element - it must be an untyped list */
    yyval.pTypedList->type = new_TokenList();
    yyval.pTypedList->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( yyval.pTypedList->type->item, STANDARD_TYPE );
  }
  yyval.pTypedList->next = yyvsp[0].pTypedList;
;
    break;}
case 44:
#line 512 "scan-fct_pddl.y"
{ 
  yyval.pstring = new_Token(strlen(yyvsp[0].string) + 1);
  strcpy(yyval.pstring, yyvsp[0].string);
;
    break;}
case 45:
#line 522 "scan-fct_pddl.y"
{
  yyval.pPlNode = yyvsp[0].pPlNode;
;
    break;}
case 46:
#line 527 "scan-fct_pddl.y"
{
   yyval.pPlNode = yyvsp[-1].pPlNode;
   yyval.pPlNode->next = yyvsp[0].pPlNode;
;
    break;}
case 47:
#line 536 "scan-fct_pddl.y"
{ 
  PlNode *tmp;

  tmp = new_PlNode(ATOM);
  tmp->atom = yyvsp[-1].pTokenList;
  yyval.pPlNode = new_PlNode(NOT);
  yyval.pPlNode->sons = tmp;
;
    break;}
case 48:
#line 546 "scan-fct_pddl.y"
{
  yyval.pPlNode = new_PlNode(ATOM);
  yyval.pPlNode->atom = yyvsp[0].pTokenList;
;
    break;}
case 49:
#line 556 "scan-fct_pddl.y"
{ 
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = yyvsp[-2].pstring;
  yyval.pTokenList->next = yyvsp[-1].pTokenList;
;
    break;}
case 50:
#line 567 "scan-fct_pddl.y"
{ yyval.pTokenList = NULL; ;
    break;}
case 51:
#line 570 "scan-fct_pddl.y"
{
  yyval.pTokenList = new_TokenList();
  yyval.pTokenList->item = new_Token(strlen(yyvsp[-1].string) + 1);
  strcpy(yyval.pTokenList->item, yyvsp[-1].string);
  yyval.pTokenList->next = yyvsp[0].pTokenList;
;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 579 "scan-fct_pddl.y"



#include "lex.fct_pddl.c"


/**********************************************************************
 * Functions
 **********************************************************************/


/* 
 * call	bison -pfct -bscan-fct scan-fct.y
 */
void fcterr( int errno, char *par ) {

/*   sact_err = errno; */

/*   if ( sact_err_par ) { */
/*     free( sact_err_par ); */
/*   } */
/*   if ( par ) { */
/*     sact_err_par = new_Token( strlen(par)+1 ); */
/*     strcpy( sact_err_par, par); */
/*   } else { */
/*     sact_err_par = NULL; */
/*   } */

}



int yyerror( char *msg )

{
  fflush( stdout );
  fprintf(stderr,"\n%s: syntax error in line %d, '%s':\n",
	  gact_filename, lineno, yytext );

  if ( sact_err_par ) {
    fprintf(stderr, "%s%s\n", serrmsg[sact_err], sact_err_par );
  } else {
    fprintf(stderr,"%s\n", serrmsg[sact_err] );
  }

  exit( 1 );

}



void load_fct_file( char *filename ) 

{

  FILE *fp;/* pointer to input files */
  char tmp[MAX_LENGTH] = "";

  /* open fact file 
   */
  if( ( fp = fopen( filename, "r" ) ) == NULL ) {
    sprintf(tmp, "\nff: can't find fact file: %s\n\n", filename );
    perror(tmp);
    exit ( 1 );
  }

  gact_filename = filename;
  lineno = 1; 
  yyin = fp;

  yyparse();

  fclose( fp );/* and close file again */

}

