> Gegenmodell zu [[Adjazenzmatrix]]


Die [[Adjazenzliste]] $L$ für einen [[Knoten]] $x$ in einem [[Graph|Graphen]] $G$ enthält alle Knoten $y$, zu denen es eine von $x$ ausgehende [[Kante]] gibt.

==> Speichert nur die [[Kante|Kanten]], die es auch tatsächlich gibt
> [!warning] Platzeffizient, aber Navigation im [[Worst Case]] [[lineare Laufzeit|linear]]

![[Pasted image 20240712094553.png]]

> [!note]- in der Regel als [[Liste]] implementiert, man kann aber jede beliebige Datenstruktur verwenden!!
> ist in der Regel aber dann sehr spezifisch nach Use Case und nicht allgemein valide
### Komplexität
Platz: $\mathcal{O}(|E|)$ (Knoten werden auch gespeichert, aber sind idR viel weniger als Kanten)


## Auf [[beschrifteter Graph|beschrifteten Graphen]]
- Speichere [[semester-2/algorithmen/Schlüssel]]-Value-Pairs für jede Beziehung: `(Knote, Kantengewicht)` 

--> [[Übung Adjazenz#Adjazenzliste]]