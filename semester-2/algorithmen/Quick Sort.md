[[Divide and Conquer]], [[Hoare Partitioning]]

1. Wenn $|S| \leq 1$: fertig
2. Wähle Pivot $p \in S$
	1. [[Partitioning Quick Sort|Partitioniere]] Teilmengen
3. Sortiere beide Hälften [[Recursion|rekursiv]]


### Pseudo Code
requires implementation of [[Partitioning Quick Sort|partition]] function
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
[[Partitioning Quick Sort]], [[Hoare Partitioning]], [[NL Partitioning]]

## Analyse
- [[unstable sorting algorithm]]
- [[in-place Sortieren]]
- [[Komplexitätsanalyse Quick Sort]]
### Best/average case: 
- [[linearithmische Laufzeit]]

