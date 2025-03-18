### Erkennung
- prinzipiell keine Komponente zur Erkennung vorgesehen
- Idee: Wartegraphen, um [[Zyklus|Zyklen]] zu fiinden
	- Suche von [[Prozess]] oder [[Resource]], die [[Prozess Blocking|blockiert]]
	- Zu oft ausgeführt -> [[CPU]] kapazität verschwenden
	- Zu selten ausgeführt -> Ressourcen unausgelastet
- In Praxis: Erkennung von Symptomen
	- Ressourcenanforderung dauert lange
	- Prozessor sehr lange untätig
	- Prozessorauslastung sinkt

## Lösungen
1. Abbruch: `sudo kill -9`
2. Unterbrechung
3. Entzug von Betriebsmitteln: Ressourcen werden aktiv entzogen


| Name    | was tut's                                    | Vorteil                                                                                 | Nachteil                                                                         |
| ------- | -------------------------------------------- | --------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------- |
| Abbruch | `kill -9`                                    |                                                                                         |                                                                                  |
| Reset   | nur einen Prozess unterbrechen               | - finden des effektivsten Opfers = Prozess, der am einfachsten wiederzustarten ist<br>- | - erfordert [[Transaktion]]<br>- Gefahr: Prozess verhungert (kommt niemals dran) |
| Entzug  | [[Resource]] für einen [[Prozess]] entziehen | - sind Ressourcen frei, kann [[Prozess]] sie wieder anfordern                           | - geht nicht bei: Schreiben von Dateien, Ausgabe am Drucker<br>-                 |
