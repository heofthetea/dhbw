Lass ein kleines Element in einem [[Heap]] nach unten wandern

1. Vergleiche [[Knoten]] $E$ mit seinen [[Kindknoten|Kindern]] $K_{1},\ K_{2}$
2. tausche Knoten mit dem größeren der beiden [[Kindknoten|Kinder]] $max(K_{1},\ K_{2})$
3. repeat
> [!warning] An richtiger Stelle ($E > max(K_{1},\ K_{2}$) aufhören!
### Laufzeit
- Knoten muss schlimmsten Fall einmal durch ganzen [[Baum]] wandern
==> [[Logarithmische Laufzeit]]


## Code
[[heap_sort.c]]
[[Heaps are an Array#Finden der Kindknoten im Array]]

```c
void bubble_down(int *arr, uint64_t length, uint64_t node)
{
    uint64_t *children = getChildren(arr, length, node);
    if (children[0] >= length)
        return; // node is a leaf

    uint64_t greater_child = node;

    // find index of greater child
    if (children[1] >= length)
    {
        greater_child = children[0]; // node has only one child element
    }
    else
    {
        greater_child = (arr[children[0]] > arr[children[1]]) ? children[0] : children[1];
    }

    // figure out whether swap is necessary or not
    if (arr[node] < arr[greater_child])
    {
        swap(arr, node, greater_child);
        bubble_down(arr, length, greater_child); //value of index `node` is now at index `greater_child`
    }
}
```