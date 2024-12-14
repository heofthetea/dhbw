> Optimierter [[Automat]] mit mit _minimal großer_ [[Zustand|Zustandsmenge]]

[[Erreichbarer Zustand]] [[Unterscheidbarer Zustand]] [[Minimierung DFA]]

- Alle Zustandspaare $(p, q) \not\in U$ sind [[Unterscheidbarer Zustand|unterscheidbar]] (also nicht äquivalent)
- Der [[Quotientenautomat]] für eine [[Reguläre Sprache|Sprache]] ist eindeutig und einzigartig

Der [[Quotientenautomat]] $A_{Q}$ ist minimal, d.h. es gibt keinen Automaten, der dieselbe [[Reguläre Sprache|Sprache]] wie $A_{Q}$ mit weniger [[Zustand|Zuständen]] darstellt.


## Vereinigung äquivalenter Zustände
1. Ersetze [[Übergangsfunktion|Übergänge]] zu $q$ durch Übergänge zu $p$
2. Entferne $q$ (und alle davon ausgehenden Übergänge)

