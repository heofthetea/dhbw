### Formal
- eine [[Folge]] $a$ an Daten in eine Form bringen, sodass für eine gegebene [[Ordnungsrelation]] $\leq_{a}$ für alle $n$ gilt: $a_{n} \leq_{a} a_{n+1}$ 
#### Kategorisierungen
- [[in-place Sortieren]]: Für Sortierung wird kein zusätzlicher Speicher benötigt (oft $\mathcal{O}(log\, n)$ erlaubt)
- [[out-of-place Sortieren]]: Sortierverfahren benötigt zusätzlichen Speicher
- [[stable sorting algorithm|stabile Sortierung]]: Reihenfolge gleicher Elemente zueinander bleibt erhalten
- [[unstable sorting algorithm|instabile Sortierung]]: Reihenfolge gleicher Elemente zueinander bleibt nicht erhalten

## Naives Sortieren
- [[Bubble Sort]] und [[Shaker Sort]] sind trivial
	- [[Shaker Sort]] um ca. Faktor $\frac{1}{4}$ schneller
	- [[best case]] in [[Konstante Laufzeit|konstanter Laufzeit]] !!
- [[Selection Sort]]:
	- In jedem Durchgang wird das _kleinste_ Element gesucht und <span style="color:rgb(245, 154, 35)">ausgewählt</span> 
	- Laufzeit errechnet durch [[Summenformel auflösen|Summenformel]]
- [[Insertion Sort]]
	- In jedem Durchgang wird das _erste_ Element in ein neues [[Array]] <span style="color:rgb(245, 154, 35)">eingefügt</span>
	- naiv implementiert [[out-of-place Sortieren|out-of-place]], kann aber zu [[in-place Sortieren|in-place]] umgebogen werden
	- hat besseren [[best case]] als Sel'Sort und kann von sortierten Teil-[[Array|Arrays]] profitieren
	
> [!hint] [[Insertion Sort]] ist in Praxis etwas schneller als [[Selection Sort]].
> Why? I don't fucking know
## Effizientes Sortieren
### Quick Sort
1. wähle Pivot $p$
2. [[Partitioning]] in Teillisten
3. Sortiere jede Teilliste rekursiv

> [!warning] Performance von [[Quick Sort]] ist von Wahl des Pivots abhängig!

[[Worst Case]] quick sort: 1 mio Einsen
#### [[Partitioning]] Verfahren
1. [[Hoare Partitioning]]:
	1. Zwei Lauf-[[Pointer]] $L$ und $R$, die jeweils von links und rechts den Array durchlaufen
	2. wenn je ein Element auf der falschen Seite gefunden wurde: Vertausche diese
2. [[NL Partitioning]]
	1. schieb Pivot ans Ende
	2. erweitere in jedem Schritt das korrekt partitionierte Subarray --> Verfahren ähnelt [[in-place Sortieren|in-place]] [[Insertion Sort]]
	3. Schiebe Pivot am Ende wieder an richtige Stelle


### Merge Sort
[[Divide and Conquer]] nach Textbuch
1. Teile [[Array]] in 2 Hälften
2. Sortiere beide Hälften [[Recursion|rekursiv]]
3. [[2-way merge|Merge]] die nun sortierten Teillisten

#### Merge
[[2-way merge]] - ist der [[out-of-place Sortieren|out-of-place]] Aspekt von [[Merge Sort]]
1. vergleiche das erste Element beider Listen
2. schreibere das kleinere in eine neue Liste
3. repeat until one array is empty - then concat the other one

#### Bottom-up Merge
- [[Bottom-up Merge Sort]] ist [[Iteration|iterative]] Variante ohne Overhead durch Rekursion
1. Teile [[Array]] in $n$ Sub-[[Array|Arrays]] der Länge $2$ auf (und sortiere ggf.)
2. [[2-way merge|merge]] immer zwei angrenzende Sub-Arrays, bis ganzes [[Array]] zusammen gemerged ist

### Heap Sort
1. [[Heapify]] the [[Array]] (in einen [[Max-Heap]])
	1. [[Iteration|iteriere]] von hinten nach vorne (am [[Baum]]: rechts unten nach links oben)
	2. mach ein [[bubble up]] für jedes Element
2. von hinten nach vorne: tausche $i$ mit der [[Wurzel]] (= dem größten Element)
	1. stelle [[Heap Eigenschaften]] wieder her ([[bubble down]])

## Scorecard Sortieralgorithmen

| Algotithm          | [[Complexity\|Laufzeit]]                                                  | Stabilität                                                     | Speicherverhalten                                   |
| ------------------ | ------------------------------------------------------------------------- | -------------------------------------------------------------- | --------------------------------------------------- |
| [[Bubble Sort]]    | $\mathcal{O}(n^2)$                                                        | [[stable sorting algorithm\|stabil]]                           | [[in-place Sortieren\|in-place]]                    |
| [[Shaker Sort]]    | $\mathcal{O}(n^2)$ - um $\frac{1}{4}$ besser als Bubble                   | [[stable sorting algorithm\|stabil]]                           | [[in-place Sortieren\|in-place]]                    |
| [[Selection Sort]] | $\mathcal{O}\left(\frac{n(n - 1)}{2}\right)$                              | [[unstable sorting algorithm\|instabil]], auf [[Liste]] stabil | [[in-place Sortieren\|in-place]]                    |
| [[Insertion Sort]] | $\mathcal{O}\left(\frac{n(n - 1)}{2}\right)$                              | [[stable sorting algorithm\|stabil]]                           | mit Optimisierung: [[in-place Sortieren\|in-place]] |
| [[Quick Sort]]     | Average Case: $\mathcal{O}(n\ log\, n)$<br>Worst Case: $\mathcal{O}(n^2)$ | [[unstable sorting algorithm\|instabil]]                       | [[in-place Sortieren\|in-place]]                    |
| [[Merge Sort]]     | $\mathcal{O}(n\ log\, n)$                                                 | [[stable sorting algorithm\|stabil]]                           | [[out-of-place Sortieren\|out-of-place]]            |
| [[Heap Sort]]      | $\mathcal{O}(n\ log\, n)$ - a bit slower than [[Merge Sort\|Merge]]       | [[unstable sorting algorithm\|instabil]]                       | [[in-place Sortieren\|in-place]]                    |
