> Jedes [[Atom]] und jeder [[Komplexer Term]] ist ein _Goal_.

Eselsbrücke für Begriff: Die Aussage wahr zu machen ist das _Ziel_.

in [[Wissensbank]]: Aussage über Domäne
als [[Prolog Interpreter#Anfragen|Anfrage]]: Frage zur Domäne


[[Variable]], [[Zahl]] sind _keine_ Goals!!

### Syntax:
(Gleich für Fakten und Anfragen)
```Prolog
<Goal>.
```
 Beispiele:
 ```prolog
 woman(mia).
 woman(jody).
 woman(yolanda).
 dances(jody).
 party.
```

im [[Prolog Interpreter]]:
```prolog
?- woman(mia). 
true.

?- dances(jody).
true.

?- dances(mia).
false.
```
--> Es folgt _nicht_, dass Mia nicht tanzen _könnte_!! ([[Closed World Assumption]])