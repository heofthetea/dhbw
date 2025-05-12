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
- Ein [[Prozess]] kann [[Kindprozess|Kinder]] erzeugen

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

### Präventivmaßnahmen gegen Deadlocks
[[Deadlocks verhindern]] 

| Bedinung                                        | Lösung                                                                                                        |
| ----------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| Exklusives Belegen von [[Resource\|Ressourcen]] | [[Resource\|Ressourcen]] können geteilt werden (v.a. bei [[Netzwerk]] und [[Hard Drive\|Festplatte]] gemacht) |
| Nachfordern von Ressourcen                      | Ressourcen in einem Chunk freigeben ODER nur eine Ressource pro [[Prozess]]                                   |
| Ressourcen können nicht entzogen werden         | [[Betriebssystem]] kann [[Prozess]] unterbrechen                                                              |
| Zirkuläres Warten                               | Lineare Ordnung der Ressourcen                                                                                |
> [!hint] Zirkuläres Warten ist die einzige [[hinreichende Bedingung]] für einen [[Deadlock]] - alle anderen sind [[notwendige Bedingung|notwendige Bedingungen]] .
### Resource Allocation Graph
- [[Resource Allocation Graph]]: Dient der Erkennung von [[Deadlock|Deadlocks]] 
- [[Graph]] mit zwei Arten an [[Knoten]]: 
	- [[Prozess]] - square
	- [[Resource]] - circle
- Aktuellen Stand einzeichnen:
	- "P fordert R an" => $P \rightarrow R$
	- "P hat R" => $P \leftarrow R$ 

> [!info] Ein [[Deadlock]] liegt dann vor, wenn in dem [[Resource Allocation Graph]] ein [[Zyklus]] existiert.

> [!hint] Anwendung oft präventiv: Alle [[Prozess|Prozesse]] müssen vorab angeben, welche [[Resource|Ressourcen]] sie benötigen. Anschließend wird [[Resource Allocation Graph]] berechnet, um vorab festzustellen, ob das so umsetzbar ist oder nicht.
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


## Prozesskommunikation
- [[Prozess|Prozesse]] müssen Daten untereinander austauschen können, **obwohl** jeder Prozess nichts von anderen Prozessen weiß
### Speicherbasiert
- [[Speicherbasierte Prozesskommunikation]] -> Datenaustausch über Speichermedium
	- [[File|Datei]] ->zwei Prozesse schreiben/lesen [[Daten]] von einer für beide verfügbare [[File|Datei]]
		- Benötigt Lock-Mechanismus, damit keine Konflikte entstehen
	- [[Memory]] -> Prozesse nutzen denselben Speicherblock
		- Im Hintergrund: [[Page Sharing]] - ein [[Prozess]] erstellt eine [[Page]], dann [[Copy on Write]] wenn der Andere Prozess sie benötigt
		- Ist am Schnellsten, da alles in [[Memory]] bleibt => verwendet, wenn es sich um große Datenmengen handelt

### Nachrichtenbasiert
- [[Message-based Kommunikation]] -> Datenaustausch über Events als Nachrichten
	- [[Message Queue]] -> Verwendung einer [[Queue]] (you know what a MQ is)

> [!hint] Unter [[Windows]] ist alles eine [[Message Queue]]

- [[Pipe]] -> Nur unter [[Linux]] verwendet
	- Ausgabe von [[Prozess]] $A$ wird als Eingabe von [[Prozess]] $B$ genommen 
	- Immer [[Simplex-Verbindung]] -> Daten nur in eine Richtung
	- Die [[Prozess|Prozesse]] müssen einen gemeinsamen Vorfahren haben ([[systemd]] zählt nicht lol)

## Prozessynchronisierung
- [[Prozesssynchronisierung]]
- **zentrales Problem**: Durch [[Prozess Scheduler|Scheduling]] & entzug der [[CPU]] können [[Prozess|Prozesse]], die gemeinsame Daten haben, desynchronisieren:
	- Prozess $P_{2}$ verändert die Daten - Prozess $P_{1}$ rechnet noch mit vorherigem Stand
- Lösung: [[Kritischer Abschnitt|Kritischer Abschnitt]] - Ist ein [[Prozess]] in einer Phase, wo erzwungene Unterbrechungen [[Anomalie|Anomalien]] hervorrufen könnten, darf er **nicht unterbrochen** werden

### Kritischer Abschnitt
- [[Kritischer Abschnitt]]: Abschnitt, in dem ein [[Prozess]] vom [[Prozess Scheduler|Scheduler]] nicht unterbrochen werden darf
- Anforderungen:
	2. Es darf nur **ein** [[Prozess]] gleichzeitig im [[Kritischer Abschnitt|Kritischen Abschnitt]] sein (<span style="color:rgb(0, 122, 255)">mutual exclusion</span>)
	3. [[Prozess|Prozesse]] dürfen sich nicht **gegenseitig** daran **hindern**, in den [[Kritischer Abschnitt|kritischen Abschnitt]] zu gelangen
	4. [[Prozess Scheduler|Scheduler]] muss sicher stellen, dass jeder [[Prozess]], der auf einen [[Kritischer Abschnitt|kritischen Abschnitt]] wartet, ihn auch erreicht (<span style="color:rgb(0, 122, 255)">no starvation</span>)
	5. [[Kritischer Abschnitt]] muss **immer [[Haltekonfiguration|terminieren]]** - unabhängig von [[CPU]]-Leistung
### Umsetzungen
- [[Unterbrechungssperre]]
- [[Semaphor]]: Setzen einer [[Flag]] (Sperrvariable)
	- für jede zu schützende Datenmenge wird ein [[Semaphor]] definiert

#todo digga gar keinen Bock das alles auszuformulieren


# Multitasking
- [[Ziele Multitasking|Ziel]]: Bestmögliche Auslastung von [[CPU|Prozessor]] & Leerlauf verhindern

| **[[Multitasking]]**                                                        | **[[Multithreading]]**                                                                                                         |
| --------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------ |
| parallel laufende [[Prozess\|Prozesse]]                                     | parallel Laufende [[Thread\|Threads]] innerhalb eines [[Prozess\|Prozesses]]                                                   |
| jeder [[Prozess]] hat eine eigene Umgebung (Adressraum, [[Register]], etc.) | Alle Threads haben (beinahe) dieselbe Umgebung wie der [[Prozess]] - aber: eigener [[Call Stack]], Zustand und local variables |
| Jederr [[Prozess]] hat seine eigene [[PID]]                                 | Jeder [[Thread]] läuft unter derselben [[PID]] seines Elternprozesses                                                          |
| Jeder Prozess weiß nicht, dass es andere Prozesse gibt                      | Jeder Thread weiß nicht, dass es andere Threads gibt -> aber der Elternprozess weiß das                                        |

## Forking
- [[Forking]]: Erstellen eines [[Kindprozess|Kindprozesses]] durch Abspalten vom [[Prozess|Elternprozess]]
	- Systemaufruf zu [[Function|Funktion]] `fork()`
	1. Neue Prozessumgebung erstellen
	2. Neuen [[Addressraum]] erstellen
	3. Kopieren des Eltern-[[Addressraum|Addressraums]] in den neuen [[Addressraum]] 
	4. [[Programm Counter|PC]] des [[Kindprozess]] wird an dieselbe Stelle gesetzt
	5. [[PID]] vergeben

> [!hint] Im ersten Moment ist [[Kindprozess]] **identisch** zu Elternprozess -> nur die [[PID]] ist anders!!

> [!info] `fork()` gibt die [[PID]] des [[Kindprozess|Kindes]] bei Erfolg zurück.

- Ein Elternprozess hat eine "Aufsichtspflicht" für seine Kinder -> **??????????**
	- verhindert [[Zombie Process]] ([[Prozess]] ohne [[Elternknoten|Eltern]])

### Exec
> [!warning] Problem mit [[Forking]]: Kopieren der Prozessumgebung ist teuer, und einschränkend, da derselbe Code, mit demselben [[Programm Counter|PC]] verwendet wird.

- [[Exec]] erlaubt es, [[Kindprozess|Kindprozesse]] unabhängig von Elternprozess zu starten
	- [[Kindprozess]] initialisiert sich selbst durch eine [[Executable]]
	- Prozessumgebung wird ersetzt => Auch der [[Programm Counter|PC]] wird neu gesetzt

## Threading


#todo