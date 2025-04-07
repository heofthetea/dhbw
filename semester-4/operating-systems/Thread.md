> "Befehlsstrang" eines [[Prozess|Prozesses]]

[[Multithreading]]

- Jeder [[Thread]] besitzt einene eigenen [[Stack]]
	- [[Unterprogramm Assembler|Funktionsaufrufe]] müssen unabhängig gehandhabt werden
- einen eigenen [[Prozesszustand|Ausführungszustand]]
- eine eigene Kopie der [[Register]] wie [[Programm Counter|PC]], SP
- Speicher für lokale Variablen

> [!info] Geteilt unter den [[Thread|Threads]] sind [[Heap]], statische/konstante Daten und Code.

## Bild
![[Pasted image 20250331102033.png]]