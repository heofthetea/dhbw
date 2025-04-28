- [[Booting]] beschreibt das mehrstufige, <span style="color:rgb(245, 154, 35)">selbständige</span> Starten eines [[Computer|Computers]] bis hin zu einem vollfunktionalen [[Betriebssystem]]
- [[Kaltstart]]: Start, nachdem die Stromzufuhr komplett unterbrochen war
- [[Warmstart]]: Stromzufuhr war nicht vollständig unterbrochen -> manche Daten sind evtl. noch geladen (v.a. bei Mobilgeräten relevant)
	- [[Suspend to Disk|Ruhemodus]]: Kompletter Systemzustand wird auf [[Hard Drive]] backed up -> simuliert [[Kaltstart]]
	- [[Suspend to RAM|Standby]]: Stromhungrige Peripherie wird abgeschalten -> [[CPU]] und [[RAM]] bleiben aktiv
		- in Handys: = Bildschirm aus
	- [[Suspend to RAM and Disk]]: Mischung aus beidem:
		1. Backup [[RAM]] auf [[Hard Drive]]
		2. [[Hard Drive]] abschalten
		3. [[RAM]] image nur laden, wenn dazwischen Stromzufuhr zu [[RAM]] auftritt (z.B. Batterie leer)

## Physical Startup
[[Physical Startup]]

- Ziel: [[Computer]] in einen Zustand bringen, an dem ein [[Betriebssystem]] sicher gestartet werden kann
- Durchlauf nach Stromzufuhr:
	1. Starten des [[BIOS]]
	2. Durchführen des [[POST]] => Initialisierung und Tests, ob alle Komponenten funktionieren
	3. Speichermedien nach [[Master Boot Routine|MBR]] & ausführen

### Master Boot Routine
- Zuständig für Laden der [[Bootloader]]
- ist unter anderem abgelegt im [[Master Boot Record]]:
	- Die ersten 512 [[Byte]] auf der [[Hard Drive|Festplatte]]
	- enthält zusätzlich die [[GUID Partition Table|Partition Table]]

> [!info] Ist [[Digital Signature|signiert]] mit der Bytefolge $0x\,55aa$ => ist diese **Magic Number** nicht gegeben, handelt es sich _nicht_ um eine Boot routine!!

#### Schematischer Ablaufs
[[Master Boot Routine#Schematischer Ablauf]]
- Ziel: Einfache Implementierung und Unterstützung für [[Multi-Stage Bootloader|mehrstufige Bootloader]] oder [[Chainloader]]
	- Damit kann [[Bootloader]] größer sein als der [[Master Boot Record|MBR]] Platz hat
1. Lädt ersten [[Bootloader]] $B_{0}$ an `0x7c00`
2. $B_{0}$ verschiebt <span style="color:rgb(245, 154, 35)">sich selbst</span> an andere [[Adresse]] (oft: `0x600`) -> frees `0x7c00`
3. $B_0$ lädt den nächsten [[Bootloader]] an `0x7c00` nach

> [!hint] Dadurch kann [[Master Boot Routine|MBR]] einfach immer [[Bootloader]] an `0x7c00` nachladen -> [[Programm Counter|PC]] muss  nicht suchen, sondern kann einfach den Code an `0x7c00` ausführen

> [!hint] Weiterer Vorteil: Verschiedene Bootloader müssen nichts voneinander wissen (z.B.) in Dual Boots, müssen nicht mal vom selben Betriebssystem sein (s. [[GRUB]])
## Booting Linux
(Windows geht mir am Arsch vorbei lolol)
[[Booting Linux]] 

1. [[Bootloader]] ([[GRUB]]) starten
2. [[Kernel Image]] laden => Backup des [[Kernel]] von [[Hard Drive]] in [[Memory]] laden
3. Laden der [[Initial RAM Disk]]
4. [[Mount|Mounting]] der [[Filesystem|Filesysteme]] (u.a. [[Root Directory]]) 
5. Starten von [[systemd]] in gemountetem [[Filesystem]]
