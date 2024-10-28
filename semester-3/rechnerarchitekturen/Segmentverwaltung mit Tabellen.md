[[Segmentierung]], [[Lookup Table]]


- jeder Prozess bekommt seine [[Segment|Segmente]] zugewiesen
	- Prozesse haben aber keine Ahnung, wo genau im Speicher sie liegen!
- <span style="color:rgb(245, 154, 35)">Segmentanfang</span> steht nicht in Register, sondern in [[Lookup Table]]
$$(Seg.R)[Index] \rightarrow Descriptor = Startadresse$$
> [!hint] An diesem Punkt kann das schon alles, wie [[Segmentverwaltung mit Registern]]

## Erweiterungen
- Segmentregister(-Index) wählt den Tabelleneintrag aus
	- Eintrag heißt [[Descriptor i386|Descriptor]]
		1. Start-[[Adresse]]
		2. Segment-Limit 
			- maximal zulässige Segmentgröße
			- maximal zulässiger Wert des Offsets
			- **nicht** aktuelle Größe des Segments
		3. Status/Rechte für [[Betriebssystem]] (z.B. Schreibrechte)

> [!hint] [[Lookup Table]] steht im [[Memory|Hauptspeicher]] 


- Tabelle wird von [[Betriebssystem]] verwaltet
	- Adressumsetzung aber nach wie vor von [[Leitwerk]]/[[MMU]]

> [!hint] je kleiner Segmentgröße, desto mehr Segmente, desto größere Tabelle



## Bild
![[Pasted image 20241026150307.png]]



![[Pasted image 20241026150338.png]]