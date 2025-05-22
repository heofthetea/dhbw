- [[Booting]] beschreibt das mehrstufige, <span style="color:rgb(245, 154, 35)">selbständige</span> Starten eines [[Computer|Computers]] bis hin zu einem vollfunktionalen [[Betriebssystem]]
- [[Kaltstart]]: Start, nachdem die Stromzufuhr komplett unterbrochen war
- [[Warmstart]]: Stromzufuhr war nicht vollständig unterbrochen -> manche Daten sind evtl. noch geladen (v.a. bei Mobilgeräten relevant)
	- [[Suspend to Disk|Ruhemodus]]: Kompletter Systemzustand wird auf [[Hard Drive]] backed up -> simuliert [[Kaltstart]]
		- Bei Start wird [[RAM]] image zurück in [[RAM]] geladen
		- aka: [[Suspend to Disk]]
	- [[Suspend to RAM|Standby]]: Stromhungrige Peripherie wird abgeschalten -> [[CPU]] und [[RAM]] bleiben aktiv
		- in Handys: = Bildschirm aus
		- spart weniger Energie; aber: ist alles wieder da sobald man wieder anschaltet
		- aka: [[Suspend to RAM]]
	- [[Suspend to RAM and Disk]]: Mischung aus beidem:
		1. Backup [[RAM]] auf [[Hard Drive]]
		2. [[Hard Drive]] abschalten
		3. <span style="color:rgb(245, 154, 35)">aber</span>: [[RAM]] bleibt am Strom -> behält state
		4. [[RAM]] image nur laden, wenn dazwischen Stromzufuhr zu [[RAM]] unterbrochen ist (z.B. Batterie leer)

## Physical Startup
[[Physical Startup]]

- Ziel: [[Computer]] in einen Zustand bringen, an dem ein [[Betriebssystem]] sicher gestartet werden kann
- Durchlauf nach Stromzufuhr:
	1. Starten des [[BIOS]]
	2. Durchführen des [[POST]] => Initialisierung und Tests, ob alle Komponenten funktionieren
		1. initialisiert & testet die [[Minimalsystem|Hardware]] 
		2. initialisiert die Peripherie (die tstet sich selbst)
	3. Speichermedien nach [[Master Boot Routine|MBR]] & ausführen

> [!hint] Nach dem [[Physical Startup]] "kennt der PC sich selbst"

### BIOS/UEFI
- [[BIOS]]: historisch, 50 Jahre alt
- [[UEFI]] (Unified Extensible Firmware Interface) - Nachfolger des [[BIOS]]
	- unterstützt größere [[Hard Drive|Festplatten]]
	- nutzt jetzt [[GUID Partition Table|GPTs]] statt [[Master Boot Record|MBR]]
	- eigene Shell, Boot Splash Screen & grafische BIOS oberfläche, etc.

### Ablauf POST
#todo #klausurrelevant 

### [[Master Boot Record]]
- ersten $512$ [[Byte]] auf der [[Hard Drive|Festplatte]]

> [!hint] es gibt auch [[Volume Boot Record]] -> der ist für [[Partition|Partitionen]], auf den ersten $512$ [[Byte]] der respektiven [[Partition]] #klausurrelevant 
## Master Boot Routine
- Zuständig für Laden der [[Bootloader]]
- ist unter anderem abgelegt im [[Master Boot Record]]:
	- Die ersten 512 [[Byte]] auf der [[Hard Drive|Festplatte]]
	- enthält zusätzlich die [[GUID Partition Table|Partition Table]]

> [!info] Ist [[Digital Signature|signiert]] mit der Bytefolge $0x\,55aa$ => ist diese **Magic Number** nicht gegeben, handelt es sich _nicht_ um eine Boot routine!!

### Schematischer Ablauf
[[Master Boot Routine#Schematischer Ablauf]]
- Ziel: Einfache Implementierung und Unterstützung für [[Multi-Stage Bootloader|mehrstufige Bootloader]] oder [[Chainloader]]
	- Damit kann [[Bootloader]] größer sein als der [[Master Boot Record|MBR]] Platz hat
1. Lädt ersten [[Bootloader]] $B_{0}$ an `0x7c00` & startet ihn
2. $B_{0}$ verschiebt <span style="color:rgb(245, 154, 35)">sich selbst</span> an andere [[Adresse]] (oft: `0x600`) -> frees `0x7c00`
3. $B_0$ lädt den nächsten [[Bootloader]] an `0x7c00` nach (nachdem er die [[Partition Table]] gelesen hat)

> [!hint] Dadurch kann [[Master Boot Routine|MBR]] und jeder [[Bootloader]] einfach seinen Nachfolger an `0x7c00` nachladen -> [[Programm Counter|PC]] muss  nicht suchen, sondern kann einfach den Code an `0x7c00` ausführen

> [!hint] Weiterer Vorteil: Verschiedene Bootloader müssen nichts voneinander wissen (z.B.) in Dual Boots, müssen nicht mal vom selben Betriebssystem sein (s. [[GRUB]])

#### Mulit-Stage BL vs Chainloader
- [[Multi-Stage Bootloader]]: [[Bootloader]] ist in einzelne Teile aufgeteilt -> sind **abhängig** voneinander
- [[Chainloader]]: Mehrere [[Bootloader]], die vollständig unabhängig voneinander agieren können
## Booting Linux
(Windows geht mir am Arsch vorbei lolol)
[[Booting Linux]] 

1. [[Bootloader]] ([[GRUB]]) starten
2. [[Kernel Image]] laden => Backup des [[Kernel]] von [[Hard Drive]] in [[Memory]] laden
3. Laden der [[Initial RAM Disk]]
4. [[Mount|Mounting]] der [[Filesystem|Filesysteme]] (u.a. [[Root Directory]]) 
5. Starten von [[systemd]] in gemountetem [[Filesystem]]
