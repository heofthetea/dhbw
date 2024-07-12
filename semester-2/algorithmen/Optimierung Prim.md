> Zeit wird verloren, indem man den kleinsten [[Knoten]] finden muss

**Lösung**: organisiere $V_{n}$ (Menge aller ausgehenden [[Knoten]]) als [[Min-Heap]]
- Wert des Heaps: Paare aus [[Knoten|Zielknoten]] und Kantengewicht
--> kleinstes Element wird in [[Konstante Laufzeit|konstanter Zeit]] gefunden

> [!warning] muss mit [[Adjazenzliste]] arbeiten!


### Komplexität
- für jeden [[Knoten]]: [[bubble down]]
- für jede [[Kante]]: [[bubble up]]
==> $\mathcal{O}(|E|\ log\, |V|)$
in [[Big O]] mit $n$: $\mathcal{O}(n^{2}\cdot log\, n)$ 