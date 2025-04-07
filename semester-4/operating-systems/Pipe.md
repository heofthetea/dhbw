> Datenstrom zwischen zwei [[Prozess|Prozessen]]

- Ausgabe des Source [[Prozess]] = Eingabe des Zielprozess
- arbeitet nach [[FIFO]] Prinzip
- Bedingung
	- [[Daten]] gehen nur in [[Simplex-Verbindung|eine]] Richtung
	- [[Prozess]] müssen gemeinsame Vorfahren haben

> [!hint] [[systemd]] gilt _nicht_ immer als gemeinsamer Vorfahre -> Weil: kann Prozesse abkoppeln.

> [!info] Der Source Prozess muss nicht [[Haltekonfiguration|terminieren]] - auch Ausgaben zwischendurch können piped werden.

