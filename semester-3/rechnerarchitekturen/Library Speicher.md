[[Memory]]
- unterteilt in: [[Befehlsspeicher]] für ausführbare [[Instruktion|Instruktionen]] und [[Datenspeicher]] für [[Daten]]
	- s. [[Harvard-Architektur|Harvard]] vs. [[Von-Neumann Architektur|von-Neumann]]
- Grundbestandteil: [[Speicherzelle]]
	- speichern meist ein [[Bit]], aber auch ein [[Byte]] oder [[Wort]] möglich
	- Anschlüsse:
		1. Data in
		2. Data out
		3. Selector (Dass Zelle tatsächlich ausgewählt wird)
		4. R/W permission select

### Anordnung in Matrix
- [[Speicherzellenmatrix]] - [[Speicherzelle|Speicherzellen]] in $n \times m$ Matrix anordnen
	- Selektieren der einzelnen [[Speicherzelle|Zellen]] muss durch zwei IC's behandelt werden: Zeilen- und Spalten**logik** 

> [!hint] Es wird immer zuerst die Zeile selektiert, _dann_ die Spalte --> vgl. Zugriff auf [[Array]]

- Daten **lesen**:
	1. lade gesamte Zeile in Spaltenlogik
	2. Finde Zelle und lese Daten aus
- Daten **schreiben**:
	1. lade gesamte Zeile in Spaltenlogik
	2. verändere den Wert der entsprechenden [[Speicherzelle]]
	3. Schreibe _gesamte_ Zeile zurück

## Adressierung
> Ist eine [[Abbildung]] $a: \mathbb{N} \rightarrow Z$ von [[Zahl|Zahlen]] auf [[Speicherzelle|Speicherzellen]]

- [[Adresse]]: `[ CS Adressteil | direkter Adressteil ]`
	- [[Chip Select|CS]]-Adressteil: [[externe Adressierung]]
		- welchen IC muss ich wählen?
	- direkter Adressteil: [[interne Adressierung]]
		- Welche [[Speicherzelle|Zelle]] meines ausgewählten [[IC]]s muss ich auswählen?
### unvollständige Adressierung
[[Unvollständige Adressierung]]
- tbh hab ich immernoch keinen Plan was der Sinn dahinter ist, abgesehen davon, dass man Geld spart
- Im Prinzip betrachtet mann in einer $n$ [[Bit]] [[Adresse]] nur die **hinteren** $n - 1$ [[Bit]]
	- hat zur Folge dass `fa18` dieselbe [[Speicherzelle|Zelle]] bezeichnet wie `9a18` 
- [[Abbildung]] ist dann nicht mehr [[Injektive Funktion|injektiv]] 

## Physische Unterscheidung

| .            | .                            |
| ------------ | ---------------------------- |
| nach Aufgabe | Code/Daten                   |
| Zugriffsart  | RAM/SAM                      |
| Richtung     | ROM (ro)/WOM (write)         |
| Haltbarkeit  | volatile/non-volatile        |
| Aufbau       | [[SDRAM\|SRAM]], [[DRAM]]    |
|              | [[ROM]], [[PROM]], [[EPROM]] |
|              |                              |

## Segmentation
- [[Segmentierung]] unterteilt Speicherblock in [[Segment|Segmente]]
	- [[Segment|Segmente]] sind [[Stetigkeit|stetig]] --> lückenlos aneinander
- Um eine [[Adresse]] innerhalb eines [[Segment|Segments]] zu finden, wird approach ähnlich zu Arrayzugriff genommen:
$$A = S \cdot g + O$$
mit:
- $S$: [[Adresse]] des Segmentanfangs
- $g$: Granularität (= wie groß ist das [[Segment]])
- $O$: Offset (i _guess_ $O \leq g$ sollte gegeben sein, aber kp)

> [!hint] Abbildung $S \times O \rightarrow A$ ist nicht [[Injektive Funktion|injektiv]]


---

- [[Segmentverwaltung mit Registern]]: Segmentregister und Offsetregister
	- Bei [[i386]]: Adresse sind $20$ [[Bit]] -> beide [[Register]] je $16$ bit groß
	- Darstellung: `(Segment Register : Offset Register)`

### Segmentverwaltung mit Tabellen
[[Segmentverwaltung mit Tabellen]]

> [!warning] Disclaimer: Das ganze ging irgendwie über zwei Stunden. Das war ein komplett derailter Vortrag über Tabellen hier Tabellen da dann Register die auf Tabellen zeigen die auf Tabellen zeigen... Ganz ehrlich das klang wie ne Vorlesung zu Relationalen Datenbanken - Anyway keine Ahnung ob das alles wichtig war oder was da schief gelaufen ist ([[Descriptor i386]], [[Umsetzung Segmentverwaltung mit Tabellen]], [[Descriptor Tables]])

- Jeder Prozess bekommt sein eigenes [[Segment]] (= eigenener Adressraum) im [[Memory|Speicher]] vom [[Kernel]] zugewiesen
	- Prozess weiß aber nicht, wo genau dieses Segment liegt --> ✨security✨
- Die Start-[[Adresse]] jedes [[Segment|Segmentes]] steht in einer [[Lookup Table]]
	- Eintrag der Tabelle ([[Descriptor i386|Descriptor]]) enthält Felder:
		1. Start des Segments
		2. Länge des Segments --> maximal zulässige Größe des Offsets
		3. Berechtigungen (z.B. read/write, etc.)

> [!info] Auch [[Descriptor Tables]] liegen im Speicher
> - Es gibt eigene [[Register]] damit die [[CPU]] weiß, wo die liegen



