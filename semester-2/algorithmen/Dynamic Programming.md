Bsp: [[Optimierung des naiven rekursiven Fibonacci-Algorithmus]], [[Übung Dynamic Programming]]
not to confuse with [[Dynamic Typing]]

### Idee
- führe _komplexes_ Problem auf _einfache Teilprobreme_ zurück
- berechne Lösungen der Teilprobleme
	- cache Teillösungen
- rekonstruire Gesamtlösung aus Teillösungen

### Anwendungskriterien
- Überlappende Teilprobleme
	- Gegenbeispiel: [[Hoare Partitioning]]: Beide Hälften des Arrays sind unterschiedlich
- Optimale Substruktur
	- Die globale Lösung setzt sich auch tatsächlich aus _lokalen_ Lösungen zusammen
	- Gegenbeispiel: [[Merge Sort]] (ohne den Merge teil): Zwei sortierte listen concatinated ergeben keine gesamt sortierte Liste
	- weiteres Beispiel: [[Travelling Salesman Problem|TSP]]

## Beispiel
[[kürzester Pfad|Routing]]
- Der optimale Weg von Stuttgart nach Frankfurt ist 200km lang.
- _Wenn_ der optimale Weg von konstanz nach Frankfrurt über Stuttgart führt,
	_dann_ benötigt er 200km plus die Lönge des optimalen egs von Konstanz nach Stuttgart.