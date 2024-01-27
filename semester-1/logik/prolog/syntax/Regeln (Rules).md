## Syntax
> Zu verstehen als logische _Implikation_
> Gesprochen: "head _if_ body"

Stellt verschiedene [[Goal|Goals]] in Relation miteinander
```
<Head> :- <Body>
```
**!! Achtung** Implication anders herum als in Logik:
$F \rightarrow V$ = `<V> :- <F>`

_Fakt_  kann als regel mit leerem Rumpf interpretiert werden:
`fact(X)` = `fact(X) :- true`

![[Elterngoal und Subgoal]]
### Konjunktion im Rumpf
```
<Head> :- <Goal1>, <Goal2>, ...
```
= $Goal1 \land Goal2 \land ... \rightarrow Head$

### Disjunktion im Rumpf
```
<Head> :- <Goal1> ; <Goal2> ; ...
```
= $Goal1 \lor Goal2 \lor ... \rightarrow Head$

##### Konvention
Statt _Semikolon_ lieber _mehrere_ Regeln zu verwenden --> Erhöht lesbarkeit

## Beispiel
#### Wissensbank
```
works(jules).
hungry(vincent).
hungry(jules) :- works(jules).
eats(vincent) :- hungry(vincent).
eats(jules) :- hungry(jules).
```
--> 2 Fakten, 3 Regeln

#### Anfragen
```
?- eats(vincent).
true.

?- eats(jules).
true.
```
