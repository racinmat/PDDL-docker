

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
		(road C B)
		(road B C)
		(corridor B C)
		(corridor C B)
		
	    (= (distance A B) 10)
	    (= (distance B A) 10)
	    (= (distance C B) 100)
	    (= (distance B C) 100)
	    (= (distance A C) 110)
	    (= (distance C A) 110)
	    
	    (= (load-time t) 2)
	    (= (load-time pl) 10)
	    
	    (= (speed t) 2)
	    (= (speed pl) 10)
	    
	    (= (total-cost) 0)
	    
	    (= (cost-per-km t) 1)
	    (= (cost-per-km pl) 10)
	)
	(:goal
		(package-at p C)
	)
; 	(:metric minimize (total-time))
	(:metric minimize (total-cost))
)