[[Memory]]
- unterteilt in: [[Befehlsspeicher]] für ausführbare [[Instruktion|Instruktionen]] und [[Datenspeicher]] für [[Daten]]
	- s. [[Harvard-Architektur|Harvard]] vs. [[Von-Neumann Architektur|von-Neumann]]
- Grundbestandteil: [[Speicherzelle]]
	- speichern meist ein [[Bit]], aber auch ein [[Byte]] oder [[Wort]] möglich
	- Anschlüsse:
		1. Data in
		2. Data out
		3. Selector (Das Zelle tatsächlich ausgewählt wird)
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
		- welcher IC muss ich wählen?
	- direkter Adressteil: [[interne Adressierung]]
		- Welche [[Speicherzelle|Zelle]] meines ausgewählten ICs muss ich auswählen?
### unvollständige Adressierung
[[Unvollständige Adressierung]]
- tbh hab ich immernoch keinen Plan was der Sinn dahinter ist, abgesehen davon, dass man Geld spart
- Im Prinzip betrachtet mann in einer $n$ [[Bit]] [[Adresse]] nur die **hinteren** $n - 1$ [[Bit]]
	- hat zur Folge dass `fa18` dieselbe [[Speicherzelle|Zelle]] bezeichnet wie `9a18` 
- [[Abbildung]] ist dann nicht mehr [[Injektive Funktion|injektiv]] 