> Abhängigkeitsbewahrende Zerlegung

[[Gültige Zerlegung]]

> [!warning] Bei [[BCNF]] ist nicht gewährleistet, dass eine [[Gültige Zerlegung|Zerlegung]] alle [[Funktionale Abhängigkeit|funktionalen Abhängigkeiten]] bewahrt!

=> Entscheidung treffen: Ist mir der Erhalt der Abhängigkeiten wichtiger, oder der garantierte Ausschluss von Anomalien?

## Prüfung
- Nach der Zerlegung eines [[Schema einer Relation]] $[R]$ in verschiedene Teilschemata $[R_{i}]$, kann jede [[Funktionale Abhängigkeit]] in mindestens einer der $[R_{i}]$ dargestellt werden.

$$\left(\bigcup\limits_{i = 1}^{n}F_{[R_{i}]}\right)^{+} = F^{+}$$
> [!info] Jede der ursprünglichen FAs gilt immernoch, in **mindestens** einer der zerlegten Relationen.

