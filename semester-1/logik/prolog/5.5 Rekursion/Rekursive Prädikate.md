> Ein [[Prädikat]] $p$ ist _rekursiv_, wenn in der [[Regeln (Rules)|Regel]], die $p$ als Head hat, im Body ebenfalls $p$ vorkommt.

- [[Beispiel Rekursion|Rekursion]] ist vonnöten, damit Prolog _turing-complete_ ist.
- Kann [[Endlosschleife|Endlosschleifen]] hervorrufen, oder zu nicht-terminierenden Programmen finden
- Fix: [[Best-Practices Rekursion]]

## Beispiel
#### Wissensbank
```pl
child(anna, betty).
child(betty, carol).
child(carol, donna).

descend(X, Y) :- child(X, Y).
descend(X, Y) :- child(X, Z), descend(Z, Y).
```

#### Interpreter
```pl
?- descend(anna, betty).
true.

?- descend(anna, carol).
true.

?- descend(anna, donna).
true.
```

#### Suchbaum
> Bei jeder [[Unifikation]] werden die Variablen aus der [[Wissensbank]] umbenannt!!

(ansonsten würde Backtracking in Rekursion nicht funktionieren)
![[Pasted image 20240130133156.png]]
- Läuft hier nicht in [[Endlosschleife]], da `donna` nirgends als erstes Argument für das [[Prädikat]] `child` steht.