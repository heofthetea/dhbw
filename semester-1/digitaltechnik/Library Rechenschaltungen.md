#library 
[[Hub Rechenschaltungen]]

## Addierer
- [[Halbaddierer]] addiert zwei bit
- [[Volladdierer]] addiert _drei_ bit zu drei bit
	- wird aus zwei [[Halbaddierer|Halbaddierern]] und einem $OR$ gebaut
- [[Ripple-Carry-Adder]] analog zu Menschlicher Intuition:
	- $Z_{i} = Z(A_{i} + B_{i} + CO_{i - 1})$  
	- gleiche Indizes durch [[Volladdierer]] addieren, wobei stets der $CO$ des niederwertigeren [[Volladdierer|Volladierers]] auf den $CI$ gesetzt wird
		- $Z$ direkt in Ergebnisregister, $CO$ weiterreichen
### Subtrahierer
-  [[Subtraktion mit Komplementbildung]]
	- [[Zweierkomplement]] wird gebildet, indem $1$ zu _invertierter_ Zahl addiert wird
		- $1$ kann auch zum Gesamtergebnis addiert werden
	- Umsetzung: [[Ripple-Carry-Adder]], in der niederwertigster [[Halbaddierer]] durch [[Volladdierer]] mit $CI = 1$ ersetzt wird
- [[Addier-Subtrahier-Werk]]: Durch _Steuereingang_ $S$ kann gesteuert werden, ob Invertiert wird oder nicht
	- [[XOR]] regelt lol

## Multiplikationsschaltung
- $AND$ ist ein "1-bit Multiplizierer"
- für mehr Bits: [[Parallele Multiplikationsschaltung]]
	- _human Approach_: jede 1-bit Kombination aufmultiplizieren, alles aufsummieren ([[Ripple-Carry-Adder]])
	- Bsp.: [[4-bit parallele Multiplikationsschaltung]]