;;simple problem shown at the tutorial. 
;;Excercise 1: try to make a bigger problem
;;Excercise 2: extend the domain definition with costs

(define (problem p1)
	(:domain logistics)
	(:objects
		t - truck
		pl - plane
		p - package
		A B C - location
	)
	(:init
		(vehicle-at t A)
		(vehicle-at pl B)
		(package-at p A)
		(road A B)
		(road B A)
		(corridor B C)
		(corridor C B)
	)
	(:goal
		(package-at p C)
	)
)