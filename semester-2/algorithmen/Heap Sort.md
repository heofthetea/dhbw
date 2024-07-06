[[Heap]]
> ist [[Selection Sort]] mit [[Operationen auf Heaps#Wurzel entfernen|find_max]] auf Heaps

[[unstable sorting algorithm]], [[in-place Sortieren]]
> [!info] Transformiert [[Max-Heap]] in einen [[Min-Heap]]
> Mit besonderer Eigenschaft, dass jede Tiefe in sich vollständig sortiert ist

1. [[Heapify]] das [[Array]]
2. [[Operationen auf Heaps#Wurzel entfernen|Wurzel entfernen]] - mit letztem Element des Arrays tauschen
	1. neue wird nicht stimmen -> restore [[Heap]]-Eigenschaften using [[bubble down]]
3. wiederholen, bis [[Heap]] leer ist


> [!warning] Funktioniert nur auf [[Array]], nicht auf [[Liste|Listen]]

## Code
[[heap_sort.c]]
```c
void heap_sort(int *arr, uint64_t length) {
    heapify(arr, length);

    for(int i = length - 1; i >= 0; i--) {
        swap(arr, 0, i); // pop root
        bubble_down(arr, i, 0); // restore heap
    }

}
```
## Komplexität

## Komplexität
[[Heapify]] $\mathcal{O}(n)$ + $n$ * (`find_max()` + [[bubble down]])

$$n \cdot log\, n + n$$ (addiertes $n$ ist [[Heapify]]) 