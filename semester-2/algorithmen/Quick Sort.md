[[Divide and Conquer]], [[Hoare Partitioning]], [[NL Partitioning]]

1. Wenn $|S| \leq 1$: fertig
2. Wähle Pivot $p \in S$
	1. [[Partitioning|Partitioniere]] Teilmengen
3. Sortiere beide Hälften [[Recursion|rekursiv]]


### Pseudo Code
requires implementation of [[Partitioning|partition]] function
```python
def quick_sort(arr, low, high):
	if high >= low:
		return
	pivot = partition(arr, low, high)
	q_sort(arr, low, pivot - 1)
	q_sort(arr, pivot + 1, high)
```

### Beispiel
[[Beispiel Quick Sort]]

## Partitioning
[[Partitioning]], [[Hoare Partitioning]], [[NL Partitioning]]

## Analyse
- [[unstable sorting algorithm]]
- [[in-place Sortieren]]
- [[Komplexitätsanalyse Quick Sort]]

> [!warning] [[Quick Sort]] ist ineffizient bei kleinen Arrays
> [[Partitioning]] und rekursiver Aufruf sorgt für unnötig viel Overhead verglichen mit z.B.[[Insertion Sort]]
#### Best/average case: 
- [[linearithmische Laufzeit]]
$$\mathcal{O}(n\ log\, n)$$
#### Worst Case
Der Pivot ist in jeder Iteration das erste oder letzte Element des Arrays
- Kann durch Heuristiken in Pivotauswahl mehr oder weniger vermieden werden
--> mit jedem Rekursionsschritt wird Array nur ein element kleiner
$$\mathcal{O}(n^{2})$$ (gleich wie [[Selection Sort]])
