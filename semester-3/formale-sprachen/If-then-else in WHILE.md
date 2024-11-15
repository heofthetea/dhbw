[[WHILE Programm]]

```while
if xi then P1 else P2 end
```

> [!info] `P1` wird ausgeführt, wenn `xi != 0` gilt

```while
loop xi do
	xi := xl + 1
end;
xk := xl + 1;
loop xj do
	xk := xl + 0
end;
loop xj do
	P // xj != 0 ~> P1 wird ausgeführt
end;
loop xk do
	P2 // xk != 0 ~> P1 wird ausgeführt
end
```

> [!hint] $x_{l}$ ist per default $0$ => nicht initialisiert


> [!hint] `loop xi`: ist einfach ein [[Bash for loop|foor loop]], der $x_{i}$ mal ausgeführt wird

