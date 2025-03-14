[[CPU]]
![[Pasted image 20240918161722.png|600]]

> Bro idfk how to group this lecture into libraries that somehow makes sense. Bro gave an overview in the beginning that could've been the entire fucking lecture


## Steuerwerk
### Mikro-Programmierung
[[Steuerwerk mit Mikroprogrammierung]]
- Dröselt Operationen der [[CPU]] in möglichst atomare Schritte auf: [[Mikro-Operation]]
- Für jede [[Mikro-Operation]] gibt es einen [[Mikro-Befehl]], der [[Adressierung|adressiert]] wird durch eine [[Mikro-Adresse]]

### Darstellung als Automat
[[Steuerwerk als Automat]], [[Wilkes-Stringer Steuerwerk]]
- ist ein [[Mealy-Automat]]
	- Eingabewort sind [[Instruktion]] (at least I guess that's what `[ OPCODE | flags ])` means 
	- jeder [[Zustand]] repräsentiert eine [[Mikro-Adresse]]
		- dadurch [[transitiv]] einen [[Mikro-Befehl]]
	- Ausgabe der beiden Funktionen $\delta, \beta$ ist $(\vec{y}, q) \in Y \times Q$ ist ein [[Mikro-Befehl]]
		- Kombination aus [[Übergangsfunktion]] und Ausgabefunktion ist ein [[Mikro-Programm]]
- [[Steuersignal]]/Gating Signal: Sagt dem [[Operationswerk]], was es tun soll
	- [[nicht-codiertes Steuersignal]]: kanonisch; jeder Leitung (= Bit) wird eine eigene Funktion zugeordnet
	- [[nano-codiertes Steuersignal]]: mehrere Leitungen werden zusammen als [[Tupel]] interpretiert
		- bsp: bit 1 spricht [[ALU]] an, bit 2 sagt was ALU _genau_ machen soll
		- ermöglicht selbe Anzahl an Funktionalität mit weniger Leitungen