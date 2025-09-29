[[2NF]], [[Gültige Zerlegung]], [[Verlustlose Zerlegung]], [[Hüllentreue Zerlegung]], [[Prüfen auf 3NF]]


1. [[Prüfen auf 3NF]] -> Tabelle


| X   | $\alpha$ | X ist [[Superschlüssel]] | $\alpha$ ist [[Primattribut\|Prim]] |
| --- | -------- | ------------------------ | ----------------------------------- |
| A   | B        | -                        | -                                   |
|     | C        | -                        | -                                   |
| D   | E        | -                        | -                                   |
| AD  | F        | Y                        | -                                   |
2. Finde alle $X_{i}$, für die keine Bedingung erfüllt ist
3. Für alle $X_{i}$ -> $X_{i}$ wird [[PRIMARY KEY Constraint|Primärschlüssel]] in xeiner eigenen neuen [[Relation]] mit den [[Funktionale Abhängigkeit|funktionalen Abhängigkeiten]] 