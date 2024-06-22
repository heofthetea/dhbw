### Formal
- eine [[Folge]] $a$ an Daten in eine Form bringen, sodass für eine gegebene [[Ordnungsrelation]] $\leq_{a}$ für alle $n$ gilt: $a_{n} \leq_{a} a_{n+1}$ 
#### Kategorisierungen
- [[in-place Sortieren]]: Für Sortierung wird kein zusätzlicher Speicher benötigt
- [[out-of-place Sortieren]]: Sortierverfahren benötigt zusätzlichen Speicher
- [[stable sorting algorithm|stabile Sortierung]]: Reihenfolge gleicher Elemente zueinander bleibt erhalten
- [[unstable sorting algorithm|instabile Sortierung]]: Reihenfolge gleicher Elemente zueinander bleibt nicht erhalten

## Naives Sortieren
- [[Bubble Sort]] und [[Shaker Sort]] sind trivial
- [[Selection Sort]]:
	- In jedem Durchgang wird das _kleinste_ Element gesucht und <span style="color:rgb(245, 154, 35)">ausgewählt</span> 
	- Laufzeit errechnet durch [[Summenformel auflösen|Summenformel]]
- [[Insertion Sort]]
	- In jedem Durchgang wird das _erste_ Element in ein neues [[Array]] <span style="color:rgb(245, 154, 35)">eingefügt</span>
	- naiv implementiert [[out-of-place Sortieren|out-of-place]], kann aber zu [[in-place Sortieren|in-place]] umgebogen werden
## Effizientes Sortieren
### Quick Sort
1. wähle Pivot $p$
2. [[Partitioning]] in Teillisten
3. Sortiere jede Teilliste rekursiv

> [!warning] Performance von [[Quick Sort]] ist von Wahl des Pivots abhängig!


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

## Scorecard Sortieralgorithmen

| Algotithm          | [[Complexity\|Laufzeit]]                                                       | Stabilität                               | Speicherverhalten                                   |
| ------------------ | ------------------------------------------------------------------------------ | ---------------------------------------- | --------------------------------------------------- |
| [[Bubble Sort]]    | $\mathcal{O}(n^2)$                                                             | [[stable sorting algorithm\|stabil]]     | [[in-place Sortieren\|in-place]]                    |
| [[Shaker Sort]]    | $\mathcal{O}(n^2)$ - um $\frac{1}{4}$ besser als Bubble                        | [[stable sorting algorithm\|stabil]]     | [[in-place Sortieren\|in-place]]                    |
| [[Selection Sort]] | $\mathcal{O}\left(\frac{n(n - 1)}{2}\right)$                                   | [[unstable sorting algorithm\|instabil]] | [[in-place Sortieren\|in-place]]                    |
| [[Insertion Sort]] | $\mathcal{O}\left(\frac{n(n - 1)}{2}\right)$ - marginally better than Sel'Sort | [[stable sorting algorithm\|stabil]]     | mit Optimisierung: [[in-place Sortieren\|in-place]] |
| [[Quick Sort]]     | Average Case: $\mathcal{O}(n\ log\, n)$<br>Worst Case: $\mathcal{O}(n^2)$      | [[unstable sorting algorithm\|instabil]] | [[in-place Sortieren\|in-place]]                    |
| [[Merge Sort]]     | $\mathcal{O}(n\ log\, n)$                                                      | [[unstable sorting algorithm\|instabil]] | [[out-of-place Sortieren\|out-of-place]]            |
