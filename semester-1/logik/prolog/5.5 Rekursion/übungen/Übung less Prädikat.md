#übung-logik 

![[Pasted image 20240130143206.png]]

[[less.pl]]
```pl
less(0, s(_)).
less(s(X), s(Y)) :- less(X, Y).
```