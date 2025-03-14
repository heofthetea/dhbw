[[Simulation While-Programm durch TM]]

> [!hint] 3 Variablen kodieren eine [[Konfiguration TM|Konfiguration]] der TM: $xq_{i}y$

- $x_{2} = i$ codiert den [[Zustand]]
- $x_{1}$ und $x_{3}$ codieren $x$ und $y$:
	- Symbol $c_{i}$ codiert als $i$
	- [[Wort]] $w \in \Gamma^{l}$ codiert als Zahl zur Basis $|\Gamma| + 1$ => [[Stellenwertzahl]], je weiter weg vom Kopf, desto höher der Stellenwert (s. [[Äquivalenz 2-Stack KA und TM]])
		- $c_{3}c_{5}c_{4}c_{1}\ q_{5}\ c_{3}c_{9}c_{6}$ wird zu: $x_{1} = 3541$, $x_{2} = 5$, $x_{3} = 693$

#### Arbeitsweise
1. Codiere Eingabe in eine Startkonfiguration
2. [[WHILE while loop]]:
	1. Decodiere aktuelles [[Symbol]] $c$ (durch $x_{3}$ MOD $k + 1$) und $q$ aus $x_{2}$
	2. Prüfe, ob es eine [[Folgekonfiguration]] $q$ und [[Symbol]] $c$ gibt
		1. ja: ändere $x_{1}, x_{2}, x_{3}$ entsprechend
		2. nein: beende [[WHILE while loop]]
3. decodiere Ausgabe aus $x_{3}$ und schreibe Wert in $x_{0}$ (wird nur ausgeführt, wenn $M$ terminiert)