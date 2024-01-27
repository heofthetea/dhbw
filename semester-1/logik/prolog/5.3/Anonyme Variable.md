> Variable '`_`' 
> Gesprochen: "irgendetwas".

- ist mit jedem Term unifizierbar
- kann bei jedem Vorkommen _unterschiedlich_ gebunden werden
- Bindung wird nicht zurückgegeben
_Zweck_: Platzhalter für Terme, die uninteressant ist

### Beispiel
_Wissensbank_:
```
married(mia, marsellus).

married(X) :- married(X, _).
married(X) :- married(_, X).
```
_Interpreter_:
```
?- married(X, Y).
X = mia,
Y = marsellus.

?- married(X, X).
false.

?- married(_, _).
true.

?- married(X).
X = mia ;
X = marsellus.
```