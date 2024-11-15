[[Turing-Berechenbarkeit]], [[WHILE Berechenbarkeit]], [[k-Band Turing Machine]], [[WHILE Programm]]

> [!info] Jede verwendete [[Variable]] des Programms bekommt ihr eigenes Band

- Simuliere [[WHILE Programm]] $P$ mit $k$ Eingabevariablen und $l \geq k$ verwendete Variablen durch $(l + 1)$-Band-[[Turing Machine]] $M_{P}$
1. Eingabevektor $x_{1}\square x_{2}\square...\square x_{3}$ -> Variablen auf ihre dedicated Bänder kopieren 
2. Kopiere $x_{i}$ auf Band $i + 1$; lösche Band $1$
3. Simuliere einzelne Schritte:
	1. [[WHILE Zuweisung]]: Führe Operation auf Band für Ziel der Zuweisung aus
	2. [[WHILE Komposition]]: Mach zuerst erstes Programm, danach das zweite
	3. [[WHILE while loop]]
		1. Wenn Band $i + 1$ leer ist, terminiere
		2. Sonst simuliere $P_{1}$, beginnne von vorne
4. Nach Terminierung: Spule Band $1$ an den Anfang zurück => Ausgabevariable


