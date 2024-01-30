Ein Goal einer [[Anfrage]] wird [[Unifikation|unifiziert]] mit:
- Den _Fakten_ in der [[Wissensbank]]
- Den _Köpfen_ der [[Regeln (Rules)]] in der Wissensbank

> Variablenbelegungen werden _nur_ für Variablen in der [[Anfrage|Anfrage]] ausgegeben!!

```
vertical(line(point(X,Y), point(X,Z))).
horizontal(line(point(X,Y), point(Z, Y))).
```

Interpreter:
```
?- horizontal(line(1,2), point(3, W)).
W = 2.

?- horizontal(line(point(2,3), Point)).
Point = (_G2239, 3).
```
- `_G2239` ist eine _ungebundene interne_ [[Variable|Variable]]
	- hier wurde die Variable umbenannt lol
	- _interne_ Variablen fangen immer mit Underscore an
- _Interpretation_: _Jede_ Bindung führt zu Unifikation!!!