> Zwei Algorithmen haben im wesentlichen <span style="color:rgb(245, 154, 35)">dieselbe</span> [[Komplexität]]

- Im wesentlichen = Bis auf einen konstanten Vorfaktor

$$g \in \Theta(f)$$
- sprich: "g ist in Theta von f"
- $g$ wächst langfristig <span style="color:rgb(245, 154, 35)">genau</span> so schnell wie $f$, bis auf einen _konstanten_ Faktor
> [!hint] Zusammenhang mit [[Big O]] und [[Big Omega]]
> $$g\in O(f) \land g \in \Omega(f) \Rightarrow g \in \Theta(f)$$

### [[Grenzwertbetrachtung in Big O|Grenzwertbetrachtung]]
$$\lim_{x \to \infty} \frac{g(x)}{f(x)} = c \gt 0\in \mathbb{R}$$
