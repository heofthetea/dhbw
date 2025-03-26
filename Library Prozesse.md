## Prozess def.
- [[Prozess]]: Die einzigartige Ausführung eines Programms mit der gesamten Prozessumgebung:
	- [[Programm Counter]]
	- [[Daten]]
	- Code
	- Alle [[Register]]
- [[Prozesszustand]]: [[Zustand]], in dem sich ein [[Prozess]] befindet. Es gibt 5 Zustände: 
	1. **ready** -> [[Prozess]] zur Ausführung vorbereitet (aber kein [[CPU]]-Core) frei
	2. **running** -> [[Prozess]] wird ausgeführt
	3. **blocked** -> von anderem [[Prozess]] [[Prozess Blocking|blockiert]] 
	4. **idle** -> terminiert, oder noch nicht ready
	5. **suspended** -> Durch [[Swapping]] ausgelagert
- Ein [[Prozess]] kann [[Kindknoten|Kinder]] erzeugen

> [!warning] Pro [[CPU]] kann nur **ein** [[Prozess]] gleichzeitig laufen.
### Ausführungsmodi
- Dienen der Sicherheit - welche Berechtigungen hat der [[Prozess]]?
- [[User Mode]]: Eingeschränkter Zugriff auf Hardware & [[Betriebssystem]]
- [[Kernel Mode]]: uneingeschränkter Zugriff auf Hardware & [[Betriebssystem]]
	- in [[Linux]]: `sudo`
	- Alle [[Prozess|Prozesse]] des [[Betriebssystem|Betriebssystems]] laufen hier

## Process Scheduling & Deadlocks
- [[Deadlock]]: mehrere [[Prozess|Prozesse]] [[Prozess Blocking|blockieren]] sich gegenseitig:
	- [[Prozess]] $A$ belegt [[Resource]] $1$, und will [[Resource]] $2$
	- [[Prozess]] $B$ belegt [[Resource]] $2$ und wartet auf [[Resource]] $1$
- Möglichkeiten, um Deadlocks zu [[Deadlocks beheben|beheben]]
	- **alle** [[Deadlock|locked]] [[Prozess|Prozesse]] gewaltsam terminieren - `kill -16`
	- Einen [[Prozess]] terminieren - das "effektivste Opfer" ermitteln
	- Einem [[Prozess]] alle [[Resource|Resourcen]] entziehen
### Resource Allocation Graph
- [[Resource Allocation Graph]]: Dient der Erkennung von [[Deadlock|Deadlocks]] 
- [[Graph]] mit zwei Arten an [[Knoten]]: 
	- [[Prozess]] - square
	- [[Resource]] - circle
- Aktuellen Stand einzeichnen:
	- "P fordert R an" => $P \rightarrow R$
	- "P hat R" => $P \leftarrow R$ 

> [!info] Ein [[Deadlock]] liegt dann vor, wenn in dem [[Resource Allocation Graph]] ein [[Zyklus]] existiert.

### Banker's Algorithm ist nicht klausurrelevant lol
### Scheduling
- [[Prozess Scheduler]]: Steuert die [[Übergangsrelation|Übergänge]] von [[Prozesszustand|Prozesszuständen]] 
	- managed z.B. Zugriff auf [[Resource|Resourcen]], wann ein [[Prozess]] in den [[CPU|Prozessor]] darf etc.
- Scheduling Strategien:
	- [[Preemptive Strategien|Preemptive]]: [[Prozess|Prozesse]] kontrolliert aus [[CPU]] nehmen, bevor sie fertig sind
		- [[Round Robin]] - Jeder [[Prozess]] hat nacheinander eine feste Zeit $\Delta t$ in der [[CPU]]
		- [[Dynamic Priority based Round Robin]] - [[Queue]] vor [[Round Robin]]
			- mit jedem $\Delta t$ wir die Prio eines Prozesses höher - bis er am [[Round Robin]] teilnehmen darf
		- [[Shortest Remaining Time Strategy]] - [[Schätzung]] der verbleibenden Zeit eines [[Prozess|Prozesses]]
			- Problem: [[Schätzungsproblematik]] - daher in Praxis kaum benutzt
	- [[Non-preemptive Strategien]]: [[Prozess]] läuft durch, bis er terminiert oder [[Prozess Blocking|blockiert]]
		- [[Highest Response Ration Next]] - [[Prozess]] mit höchsten Verhältnis $\frac{waiting\_time}{running\_time}$  entscheidet darf als nächstes
			- basiert wieder auf [[Schätzung]]
		- [[Highest Priority First]] - Simples [[Priorität Interrupt|Prioritäten]]-System
		- [[Shortest Job Next]] - wieder [[Schätzung]]
		- [[FIFO]] - well, FIFO - erster Prozess, der erstellt wurde, darf als erstes
		- [[Multilevel Queue Scheduling]] - Detaillierte Einteilung durch Gruppen


> [!hint] In modernen [[Betriebssystem|Betriebssystemen]] werden vorranging [[Preemptive Strategien]] eingesetzt - oftmals aber eine [[Prozess Scheduling in Praxis|Kombination]].


## Prozesskommunikation & -Synchronisation