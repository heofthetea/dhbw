> Ausführung eines Programms auf einer [[CPU]] mit der entsprechenden Umgebung:

- definition <span style="color:rgb(245, 154, 35)">Prozessumgebung</span>:
	- [[Programm Counter]]
	- [[Daten]]
	- Code
	- Alle [[Register]] 
- ein [[Prozess]] kann weitere [[Prozess|Prozesse]] erzeugen -> [[Kindknoten|Child]] Process
- in einer [[CPU]] kann nur **ein** [[Prozess]] gleichzeitig aktiv sein
	- hat nur eine [[MMU]] etc.
- [[Prozess|Prozesse]] sind einzigartig

## Anforderungen an [[Betriebssystem]]
- "gleichzeitig ausführen" -> [[Betriebssystem]] muss Programm nur **partiell** ausführen können
- OS muss einem [[Prozess]] Ressourcen zuteilen können
- OS muss inter process communication ermöglichen
- Eindeutige Erkennung -> [[PID]]





