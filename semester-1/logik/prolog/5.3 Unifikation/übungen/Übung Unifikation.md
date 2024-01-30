#übung-logik 
[[Unifikation]]
![[Logik-handout.pdf]]

1) bread = bread -> _true_ 
2) 'Bread' = bread -> _false_
3) 'bread' = bread -> _true_
4) Bread = bread -> _true_ (`Bread` ist [[Variable|Variable]]: `Bread = bread`)
5) bread = sausage -> _false_
6) food(bread) = bread -> _false_
7) food(bread) = X -> _true_ (`X = food(bread)`)
8) food(X) = food(bread) -> _true_ (`X = bread`)
9) food(bread, X) = food(Y, sausage) -> _true_ (`X = sausage, Y = bread`)
10) food(bread, X, beer) = food(Y, sausage, X) -> _false_ (X kann nur einmal abgebildet werden)
11) _false_ (verschiedenstelige Prädikate)
12) _true_ (kein Occurs-Check -> `X = food(X)`)
13) _true_ (`X = food(bread), Y = drink(beer)`)
14) _false_ (keine gleichzeitige Belegung)