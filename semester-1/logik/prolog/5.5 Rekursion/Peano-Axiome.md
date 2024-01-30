1. Null ist eine natürliche Zahl.
2. Jede natürliche Zahl hat eine natürliche Zahl als Nachfolger.

#### Wissensbank
```pl
numeral(0).
numeral(s(X)) :- numeral(X).
```

#### Interpreter
```pl
?- numeral(s(s(S(0)))).
true.

?- numeral(X).
X = 0 ;
X = s(0) ;
X = s(s(0)) ;
...
```