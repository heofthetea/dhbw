> Colloquially: "Big O"

$O(f)$ ist eine [[Menge]]


[[Obere Schranke]], [[Grenzwert]]


Für eine Funktion f bezeichnet $O(f)$ die Menge aller Funktionen $g$ mit:
$$\exists_{k} \in \mathbb{N},\ \exists_{c} \in \mathbb{R}^{\geq 0}\ \ \forall_{n \gt k}\ g(n) \leq c \cdot f(n)$$

#### Auf weniger Mathematik:
- Ab einer bestimmten Grenze $k$ für $n$ ist $g(n)$ kleiner oder gleich $c \cdot f(n)$ für einen _konstanten_ Faktor $c$

> [!hint] Definition
> $O(f)$ ist die Menge allerr Funktionen, die _langfristig_ nicht _wesentlich schneller_ wachsen als $f$


Faustregel:
- Wenn der größte Exponent kleiner gleich ist, ist es drin

### Beispiel
![[Pasted image 20240514103614.png]]
$n^{2}\in O(n^3)$
$3 \cdot n^{3} + 2n^{2}\in O(n^3)$ 