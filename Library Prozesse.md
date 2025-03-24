## Prozess def.
- [[Prozess]]: Die einzigartige Ausführung eines Programms mit der gesamten Prozessumgebung:
	- [[Programm Counter]]
	- [[Daten]]
	- Code
	- Alle [[Register]]
- [[Prozesszustand]]: [[Zustand]], in dem sich ein [[Prozess]] befindet. Es gibt 5 Zustände: 
	1. **ready** -> [[Prozess]] zur Ausführung vorbereitet (aber kein [[CPU]]-Core) frei
	2. **running** -> [[Prozess]] wird ausgeführt
	3. **blocked** -> von anderem [[Prozess]] blockiert
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

### Resource Allocation Graph


### Banker's Algorithm ist nicht klausurrelevant


## Prozesskommunikation & -Synchronisation