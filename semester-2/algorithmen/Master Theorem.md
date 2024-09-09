#formelsammlung 
[[Recursion]], [[Rekurrenzrelation]], [[Übung Master Theorem]]
$$f(n)= a \cdot f\left(\left\lfloor\frac{n}{b}\right\rfloor\right)+c(n),\ \ \ \ mit \ c(n) \in O(n^{d})$$ wobei $a \geq 1\in \mathbb{N}$,  $b \geq 2 \in \mathbb{N}$,  $d \geq 0 \in \mathbb{R}$ 
- $a\cdot f\left(\frac{n}{b}\right)$ ist [[Recursion|rekursive]] Berechnung der Teillösungen
	- $a$ beschreibt die Anzahl rekursiver Aufrufe pro Funktionsdurchlauf
- $c(n)$ ist Teilen und Rekombinieren
> [!warning] zusätzlichen konstanten Aufwand nicht vergessen!!
> $c(n) = c_{1} \cdot n + c_{2}$ 

 **Fallunterscheidung**:
1. $a < b^{d} \Rightarrow f(n) \in O(n^d)$
2. $a = b^{d} \Rightarrow f(n) \in O(log_{b}(n)\cdot n^{d})$ 
3. $a \gt b^{d} \Rightarrow f(n) \in O(n^{log_{b}\, a})$ 

### Anschaulich
Zwei konkurrierende Kräfte:
1. immer mehr rekursive Aufrufe
2. immer kleinere Datenmenge
**Fallunterscheidungen**:
1. Teilen/Kombination dominiert [[Recursion]]
2. Kombination und [[Recursion]] haben gleichermaßen Einfluss auf Gesamtkomplexität
3. [[Recursion]] dominiert Kombination
	1. = mit jeder Rekursionstiefe wird Berechnungsaufwand größer

> [!warning] Funktioniert nur, wenn sich der Faktor teilt!!!
> ist für $r(n) = r(n - 1)$ nicht anwendbar ==> nur für [[Divide and Conquer]]

### Motivation
Zwei konkurrierende Kräfte:
1. immer mehr rekursive Aufrufe
2. immer kleinere Datenmenge

$c(n)$ Beschreibt Kombination am _Anfang_ des Rekursionsbaums
$log_{b}\, n$ beschreibt Rekursionstiefe
