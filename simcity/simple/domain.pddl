(define (domain simcity-simple)

;;complicatifications: cost, capacity of cars, parking (taxi does not have to park, parks can park only somewhere)

(:requirements :typing)

(:types 
	person
	location
	taxi - car 
        car underground - vehicle
)


(:predicates
  (at ?p - person ?l - location)
  (atv ?v - vehicle ?l - location)
  (in ?p - person ?v - vehicle)

  (walk-reachable ?from - location ?to - location)
  (car-reachable ?from - location ?to - location)
  (underground-reachable ?from - location ?to - location)

  (works-at ?p - person ?l - location)
  (worked ?p - person)

  (can-drive ?p - person ?v - vehicle)
  (can-board ?p - person ?v - vehicle)
)

(:action board
  :parameters 
    (?p - person ?l - location ?v - vehicle)
  :precondition
    (and 
      (at ?p ?l)
      (atv ?v ?l)
      (can-board ?p ?v)
    )
  :effect (and
    (in ?p ?v)
    (not (at ?p ?l))
  )
)

(:action disembark
  :parameters 
    (?p - person ?l - location ?v - vehicle)
  :precondition
    (and 
      (in ?p ?v)
      (atv ?v ?l)
    )
  :effect (and
    (not (in ?p ?v))
    (at ?p ?l)
  )
)

(:action walk
  :parameters 
    (?p - person ?from - location ?to - location)
  :precondition 
    (and
      (at ?p ?from)
      (walk-reachable ?from ?to)
    )
  :effect 
    (and
      (at ?p ?to)
      (not (at ?p ?from))
    )
)

(:action drive-car
  :parameters 
    (?p - person ?c - car ?from - location ?to - location)
  :precondition 
    (and
      (atv ?c ?from)
      (in ?p ?c)
      (car-reachable ?from ?to)
      (can-drive ?p ?c)
    )
  :effect 
    (and
      (atv ?c ?to)
      (not (atv ?c ?from))
    )
)

(:action drive-underground
  :parameters 
    (?p - person ?u - underground ?from - location ?to - location)
  :precondition 
    (and
      (atv ?u ?from)
      (in ?p ?u)
      (underground-reachable ?from ?to)
      (can-drive ?p ?u)
    )
  :effect 
    (and
      (atv ?u ?to)
      (not (atv ?u ?from))
    )
)


(:action work
  :parameters 
    (?p - person ?where - location)
  :precondition 
    (and
      (at ?p ?where)
      (works-at ?p ?where)
    )
  :effect 
    (and
      (worked ?p)
    )
)

(:action work-taxi
  :parameters 
    (?p - person ?t - taxi)
  :precondition 
    (and
      (in ?p ?t)
      (can-drive ?p ?t)
    )
  :effect 
    (and
      (worked ?p)
    )
)

(:action work-underground
  :parameters 
    (?p - person ?u - underground)
  :precondition 
    (and
      (in ?p ?u)
      (can-drive ?p ?u)
    )
  :effect 
    (and
      (worked ?p)
    )
)



)

