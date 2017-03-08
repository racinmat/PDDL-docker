(define (domain logistics)
	(:requirements :typing :durative-actions)
	(:types 
		location 
		package 
		truck plane - vehicle	;;trucks and planes are vehicles
	)
	(:predicates
		(vehicle-at ?v - vehicle ?at - location)
		(package-at ?p - package ?at - location)
		(package-in ?p - package ?in - vehicle)
		(road ?from ?to - location)				;;for truck
		(corridor ?from ?to - location)			;;for plane
	)
	
	;;we need separate move actions because of the different types of road/corridor
	
	(:durative-action move-truck
	    :parameters (?t - truck ?from ?to - location)
	    :duration (= ?duration 5)
	    :condition (and 
	                    (at start (vehicle-at ?t ?from)) 
	                    (over all (road ?from ?to))
	                )
	    :effect (and 
	                (at start (not (vehicle-at ?t ?from))) 
	                (at end (vehicle-at ?t ?to))
	                )
	)
	
	(:durative-action move-plane
	    :parameters (?a - plane ?from ?to - location)
	    :duration (= ?duration 1)
	    :condition (and 
	                    (at start (vehicle-at ?a ?from)) 
	                    (over all (corridor ?from ?to))
	                )
	    :effect (and 
	                (at start (not (vehicle-at ?a ?from))) 
	                (at end (vehicle-at ?a ?to))
	                )
	)
	
	
	
	;;load/unload can be the same for both vehicles
	
	(:durative-action load
	    :parameters (?v - vehicle ?p - package ?where - location)
	    :duration (= ?duration 2)
	    :condition (and 
	                    (over all (vehicle-at ?v ?where)) 
	                    (at start (package-at ?p ?where))
	                )
	    :effect (and 
	                (at end (not (package-at ?p ?where))) 
	                (at end (package-in ?p ?v))
	                )
	)
	
	(:durative-action unload
	    :parameters (?v - vehicle ?p - package ?where - location)
	    :duration (= ?duration 2)
	    :condition (and 
	                    (over all (vehicle-at ?v ?where)) 
	                    (at start (package-in ?p ?v))
	                )
	    :effect (and 
	                (at end (package-at ?p ?where)) 
	                (at end (not (package-in ?p ?v)))
	                )
	)
	
)