[[WHILE Programm]]

## Modifizierte Differenz

> [!info] `-` entspricht modifizierter Differenz $\dot{-}$ 

Eingabe: `x1 - x2`

```c
x0 = x1 + 0;
loop x2 do
	x0 = x0 - 1
end
```

> [!hint] should work because $0 \dot{-} 1 = 0$ 

## Ganzzahl-Division
Eingabe `x1 DIV x2`

```c
while x1 do
	x3 = x1 - x2;
	if x3 then
		x1 - x4 + 0
	else
		x1 = x1 - x2;
		x0 - x0 + 1;
	end
end
```


## Modulo
Eingabe: `x1 MOD x2`

```c
while x1 do
	x3 = x2 - x1
	if x3 then
		x0 = x1 + 0;
		x1 = x4 + 0
	else
		x1 = x1 - x2
	end
end
```



