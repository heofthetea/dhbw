
- [[Paging]]: Dient der virtuellen Speicherverwaltung, ähnlich zu [[Segmentierung]]
- Jede [[Page]] ist auf ein gleich großes physisches [[Segment]] gemappt
	- Die Größe, mit der eine [[Page]] angelegt wird, ist arbitrary
	- Die Größe einer [[Page]] kann im Nachhinein nicht verändert werden.
- Wird [[Memory]] durch `malloc()` angefordert, wird eine [[Page]] erstellt und returned
- Arten von "Datentypen":
	-  Code
	- Daten
		- Statische Daten
		- Konstante Daten
		- [[Program Heap]]
		- [[Call Stack]]
#### Additional Features
- [[Address Space Layout Randomization]]: [[Page]]s liegen verstreut im physischen Speicher -> verhindert [[Buffer Overflow]] Exploitation
- [[Paging]] ermöglicht durch [[MMU]] zusätzlich Zugriffskontrolle durch [[Linux file permissions|permissions]] etc.
- [[Page Sharing]]: [[Singleton]]-esque Idee - anstatt eine identische neue [[Page]] zu generieren, wird eine Referenz auf eine bereits existierende [[Page]] gegeben
	- [[Copy on Write]] - wird diese [[Page]] verändert, wird eine Kopie erstellts

## MMU
- [[MMU]]: Memory Management Unit
- dient dem [[Virtual Memory Management]]
- übersetzt virtuelle [[Adresse|Adressen]] in physikalische Adressen:
$$\varphi(v,\ o) = t(v) + o$$
- $t$: Übersetzung gegeben durch [[Lookup Table]]
- `[v | o]`: virtuelle [[Adresse]] mit **V**irtual Page Number und **O**ffset

> [!warning] Die [[MMU]] **verwaltet** den Speicher nicht, sondern dient nur als Abstraction Layer. -> Verwaltung macht das [[Betriebssystem]]

### Translation Table
- von [[MMU]] genutzt, um virtuelle [[Adresse]] in physikalische Adresse zu übersetzen
- Enthält für jede [[Page]]:
	- **Modify** bit - wurde [[Page]] verändert?
	- **Reference** bit - wurde [[Page]] angefragt?
	- **Valid** bit - kann der Eintrag (?) verwendet werden?
	- **Protection** bits - [[Linux file permissions|Permissions]] rwx
	- [[Page Frame Number]]

## Swapping
- [[Swapping]]: Auslagern des gesamten Kontexts[^1] eines [[Prozess|Prozesses]] auf die Festplatte
	- Alternative [[Demand Paging]]: Nicht gesamter Kontext, sondern nur einzelne [[Page|Pages]] werden ausgelagert
- Ermöglicht effizientere Nutzung des [[Memory|Hauptspeichers]] => Mehr Prozesse mit viel Speicherbedarf möglich

> [!hint] Heutzutage wird eigentlich immer [[Demand Paging]] gemacht, aber trotzdem Swapping genannt.

> [!warning] Der Kern des [[Betriebssystem|Betriebssystems]] selbst wird ofc nie ausgelagert!
### Strategien
- <span style="color:rgb(245, 154, 35)">Not Recently Used</span>: [[Page|Pages]], die lange nicht genutzt wurden
- [[FIFO]]: Wenn Speicher knapp, dann die älteste [[Page]] zuerst auslagern
- <span style="color:rgb(245, 154, 35)">Least Frequently Used</span>: selten genutzte [[Page|Pages]] werden ausgelagert -> benötigt zusätzliche Information für jede [[Page]]

> [!hint] In Praxis wird eine Mischung verwendet. Dabei wird FIFO nicht gerne verwendet.

### [[Demand Paging]]
- es werden selten genutzte [[Page|Pages]] ausgelagert, anstatt gesamter [[Prozess]]-Kontext


## Page Sharing
- [[Page Sharing]]
- [[Copy on Write]]

[^1]: gesamter Kontext = alle Pages ?
