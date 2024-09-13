- Zwei gängige [[Definition Computer|Definitionen]] für "Computer"
1. [[EVA Prinzip]]:
	1. Computer an sich ist eine Blackbox
	2. verarbeitet eine Eingabe und produziert eine Ausgabe
2. [[Anweisungsbasierte Definition]]
	1. Ein Computer führt Anweisungen der Reihe nach durch --> [[Definition Algorithmus]]

### Minimalsystem
[[Minimalsystem]] definiert ein System, das aus genau den Komponenten besteht, die ein Computer _mindestens_ braucht:
1. [[CPU]]
2. Speicher ([[Memory]]) für Befehle und [[Daten]]
3. I/O - Verbindunb zur Außenwelt
4. [[BUS-System]] zur Kommunikation

#### basic Architekturen
1. [[Harvard-Architektur]]
	1. Befehle und Daten werden seperat voneinander gespeichert
		1. Datenspeicher ist read-write, Befehlsspeicher readonly
		2. Kompilierte Programme landen in Datenspeicher ==> nicht ausführbar
		3. [[CPU]] kann gleichzeitig mit beiden Speichern kommunizieren
2. [[Von-Neumann Architektur]]
	1. Es gibt nur _einen_ Speicher
		1. was Befehl und was [[Daten]] ist muss Entwickler entscheiden
		2. ermöglicht das [[Compiler|kompilieren]] und anschließendes Ausführen von Programmen
