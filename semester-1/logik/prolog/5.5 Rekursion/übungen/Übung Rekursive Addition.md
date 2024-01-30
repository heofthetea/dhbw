#übung-logik

```
add(0, X, X).
add(s(X), Y, s(Z)) :- add(X, Y, Z).
```
übersetzt: 
1. $0 + X = X$
2. Die Summe des _Nachfolger von X_ und Y ist der _Nachfolger_ der Summe von X und Y.

```
?- add(s(s(0)), s(s(s(0))), Sum).
```
- Es gibt keine Verzweigungen (da Argument entweder 0, oder s(X))
- Es werden die Argumente $X_{i}, Y_{i}, Z_{i}$ gebunden --> dadurch wird in jeder Iteration von $X$ ein $s()$ weggenommen, und bei $Sum$ kommt ein $s()$ dazu

![[rekursiver_suchbaum.png]]
