begin_version
3
end_version
begin_metric
0
end_metric
17
begin_variable
var0
-1
9
Atom at(jan, budejovicka)
Atom at(jan, butovice)
Atom at(jan, ippavlova)
Atom at(jan, karlak)
Atom at(jan, prosek)
Atom at(jan, staromak)
Atom at(jan, vinohrady)
Atom in(jan, metroc)
Atom in(jan, taxi1)
end_variable
begin_variable
var1
-1
9
Atom at(jana, budejovicka)
Atom at(jana, butovice)
Atom at(jana, ippavlova)
Atom at(jana, karlak)
Atom at(jana, prosek)
Atom at(jana, staromak)
Atom at(jana, vinohrady)
Atom in(jana, metroc)
Atom in(jana, taxi1)
end_variable
begin_variable
var2
-1
9
Atom at(ondrej, budejovicka)
Atom at(ondrej, butovice)
Atom at(ondrej, ippavlova)
Atom at(ondrej, karlak)
Atom at(ondrej, prosek)
Atom at(ondrej, staromak)
Atom at(ondrej, vinohrady)
Atom in(ondrej, metroc)
Atom in(ondrej, taxi1)
end_variable
begin_variable
var3
-1
10
Atom at(petr, budejovicka)
Atom at(petr, butovice)
Atom at(petr, ippavlova)
Atom at(petr, karlak)
Atom at(petr, prosek)
Atom at(petr, staromak)
Atom at(petr, vinohrady)
Atom in(petr, car1)
Atom in(petr, metroc)
Atom in(petr, taxi1)
end_variable
begin_variable
var4
-1
10
Atom at(petra, budejovicka)
Atom at(petra, butovice)
Atom at(petra, ippavlova)
Atom at(petra, karlak)
Atom at(petra, prosek)
Atom at(petra, staromak)
Atom at(petra, vinohrady)
Atom in(petra, car1)
Atom in(petra, metroc)
Atom in(petra, taxi1)
end_variable
begin_variable
var5
-1
10
Atom at(petruska, budejovicka)
Atom at(petruska, butovice)
Atom at(petruska, ippavlova)
Atom at(petruska, karlak)
Atom at(petruska, prosek)
Atom at(petruska, staromak)
Atom at(petruska, vinohrady)
Atom in(petruska, car1)
Atom in(petruska, metroc)
Atom in(petruska, taxi1)
end_variable
begin_variable
var6
-1
9
Atom at(vaclav, budejovicka)
Atom at(vaclav, butovice)
Atom at(vaclav, ippavlova)
Atom at(vaclav, karlak)
Atom at(vaclav, prosek)
Atom at(vaclav, staromak)
Atom at(vaclav, vinohrady)
Atom in(vaclav, metroc)
Atom in(vaclav, taxi1)
end_variable
begin_variable
var7
-1
5
Atom atv(car1, budejovicka)
Atom atv(car1, butovice)
Atom atv(car1, karlak)
Atom atv(car1, prosek)
Atom atv(car1, vinohrady)
end_variable
begin_variable
var8
-1
3
Atom atv(metroc, budejovicka)
Atom atv(metroc, ippavlova)
Atom atv(metroc, prosek)
end_variable
begin_variable
var9
-1
5
Atom atv(taxi1, budejovicka)
Atom atv(taxi1, butovice)
Atom atv(taxi1, karlak)
Atom atv(taxi1, prosek)
Atom atv(taxi1, vinohrady)
end_variable
begin_variable
var10
-1
2
Atom worked(jan)
NegatedAtom worked(jan)
end_variable
begin_variable
var11
-1
2
Atom worked(jana)
NegatedAtom worked(jana)
end_variable
begin_variable
var12
-1
2
Atom worked(ondrej)
NegatedAtom worked(ondrej)
end_variable
begin_variable
var13
-1
2
Atom worked(petr)
NegatedAtom worked(petr)
end_variable
begin_variable
var14
-1
2
Atom worked(petra)
NegatedAtom worked(petra)
end_variable
begin_variable
var15
-1
2
Atom worked(petruska)
NegatedAtom worked(petruska)
end_variable
begin_variable
var16
-1
2
Atom worked(vaclav)
NegatedAtom worked(vaclav)
end_variable
10
begin_mutex_group
9
0 0
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
end_mutex_group
begin_mutex_group
9
1 0
1 1
1 2
1 3
1 4
1 5
1 6
1 7
1 8
end_mutex_group
begin_mutex_group
9
2 0
2 1
2 2
2 3
2 4
2 5
2 6
2 7
2 8
end_mutex_group
begin_mutex_group
10
3 0
3 1
3 2
3 3
3 4
3 5
3 6
3 7
3 8
3 9
end_mutex_group
begin_mutex_group
10
4 0
4 1
4 2
4 3
4 4
4 5
4 6
4 7
4 8
4 9
end_mutex_group
begin_mutex_group
10
5 0
5 1
5 2
5 3
5 4
5 5
5 6
5 7
5 8
5 9
end_mutex_group
begin_mutex_group
9
6 0
6 1
6 2
6 3
6 4
6 5
6 6
6 7
6 8
end_mutex_group
begin_mutex_group
5
7 0
7 1
7 2
7 3
7 4
end_mutex_group
begin_mutex_group
3
8 0
8 1
8 2
end_mutex_group
begin_mutex_group
5
9 0
9 1
9 2
9 3
9 4
end_mutex_group
begin_state
4
4
0
1
1
1
6
1
0
4
1
1
1
1
1
1
1
end_state
begin_goal
14
0 4
1 4
2 0
3 1
4 1
5 1
6 6
10 0
11 0
12 0
13 0
14 0
15 0
16 0
end_goal
231
begin_operator
board jan budejovicka metroc
1
8 0
1
0 0 0 7
1
end_operator
begin_operator
board jan budejovicka taxi1
1
9 0
1
0 0 0 8
1
end_operator
begin_operator
board jan butovice taxi1
1
9 1
1
0 0 1 8
1
end_operator
begin_operator
board jan ippavlova metroc
1
8 1
1
0 0 2 7
1
end_operator
begin_operator
board jan karlak taxi1
1
9 2
1
0 0 3 8
1
end_operator
begin_operator
board jan prosek metroc
1
8 2
1
0 0 4 7
1
end_operator
begin_operator
board jan prosek taxi1
1
9 3
1
0 0 4 8
1
end_operator
begin_operator
board jan vinohrady taxi1
1
9 4
1
0 0 6 8
1
end_operator
begin_operator
board jana budejovicka metroc
1
8 0
1
0 1 0 7
1
end_operator
begin_operator
board jana budejovicka taxi1
1
9 0
1
0 1 0 8
1
end_operator
begin_operator
board jana butovice taxi1
1
9 1
1
0 1 1 8
1
end_operator
begin_operator
board jana ippavlova metroc
1
8 1
1
0 1 2 7
1
end_operator
begin_operator
board jana karlak taxi1
1
9 2
1
0 1 3 8
1
end_operator
begin_operator
board jana prosek metroc
1
8 2
1
0 1 4 7
1
end_operator
begin_operator
board jana prosek taxi1
1
9 3
1
0 1 4 8
1
end_operator
begin_operator
board jana vinohrady taxi1
1
9 4
1
0 1 6 8
1
end_operator
begin_operator
board ondrej budejovicka metroc
1
8 0
1
0 2 0 7
1
end_operator
begin_operator
board ondrej budejovicka taxi1
1
9 0
1
0 2 0 8
1
end_operator
begin_operator
board ondrej butovice taxi1
1
9 1
1
0 2 1 8
1
end_operator
begin_operator
board ondrej ippavlova metroc
1
8 1
1
0 2 2 7
1
end_operator
begin_operator
board ondrej karlak taxi1
1
9 2
1
0 2 3 8
1
end_operator
begin_operator
board ondrej prosek metroc
1
8 2
1
0 2 4 7
1
end_operator
begin_operator
board ondrej prosek taxi1
1
9 3
1
0 2 4 8
1
end_operator
begin_operator
board ondrej vinohrady taxi1
1
9 4
1
0 2 6 8
1
end_operator
begin_operator
board petr budejovicka car1
1
7 0
1
0 3 0 7
1
end_operator
begin_operator
board petr budejovicka metroc
1
8 0
1
0 3 0 8
1
end_operator
begin_operator
board petr budejovicka taxi1
1
9 0
1
0 3 0 9
1
end_operator
begin_operator
board petr butovice car1
1
7 1
1
0 3 1 7
1
end_operator
begin_operator
board petr butovice taxi1
1
9 1
1
0 3 1 9
1
end_operator
begin_operator
board petr ippavlova metroc
1
8 1
1
0 3 2 8
1
end_operator
begin_operator
board petr karlak car1
1
7 2
1
0 3 3 7
1
end_operator
begin_operator
board petr karlak taxi1
1
9 2
1
0 3 3 9
1
end_operator
begin_operator
board petr prosek car1
1
7 3
1
0 3 4 7
1
end_operator
begin_operator
board petr prosek metroc
1
8 2
1
0 3 4 8
1
end_operator
begin_operator
board petr prosek taxi1
1
9 3
1
0 3 4 9
1
end_operator
begin_operator
board petr vinohrady car1
1
7 4
1
0 3 6 7
1
end_operator
begin_operator
board petr vinohrady taxi1
1
9 4
1
0 3 6 9
1
end_operator
begin_operator
board petra budejovicka car1
1
7 0
1
0 4 0 7
1
end_operator
begin_operator
board petra budejovicka metroc
1
8 0
1
0 4 0 8
1
end_operator
begin_operator
board petra budejovicka taxi1
1
9 0
1
0 4 0 9
1
end_operator
begin_operator
board petra butovice car1
1
7 1
1
0 4 1 7
1
end_operator
begin_operator
board petra butovice taxi1
1
9 1
1
0 4 1 9
1
end_operator
begin_operator
board petra ippavlova metroc
1
8 1
1
0 4 2 8
1
end_operator
begin_operator
board petra karlak car1
1
7 2
1
0 4 3 7
1
end_operator
begin_operator
board petra karlak taxi1
1
9 2
1
0 4 3 9
1
end_operator
begin_operator
board petra prosek car1
1
7 3
1
0 4 4 7
1
end_operator
begin_operator
board petra prosek metroc
1
8 2
1
0 4 4 8
1
end_operator
begin_operator
board petra prosek taxi1
1
9 3
1
0 4 4 9
1
end_operator
begin_operator
board petra vinohrady car1
1
7 4
1
0 4 6 7
1
end_operator
begin_operator
board petra vinohrady taxi1
1
9 4
1
0 4 6 9
1
end_operator
begin_operator
board petruska budejovicka car1
1
7 0
1
0 5 0 7
1
end_operator
begin_operator
board petruska budejovicka metroc
1
8 0
1
0 5 0 8
1
end_operator
begin_operator
board petruska budejovicka taxi1
1
9 0
1
0 5 0 9
1
end_operator
begin_operator
board petruska butovice car1
1
7 1
1
0 5 1 7
1
end_operator
begin_operator
board petruska butovice taxi1
1
9 1
1
0 5 1 9
1
end_operator
begin_operator
board petruska ippavlova metroc
1
8 1
1
0 5 2 8
1
end_operator
begin_operator
board petruska karlak car1
1
7 2
1
0 5 3 7
1
end_operator
begin_operator
board petruska karlak taxi1
1
9 2
1
0 5 3 9
1
end_operator
begin_operator
board petruska prosek car1
1
7 3
1
0 5 4 7
1
end_operator
begin_operator
board petruska prosek metroc
1
8 2
1
0 5 4 8
1
end_operator
begin_operator
board petruska prosek taxi1
1
9 3
1
0 5 4 9
1
end_operator
begin_operator
board petruska vinohrady car1
1
7 4
1
0 5 6 7
1
end_operator
begin_operator
board petruska vinohrady taxi1
1
9 4
1
0 5 6 9
1
end_operator
begin_operator
board vaclav budejovicka metroc
1
8 0
1
0 6 0 7
1
end_operator
begin_operator
board vaclav budejovicka taxi1
1
9 0
1
0 6 0 8
1
end_operator
begin_operator
board vaclav butovice taxi1
1
9 1
1
0 6 1 8
1
end_operator
begin_operator
board vaclav ippavlova metroc
1
8 1
1
0 6 2 7
1
end_operator
begin_operator
board vaclav karlak taxi1
1
9 2
1
0 6 3 8
1
end_operator
begin_operator
board vaclav prosek metroc
1
8 2
1
0 6 4 7
1
end_operator
begin_operator
board vaclav prosek taxi1
1
9 3
1
0 6 4 8
1
end_operator
begin_operator
board vaclav vinohrady taxi1
1
9 4
1
0 6 6 8
1
end_operator
begin_operator
disembark jan budejovicka metroc
1
8 0
1
0 0 7 0
1
end_operator
begin_operator
disembark jan budejovicka taxi1
1
9 0
1
0 0 8 0
1
end_operator
begin_operator
disembark jan butovice taxi1
1
9 1
1
0 0 8 1
1
end_operator
begin_operator
disembark jan ippavlova metroc
1
8 1
1
0 0 7 2
1
end_operator
begin_operator
disembark jan karlak taxi1
1
9 2
1
0 0 8 3
1
end_operator
begin_operator
disembark jan prosek metroc
1
8 2
1
0 0 7 4
1
end_operator
begin_operator
disembark jan prosek taxi1
1
9 3
1
0 0 8 4
1
end_operator
begin_operator
disembark jan vinohrady taxi1
1
9 4
1
0 0 8 6
1
end_operator
begin_operator
disembark jana budejovicka metroc
1
8 0
1
0 1 7 0
1
end_operator
begin_operator
disembark jana budejovicka taxi1
1
9 0
1
0 1 8 0
1
end_operator
begin_operator
disembark jana butovice taxi1
1
9 1
1
0 1 8 1
1
end_operator
begin_operator
disembark jana ippavlova metroc
1
8 1
1
0 1 7 2
1
end_operator
begin_operator
disembark jana karlak taxi1
1
9 2
1
0 1 8 3
1
end_operator
begin_operator
disembark jana prosek metroc
1
8 2
1
0 1 7 4
1
end_operator
begin_operator
disembark jana prosek taxi1
1
9 3
1
0 1 8 4
1
end_operator
begin_operator
disembark jana vinohrady taxi1
1
9 4
1
0 1 8 6
1
end_operator
begin_operator
disembark ondrej budejovicka metroc
1
8 0
1
0 2 7 0
1
end_operator
begin_operator
disembark ondrej budejovicka taxi1
1
9 0
1
0 2 8 0
1
end_operator
begin_operator
disembark ondrej butovice taxi1
1
9 1
1
0 2 8 1
1
end_operator
begin_operator
disembark ondrej ippavlova metroc
1
8 1
1
0 2 7 2
1
end_operator
begin_operator
disembark ondrej karlak taxi1
1
9 2
1
0 2 8 3
1
end_operator
begin_operator
disembark ondrej prosek metroc
1
8 2
1
0 2 7 4
1
end_operator
begin_operator
disembark ondrej prosek taxi1
1
9 3
1
0 2 8 4
1
end_operator
begin_operator
disembark ondrej vinohrady taxi1
1
9 4
1
0 2 8 6
1
end_operator
begin_operator
disembark petr budejovicka car1
1
7 0
1
0 3 7 0
1
end_operator
begin_operator
disembark petr budejovicka metroc
1
8 0
1
0 3 8 0
1
end_operator
begin_operator
disembark petr budejovicka taxi1
1
9 0
1
0 3 9 0
1
end_operator
begin_operator
disembark petr butovice car1
1
7 1
1
0 3 7 1
1
end_operator
begin_operator
disembark petr butovice taxi1
1
9 1
1
0 3 9 1
1
end_operator
begin_operator
disembark petr ippavlova metroc
1
8 1
1
0 3 8 2
1
end_operator
begin_operator
disembark petr karlak car1
1
7 2
1
0 3 7 3
1
end_operator
begin_operator
disembark petr karlak taxi1
1
9 2
1
0 3 9 3
1
end_operator
begin_operator
disembark petr prosek car1
1
7 3
1
0 3 7 4
1
end_operator
begin_operator
disembark petr prosek metroc
1
8 2
1
0 3 8 4
1
end_operator
begin_operator
disembark petr prosek taxi1
1
9 3
1
0 3 9 4
1
end_operator
begin_operator
disembark petr vinohrady car1
1
7 4
1
0 3 7 6
1
end_operator
begin_operator
disembark petr vinohrady taxi1
1
9 4
1
0 3 9 6
1
end_operator
begin_operator
disembark petra budejovicka car1
1
7 0
1
0 4 7 0
1
end_operator
begin_operator
disembark petra budejovicka metroc
1
8 0
1
0 4 8 0
1
end_operator
begin_operator
disembark petra budejovicka taxi1
1
9 0
1
0 4 9 0
1
end_operator
begin_operator
disembark petra butovice car1
1
7 1
1
0 4 7 1
1
end_operator
begin_operator
disembark petra butovice taxi1
1
9 1
1
0 4 9 1
1
end_operator
begin_operator
disembark petra ippavlova metroc
1
8 1
1
0 4 8 2
1
end_operator
begin_operator
disembark petra karlak car1
1
7 2
1
0 4 7 3
1
end_operator
begin_operator
disembark petra karlak taxi1
1
9 2
1
0 4 9 3
1
end_operator
begin_operator
disembark petra prosek car1
1
7 3
1
0 4 7 4
1
end_operator
begin_operator
disembark petra prosek metroc
1
8 2
1
0 4 8 4
1
end_operator
begin_operator
disembark petra prosek taxi1
1
9 3
1
0 4 9 4
1
end_operator
begin_operator
disembark petra vinohrady car1
1
7 4
1
0 4 7 6
1
end_operator
begin_operator
disembark petra vinohrady taxi1
1
9 4
1
0 4 9 6
1
end_operator
begin_operator
disembark petruska budejovicka car1
1
7 0
1
0 5 7 0
1
end_operator
begin_operator
disembark petruska budejovicka metroc
1
8 0
1
0 5 8 0
1
end_operator
begin_operator
disembark petruska budejovicka taxi1
1
9 0
1
0 5 9 0
1
end_operator
begin_operator
disembark petruska butovice car1
1
7 1
1
0 5 7 1
1
end_operator
begin_operator
disembark petruska butovice taxi1
1
9 1
1
0 5 9 1
1
end_operator
begin_operator
disembark petruska ippavlova metroc
1
8 1
1
0 5 8 2
1
end_operator
begin_operator
disembark petruska karlak car1
1
7 2
1
0 5 7 3
1
end_operator
begin_operator
disembark petruska karlak taxi1
1
9 2
1
0 5 9 3
1
end_operator
begin_operator
disembark petruska prosek car1
1
7 3
1
0 5 7 4
1
end_operator
begin_operator
disembark petruska prosek metroc
1
8 2
1
0 5 8 4
1
end_operator
begin_operator
disembark petruska prosek taxi1
1
9 3
1
0 5 9 4
1
end_operator
begin_operator
disembark petruska vinohrady car1
1
7 4
1
0 5 7 6
1
end_operator
begin_operator
disembark petruska vinohrady taxi1
1
9 4
1
0 5 9 6
1
end_operator
begin_operator
disembark vaclav budejovicka metroc
1
8 0
1
0 6 7 0
1
end_operator
begin_operator
disembark vaclav budejovicka taxi1
1
9 0
1
0 6 8 0
1
end_operator
begin_operator
disembark vaclav butovice taxi1
1
9 1
1
0 6 8 1
1
end_operator
begin_operator
disembark vaclav ippavlova metroc
1
8 1
1
0 6 7 2
1
end_operator
begin_operator
disembark vaclav karlak taxi1
1
9 2
1
0 6 8 3
1
end_operator
begin_operator
disembark vaclav prosek metroc
1
8 2
1
0 6 7 4
1
end_operator
begin_operator
disembark vaclav prosek taxi1
1
9 3
1
0 6 8 4
1
end_operator
begin_operator
disembark vaclav vinohrady taxi1
1
9 4
1
0 6 8 6
1
end_operator
begin_operator
drive-car petr car1 budejovicka butovice
1
3 7
1
0 7 0 1
1
end_operator
begin_operator
drive-car petr car1 budejovicka prosek
1
3 7
1
0 7 0 3
1
end_operator
begin_operator
drive-car petr car1 butovice budejovicka
1
3 7
1
0 7 1 0
1
end_operator
begin_operator
drive-car petr car1 butovice karlak
1
3 7
1
0 7 1 2
1
end_operator
begin_operator
drive-car petr car1 butovice prosek
1
3 7
1
0 7 1 3
1
end_operator
begin_operator
drive-car petr car1 karlak butovice
1
3 7
1
0 7 2 1
1
end_operator
begin_operator
drive-car petr car1 karlak prosek
1
3 7
1
0 7 2 3
1
end_operator
begin_operator
drive-car petr car1 karlak vinohrady
1
3 7
1
0 7 2 4
1
end_operator
begin_operator
drive-car petr car1 prosek budejovicka
1
3 7
1
0 7 3 0
1
end_operator
begin_operator
drive-car petr car1 prosek butovice
1
3 7
1
0 7 3 1
1
end_operator
begin_operator
drive-car petr car1 prosek karlak
1
3 7
1
0 7 3 2
1
end_operator
begin_operator
drive-car petr car1 vinohrady karlak
1
3 7
1
0 7 4 2
1
end_operator
begin_operator
drive-car petra car1 budejovicka butovice
1
4 7
1
0 7 0 1
1
end_operator
begin_operator
drive-car petra car1 budejovicka prosek
1
4 7
1
0 7 0 3
1
end_operator
begin_operator
drive-car petra car1 butovice budejovicka
1
4 7
1
0 7 1 0
1
end_operator
begin_operator
drive-car petra car1 butovice karlak
1
4 7
1
0 7 1 2
1
end_operator
begin_operator
drive-car petra car1 butovice prosek
1
4 7
1
0 7 1 3
1
end_operator
begin_operator
drive-car petra car1 karlak butovice
1
4 7
1
0 7 2 1
1
end_operator
begin_operator
drive-car petra car1 karlak prosek
1
4 7
1
0 7 2 3
1
end_operator
begin_operator
drive-car petra car1 karlak vinohrady
1
4 7
1
0 7 2 4
1
end_operator
begin_operator
drive-car petra car1 prosek budejovicka
1
4 7
1
0 7 3 0
1
end_operator
begin_operator
drive-car petra car1 prosek butovice
1
4 7
1
0 7 3 1
1
end_operator
begin_operator
drive-car petra car1 prosek karlak
1
4 7
1
0 7 3 2
1
end_operator
begin_operator
drive-car petra car1 vinohrady karlak
1
4 7
1
0 7 4 2
1
end_operator
begin_operator
drive-car vaclav taxi1 budejovicka butovice
1
6 8
1
0 9 0 1
1
end_operator
begin_operator
drive-car vaclav taxi1 budejovicka prosek
1
6 8
1
0 9 0 3
1
end_operator
begin_operator
drive-car vaclav taxi1 butovice budejovicka
1
6 8
1
0 9 1 0
1
end_operator
begin_operator
drive-car vaclav taxi1 butovice karlak
1
6 8
1
0 9 1 2
1
end_operator
begin_operator
drive-car vaclav taxi1 butovice prosek
1
6 8
1
0 9 1 3
1
end_operator
begin_operator
drive-car vaclav taxi1 karlak butovice
1
6 8
1
0 9 2 1
1
end_operator
begin_operator
drive-car vaclav taxi1 karlak prosek
1
6 8
1
0 9 2 3
1
end_operator
begin_operator
drive-car vaclav taxi1 karlak vinohrady
1
6 8
1
0 9 2 4
1
end_operator
begin_operator
drive-car vaclav taxi1 prosek budejovicka
1
6 8
1
0 9 3 0
1
end_operator
begin_operator
drive-car vaclav taxi1 prosek butovice
1
6 8
1
0 9 3 1
1
end_operator
begin_operator
drive-car vaclav taxi1 prosek karlak
1
6 8
1
0 9 3 2
1
end_operator
begin_operator
drive-car vaclav taxi1 vinohrady karlak
1
6 8
1
0 9 4 2
1
end_operator
begin_operator
drive-underground ondrej metroc budejovicka ippavlova
1
2 7
1
0 8 0 1
1
end_operator
begin_operator
drive-underground ondrej metroc ippavlova budejovicka
1
2 7
1
0 8 1 0
1
end_operator
begin_operator
drive-underground ondrej metroc ippavlova prosek
1
2 7
1
0 8 1 2
1
end_operator
begin_operator
drive-underground ondrej metroc prosek ippavlova
1
2 7
1
0 8 2 1
1
end_operator
begin_operator
walk jan ippavlova karlak
0
1
0 0 2 3
1
end_operator
begin_operator
walk jan ippavlova vinohrady
0
1
0 0 2 6
1
end_operator
begin_operator
walk jan karlak ippavlova
0
1
0 0 3 2
1
end_operator
begin_operator
walk jan karlak staromak
0
1
0 0 3 5
1
end_operator
begin_operator
walk jan staromak karlak
0
1
0 0 5 3
1
end_operator
begin_operator
walk jan vinohrady ippavlova
0
1
0 0 6 2
1
end_operator
begin_operator
walk jana ippavlova karlak
0
1
0 1 2 3
1
end_operator
begin_operator
walk jana ippavlova vinohrady
0
1
0 1 2 6
1
end_operator
begin_operator
walk jana karlak ippavlova
0
1
0 1 3 2
1
end_operator
begin_operator
walk jana karlak staromak
0
1
0 1 3 5
1
end_operator
begin_operator
walk jana staromak karlak
0
1
0 1 5 3
1
end_operator
begin_operator
walk jana vinohrady ippavlova
0
1
0 1 6 2
1
end_operator
begin_operator
walk ondrej ippavlova karlak
0
1
0 2 2 3
1
end_operator
begin_operator
walk ondrej ippavlova vinohrady
0
1
0 2 2 6
1
end_operator
begin_operator
walk ondrej karlak ippavlova
0
1
0 2 3 2
1
end_operator
begin_operator
walk ondrej karlak staromak
0
1
0 2 3 5
1
end_operator
begin_operator
walk ondrej staromak karlak
0
1
0 2 5 3
1
end_operator
begin_operator
walk ondrej vinohrady ippavlova
0
1
0 2 6 2
1
end_operator
begin_operator
walk petr ippavlova karlak
0
1
0 3 2 3
1
end_operator
begin_operator
walk petr ippavlova vinohrady
0
1
0 3 2 6
1
end_operator
begin_operator
walk petr karlak ippavlova
0
1
0 3 3 2
1
end_operator
begin_operator
walk petr karlak staromak
0
1
0 3 3 5
1
end_operator
begin_operator
walk petr staromak karlak
0
1
0 3 5 3
1
end_operator
begin_operator
walk petr vinohrady ippavlova
0
1
0 3 6 2
1
end_operator
begin_operator
walk petra ippavlova karlak
0
1
0 4 2 3
1
end_operator
begin_operator
walk petra ippavlova vinohrady
0
1
0 4 2 6
1
end_operator
begin_operator
walk petra karlak ippavlova
0
1
0 4 3 2
1
end_operator
begin_operator
walk petra karlak staromak
0
1
0 4 3 5
1
end_operator
begin_operator
walk petra staromak karlak
0
1
0 4 5 3
1
end_operator
begin_operator
walk petra vinohrady ippavlova
0
1
0 4 6 2
1
end_operator
begin_operator
walk petruska ippavlova karlak
0
1
0 5 2 3
1
end_operator
begin_operator
walk petruska ippavlova vinohrady
0
1
0 5 2 6
1
end_operator
begin_operator
walk petruska karlak ippavlova
0
1
0 5 3 2
1
end_operator
begin_operator
walk petruska karlak staromak
0
1
0 5 3 5
1
end_operator
begin_operator
walk petruska staromak karlak
0
1
0 5 5 3
1
end_operator
begin_operator
walk petruska vinohrady ippavlova
0
1
0 5 6 2
1
end_operator
begin_operator
walk vaclav ippavlova karlak
0
1
0 6 2 3
1
end_operator
begin_operator
walk vaclav ippavlova vinohrady
0
1
0 6 2 6
1
end_operator
begin_operator
walk vaclav karlak ippavlova
0
1
0 6 3 2
1
end_operator
begin_operator
walk vaclav karlak staromak
0
1
0 6 3 5
1
end_operator
begin_operator
walk vaclav staromak karlak
0
1
0 6 5 3
1
end_operator
begin_operator
walk vaclav vinohrady ippavlova
0
1
0 6 6 2
1
end_operator
begin_operator
work jan karlak
1
0 3
1
0 10 -1 0
1
end_operator
begin_operator
work jana vinohrady
1
1 6
1
0 11 -1 0
1
end_operator
begin_operator
work petr budejovicka
1
3 0
1
0 13 -1 0
1
end_operator
begin_operator
work petra prosek
1
4 4
1
0 14 -1 0
1
end_operator
begin_operator
work petruska staromak
1
5 5
1
0 15 -1 0
1
end_operator
begin_operator
work-taxi vaclav taxi1
1
6 8
1
0 16 -1 0
1
end_operator
begin_operator
work-underground ondrej metroc
1
2 7
1
0 12 -1 0
1
end_operator
0
