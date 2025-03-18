> Steuert die [[Übergangsfunktion|Übergänge]] von [[Prozesszustand|Prozesszuständen]]

- u.a. Umgang mit [[Deadlock|Deadlocks]]
- hat volle Kontrolle - muss [[Prozess|Prozesse]] killen können und anderweitig managen
	- Legt fest: Welcher [[Prozess]] darf wann in den Prozessor
## Ziele
- hohe [[CPU]] Auslastung
- hoher Durchsatz (= [[Prozess|Prozesse]] pro Zeiteinheit)
- kleine Ausführungszeit pro [[Prozess]]
- kurze Antwortzeit
- faire Behandlung der Prozesse
- minimale Wartezeit

> [!warning] Ziele sind teilweise konträr -> besondere Strategien notwendig


## Strategien
- [[Preemptive Strategien]]
	- [[Round Robin]]
	- [[Dynamic Priority based Round Robin]]
	- [[Shortest Remaining Time Strategy]]
- [[Non-preemptive Strategien]]
	- [[Highest Response Ration Next]]
	- [[Highest Priority First]]
	- [[Shortest Job Next]]
	- [[FIFO]]
	- [[Multilevel Queue Scheduling]]
[[Prozess Scheduling in Praxis]]