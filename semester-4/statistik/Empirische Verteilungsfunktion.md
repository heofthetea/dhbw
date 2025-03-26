> Die empirische Verteilungsfunktion an der Stelle $x$ ist die kumulierte [[Relative Häufigkeit]] aller Merkmalausprägungen $x_{j}$, die kleiner oder gleich $x$ ist.

#klausurrelevant 
[[Quantitativmerkmal]], [[Ordinales Skalenniveau]], [[Monotonie|monoton wachsend]] 

> [!hint] Definiert eine Verteilung vollständig.

$$\mathbb{R} \longrightarrow [0,1]$$
$$H(x) = \sum\limits_{x_{j} \leq x}h(x_j)$$
> [!hint] Fast alle Experimente fallen in 10 Kategorien, definiert durch die [[Empirische Verteilungsfunktion|Verteilungsfunktion]].

> [!warning] **Empirisch** -> Aus der Praxis, i.e. aus [[Daten]]. NIcht verwechseln mit [[Verteilungsfunktion]].
### Algorithmus
1. $x$-Skala ist Ausprägung
2. $y$-Skala von 0 bis 1
3. für jedex $x$ der Skala:
	1. Wie viele Ausprägungen gibt es _bis maximal_ $x$?

## Beispiel
![[Pasted image 20250319082851.png]]

$$H(x) = \begin{cases}0\ f.\ x \lt 1 \\ 0.15\ f.\ 1  \leq x \lt 2 \\ 0.375\ f.\ 2 \leq x \lt 3 \\ 0.675\ f.\ 3 \leq x \lt 4 \\ 0.875\ f.\ 4 \leq x \lt 4 \\ 1\ f.\ x \lt 5\end{cases}$$

![[Pasted image 20250319083218.png]]

> [!warning] Darstellung ist eine nicht-stetige Funktion -> Sprungpunkte. **Achte auf geöffnet/geschlossen**.

> [!warning] Geht bei $-\infty$ los -> beim Zeichnen nicht bei [[Zero|Null]] anfangen!!!!!

> [!hint] Bei x-Achsen Sprung von $0$ auf $x$ -> x-achse "durchstreichen", um zu signalisieren, dass da was "weggelassen" wurde.

