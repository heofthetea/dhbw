> Mach einen korrekten [[Heap]] aus einem gegebenen [[Array]]

1. Schreibe Elemente einfach von vorne nach hinten, von links nach rechts in einen [[Baum]]
2. Gehe Array von hinten (ausgenommen die [[Blatt|Blätter]]) nach vorne durch (von unten nach oben, von rechts nach links)
	1. mache ein [[bubble up]] für jedes Element

> [!warning] Es wird immer weiter gegangen, solange ein valider Teil-[[Heap]] vorliegt!!
> ==> [[Breadth-First Traversion]] 
> - nicht weiter [[bubble up]] machen - aber: weiter [[bubble down]] ist möglich, wenn Heap nicht korrekt ist!

### Komplexität

Elemente, die heapified werden müssen: $n$
Worst case bubble down: $log\, n$ 
> Trick 17: Die hälfte Der Elemente muss gar nicht bubblen, ein  Viertel maximal 1 mal etc (Baumstruktur)

==> Heapify ist [[lineare Laufzeit|linear]]: $$\textasciitilde 2n$$$$\sum\limits_{i = 1}^{\infty}\frac{i}{2^{i}} = 2$$

[[Summenformel auflösen]], [[Grenzwert]]

## Code
Einfach für jedes Element ein [[bubble up]] machen
```c
void heapify(int *arr, uint64_t length)
{
    for (uint64_t i = 0; i < length; i++)
    {
        bubble_up(arr, i);
    }
}
```