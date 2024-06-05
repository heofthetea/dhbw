[[Rechenregeln Big O]]
## Untergrenze
$$g \in \Omega(f)$$ 
$g$ wächst langfristig _mindestens_ so schell wie $f$
$$\lim_{x \to \infty} \frac{f(x)}{g(x)} = c \in \mathbb{R}$$


## Gleichwertig
$$g \in \Theta(f)$$
$g$ wächst langfristig _genau_ so schnell wie $f$, bis auf einen _konstanten_ Faktor
$$\lim_{x \to \infty} \frac{g(x)}{f(x)} = c \gt 0\in \mathbb{R}$$

## Echt gleich
Sandwich lolol
$$g \textasciitilde f$$ $g$ wächst langfristig _genau_ so schnell wie $f$
- konstanter Faktor $1$
$$\lim_{x \to \infty} \frac{g(x)}{f(x)} = 1$$

## Faustregeln
1. $$g\in O(f) \land g \in \Omega(f) \Rightarrow g \in \Theta(f)$$
2. Jede Funktion steht in jeder der Relationen mit sich selbst
3. $O$ ist Gegenteil von $\Omega$