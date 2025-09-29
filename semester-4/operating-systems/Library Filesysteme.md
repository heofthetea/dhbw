### Definitionen
- [[File|Datei]]: Zusammenhängender Block aus [[Byte|Bytes]] => [[Daten]]
- [[Filesystem]]: an sich einfach nur Regelung der systematischen Ablage von [[File|Dateien]]

## Arten
### [[Lineares Filesystem]]
- ablage stur linear hintereinander

> [!warning] HIer darf sich kein Dateiname doppeln

### [[Hierarchical Filesystem]]
- essentially [[UNIX]] file tree
- Baut [[Baum]] aus [[Inode|inodes]] aus
	- [[Inode]] ~ Eintrag in [[Katalog]] mit [[Pointer]] auf Block auf [[Hard Drive]]
		- Enthalten zusätzlich Metadaten: Time created, [[Linux file permissions|permissions]] etc.
- [[Knoten]] sind [[Directory|Directories]] -> [[Pfad|Pfade]] getrennt durch `/` ([[Linux]])
- [[Blatt|Blätter]] sind [[File|Files]]


> [!hint] Erlaubt doppelte Dateinamen - halt nur auf unterschiedlichen [[Pfad|Pfaden]]
### [[Network Filesystem]]
- joa halt [[Filesystem]] auf einem <span style="color:rgb(245, 154, 35)">zentralen</span> remote [[Server]]
- distributed durch eigene Protokolle wie [[SMB]] (manchmal auch [[HTTP]])

> [!hint] wirkt für das [[Betriebssystem]] als wäre es lokal -> bietet selbe Möglichkeiten

#### Cluster Filesystem
- [[Computer|Rechner]] in [[Kubernetes Cluster|Cluster]] aufgeteilt -> alle in einem [[Kubernetes Cluster|Cluster]] greifen auf ein [[Filesystem]] zu
### [[Virtual Filesystem]]
- abstrahieren verschiedener Arten von Filesystemen, so dass es für [[Kernel]] wirkt als wäre es ein komplettes

> [!hint] Im Prinzip: erlaubt z.B. network [[Mount|mounting]] auf ein lokales [[Filesystem]]

## Speichermedien
### [[Hard Drive|Festplatte]]
- mehrere gestackte, rotierende Disks
- Ein Schreib-Lese Kopf gesteuert von Arm
- [[Bit|Bits]] realisiert durch Magnetisierung:
	- **schreiben**: Arm wird magnetisiert -> erzeugt Pol = $1$
	- **lesen**: Arm wird von Disk magnetisiert
#### Addressierung
- [[CHS Format]]: $3$ [[Byte]]
	1. **C**ylinder -> auf welchem Ring einer Disk (eher innen, eher außen)?
	2. **H**ead -> mit welchem Lesekopf (= welche Disk im Stack)?
	3. **S**ector -> auf welchem Sektor innerhalb der Disk
### [[SSD]]
- Realisiert mit [[FAMOS-Transistor|FAMOS-Transistoren]]  in [[Flash Speicher]] (Elektronen werden 'trapped')
- Organisiert in [[Speicherzellenmatrix|Speichermatrix]] -> wird [[Adressierung|addressiert]] wie [[RAM]] basically

> [!hint] ist technically [[EEPROM]] -> Erasable Programmable read-only memory

> [!warning] [[SSD|SSDs]] haben **Lebensdauer** => jeder Schreibzugriff erodiert die Zellen
 
 #### weitere Aufteilungen
- Eine [[Speicherzelle|Zelle]] (als [[Atom|atomare]] Einheiet) kann verschiedene Anzahl an [[Bit|Bits]] beherbergen -> **S**ingle **L**evel **C**ell (SLC), MLC, QLC (quadruple LC) etc...
- SATA, nVME

### Fragmentierung
[[Defragmentierung]]
- Problem: Durch löschen von [[File|Dateien]] entsteht dead space in der [[Hard Drive|HDD]]
- Es braucht mehr und mehr Rotationen, um [[File|Dateien]] vollständig zu lesen

> [!warning] [[Defragmentierung]] ist bei [[SSD]] sinnlos - a) existiert das Problem nicht, b) macht neues Schreiben die [[SSD]] kaputt

## RAID
- [[RAID]] kombiniert verschiedene [[Hard Drive|Festplatten]] mit [[Redundanz]], um gegen Hardwareausfall abzusichern
- Je nach Anzahl verfügbarer [[Hard Drive|Festplatten]] wird [[Redundanz]] verschieden Verteilt
	- RAID 1 (2 disks) -> exakte Kopie
	- RAID 5 (5 disks) -> [[Parity]] verschieden über Platten verteilt

> [!warning] [[RAID]] ist kein Backup -> erlaubt keine Wiederherstellung von gelöschten [[File|Dateien]]!

# [[Partition Table]]
- [[Partition|Partitionierung]]: Aufteilung der [[Hard Drive]] in mehrere logisch eigenständige Teile
- [[Partition Table]] ist Teil des [[Master Boot Record|MBR]] -> $64$ [[Byte]] (ab $01be_{16}$)
	- im [[CHS Format]]

## Aufbau
> [!hint] im Prinzip: Welche [[Partition]] liegt wo,

- startet an `0x01BE` 
- für jede [[Partition]] (maximal 4 mal):
	1. Bootable (0x00 = nein, 0x80 = ja) - $1$ [[Byte]]
	2. [[Adresse]] des ersten Sektors ($3$ Byte in [[CHS Format|CHS]])
	3. Partitionstyp (z.B. Art des [[Filesystem]], Swap Partition, etc.)
	4. [[Adresse]] des letzten Sektors ($3$ Byte in [[CHS Format|CHS]])
- danach nochmal in [[LBA Format]]:
	1. Startsektor ($4$ Byte)
	2. Anzahl der Sektoren für die [[Partition]] ($4$ Byte)

> [!warning] Probleme
> - [[CHS Format]] ist starr und nicht für [[SSD]] geeignet
> - Kann maximal $4$ [[Partition|Partitionen]] speichern
## [[GUID Partition Table]] - Modernisierung
- [[LBA Format]]: $64$ [[Bit]] => tailored to [[SSD]]s
- erlaubt bis zu $128$ [[Partition|Partitionen]] (und **gigantische** Plattengröße)
- kopiert: Einmal am Anfang der [[Hard Drive|Festplatte]], und einmal am Ende für [[Redundanz]]

### Aufbau
1. Protective [[Master Boot Record|MBR]] (für backwards compatibility) ($512$ [[Byte]])
2. [[GUID Partition Table|GPT]] Header ($512$ [[Byte]])
3. Partitionseinträge (i guess Meta-informationen über [[Partition|Partitionen]]) ($32 \cdot 512$ [[Byte]])


## Ausprägungen
### FAT
### NTFS

### APFS

### EXT\[2-4]