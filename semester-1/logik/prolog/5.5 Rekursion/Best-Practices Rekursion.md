- In [[Wissensbank]]
	- stets _zuerst_ alle nicht-rekursiven Klauseln (_Basisklausel_) vor [[Rekursive Prädikate|Rekursiver Klausel]] schreiben
	- [[tail-rekursiv|tail-rekursive]] Prädikate schreiben

### Bad Practices
```pl
married(marsellus, mia).
married(X, Y) :- married(Y, X).
```
- wenn aufgerufen mit zwei Argumenten, die _nicht explizit_ miteinander verheiratet sind, rennt `married(X, Y)` in eine [[Endlosschleife]]
	- Es werden die beiden Argumente einfach fortlaufend vertauscht