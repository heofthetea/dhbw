[[Heap]]
[[Max-Heap]]

1. `find_max()` - finde erstes Element
2. `heapify()` - stelle Eigenschaften eines korrekten [[Heap|Heaps]] wieder her
	1. [[bubble up]]
	2. [[bubble down]]

### [[Wurzel]] entfernen
1. nimm letztes Element (rechtestes [[Blatt]]) und mach es zur neuen [[Wurzel]]
2. schiebe neue [[Wurzel]] (die jetzt falsch platziert ist) durch [[bubble down]] nach unten

### Neue [[Wurzel]] hinzufügen
1. Füge alte [[Wurzel]] als neues [[Blatt]] hinzu
2. Füge neue [[Wurzel]] hinzu
3. Lass alte [[Wurzel]] durch [[bubble up]] an richtige Stelle wandern
