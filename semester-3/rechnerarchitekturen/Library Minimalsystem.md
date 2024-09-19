- Zwei gängige [[Definition Computer|Definitionen]] für "Computer"
1. [[EVA Prinzip]]:
	1. Computer an sich ist eine Blackbox
	2. verarbeitet eine Eingabe und produziert eine Ausgabe
2. [[Anweisungsbasierte Definition]]
	1. Ein Computer führt Anweisungen der Reihe nach durch --> [[Definition Algorithmus]]

## Minimalsystem
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

## CPU
[[CPU]]
![[Pasted image 20240918161722.png|600]]

- [[Steuerwerk]]: Steuert die Vorgänge _in_ der [[CPU]]. (think "CPU of CPU")
	- nimmt [[Instruktion|Instruktionen]] entgegen und sagt [[Operationswerk]], was zu tun ist
- [[BUS-Interface]]: Kommunikation der [[CPU]] mit Rest des [[Minimalsystem|Computers]]
	- sind die Pins, die unten an einer [[CPU]] dran sind
	- validiert [[Daten]], decodiert [[Instruktion|Instruktionen]], kommuniziert mit [[Memory]]
#### Operationswerk
- [[Operationswerk]]: ist der Teil, der actually arbeitet
	- nimmt Steuersignale ("Conditioning Codes") von [[Steuerwerk]] entgegen
	- Produziert [[Daten]] (z.B. Ergebnisse) oder [[Adresse|Adressen]]
	- Reports back to [[Steuerwerk]] durch Statusmeldungen
- Bestandteile:
	- [[ALU|Arithmetisch Logische Einheit]] - führt Berechnungen mit [[Daten]] durch
	- [[Leitwerk]] - führt [[Pointer#Pointer arithmetic|Pointer-Arithmetik]] durch (z.B. Zugriff auf [[Array]])

### Befehlszyklus
[[Befehlszyklus]]
- einfach: "holen, abarbeiten, holen, abarbeiten, holen, abarbeiten, ..."
- detailliert: 
	1. **Code Fetch**: Fetchen von [[Instruktion|Instruktionen]] von bestimmter [[Adresse]]
	2. **Decode**: Decodieren des [[Instruktion|Befehls]] + kategorisieren, worum genau es sich handelt
	3. **Operand Fetch**: Fetchen von [[Daten]], die manipuliert werden
	4. **Execute**: [[Instruktion]] auf Operanden durchführen
	5. **Write-Back**: Ergebnis zurück in [[Memory]] schreiben
#### Aufbau einer Instruktion
`[ OPCODE | OPERAND 1 | OPERAND 2 | OPERAND 3 ]` ([[Binärsystem|binary]] ofc)
- [[OPCODE]]: Name der Operation (bspw. `ADD` - addieren)
- Operand: Entweder direkt Werte (think [[JAVA Primitive Data Type|primitive data type]]) oder [[Adresse|Adressen]] (think [[Reference]])
- [[Instruktionen mit mehreren Operanden]]:
	0. [[Stack Machine]] - arbeitet mit einem Stack
	1. [[Akkumulator]] - man kann nur ein [[Register]] beschreiben
	2. Readressierung ($x = x + 5$)
	3. Adressierung ($a = b + c$)
> [!hint] Mit der vollständigen Beschreibung des [[Instruction Set Architecture|Instruction Set]] ist ein Prozessor nach außen hin vollständig definiert.

wesentliche [[Instruction Set Architecture|Architekturen]]:
- [[i386]]: Intel Standard
	- Sehr viele Instruktionen
	- Kürzere/einfacherere Programme, dafür sehr ineffizient
		- Befehle sind unterschiedlich lang --> unnötig viel Entscheidungslogik
- [[RISC]]: Reduced Instruction Set
	- nimmt nur die essentiell nötigen Instruktionen von [[i386]]
	- ist scheiße effizient



