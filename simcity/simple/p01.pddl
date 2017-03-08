(define (problem simcity1) (:domain simcity-simple) 
(:objects
  jan petr vaclav jana petra petruska ondrej - person
  prosek ippavlova karlak budejovicka butovice vinohrady staromak - location
  car1 - car
  taxi1 - taxi 
  metroC - underground
) 
(:init
  ;;graph
  (walk-reachable ippavlova karlak)
  (walk-reachable karlak ippavlova)
  (walk-reachable staromak karlak)
  (walk-reachable karlak staromak)
  (walk-reachable ippavlova vinohrady)
  (walk-reachable vinohrady ippavlova)

  (underground-reachable ippavlova prosek)
  (underground-reachable prosek ippavlova)
  (underground-reachable budejovicka ippavlova)
  (underground-reachable ippavlova budejovicka)

  (car-reachable butovice budejovicka)
  (car-reachable budejovicka butovice)
  (car-reachable butovice karlak)
  (car-reachable karlak butovice)
  (car-reachable butovice prosek)
  (car-reachable prosek butovice)
  (car-reachable prosek karlak)
  (car-reachable karlak prosek)
  (car-reachable prosek budejovicka)
  (car-reachable budejovicka prosek)
  (car-reachable vinohrady karlak)
  (car-reachable karlak vinohrady)

  ;;vehicles
  (atv car1 butovice)
  (atv taxi1 vinohrady)
  (atv metroC budejovicka)
  
  ;;janovi
  (at jan prosek)
  (works-at jan karlak)
  (can-board jan taxi1)
  (can-board jan metroC)
  (at jana prosek)
  (works-at jana vinohrady)
  (can-board jana taxi1)
  (can-board jana metroC)

  ;;petrovi
  (at petr butovice)
  (works-at petr budejovicka)
  (can-board petr car1)
  (can-drive petr car1)
  (can-board petr taxi1)
  (can-board petr metroC)
  (at petra butovice)
  (works-at petra prosek)
  (can-board petra taxi1)
  (can-board petra car1)
  (can-drive petra car1)
  (can-board petra metroC)
  (at petruska butovice)
  (works-at petruska staromak)
  (can-board petruska car1)
  (can-board petruska taxi1)
  (can-board petruska metroC)

  ;;vaclav
  (at vaclav vinohrady)
  (can-board vaclav taxi1)
  (can-drive vaclav taxi1)
  (can-board vaclav metroC)

  ;;ondrej
  (at ondrej budejovicka)
  (can-board ondrej taxi1)
  (can-board ondrej metroC)
  (can-drive ondrej metroC)

)

(:goal 
  (and
     (worked jan)
     (worked jana)
     (worked petr)
     (worked petra)
     (worked petruska)
     (worked vaclav)
     (worked ondrej)

     (at jan prosek)
     (at jana prosek)
     (at petr butovice)
     (at petra butovice)
     (at petruska butovice)
     (at vaclav vinohrady)
     (at ondrej budejovicka)
  )
)


)

