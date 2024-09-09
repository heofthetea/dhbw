Lass ein großes Element in einem [[Heap]] nach oben wandern

1. vergleiche $K$ mit seinem [[Elternknoten]]
2. wenn $K \gt E$: tausche
3. repeat

## Code
[[heap_sort.c]]
[[Heaps are an Array#Finden der Elternknoten im Array]]

```c
void bubble_up(int *arr, uint64_t node)
{
    int parent = getParent(arr, node);
    if (parent == -1)
        return;

    if (arr[parent] < arr[node])
    {
        swap(arr, parent, node);
        bubble_up(arr, parent);
    }
}
```
