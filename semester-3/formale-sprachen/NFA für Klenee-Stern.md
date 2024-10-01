[[Transformation RegEx -> NFA]], [[Klenee-Stern]]

- man muss [[leeres Wort]] akzeptieren
	- neuer [[Startzustand]], der gleichzeitig [[Endzustand]] ist
- man muss [[Automat|Automaten]] beliebig oft durchlaufen können
	- [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] von _ehemealigen_ endzuständen zu Startzustand

![[Pasted image 20240920130824.png]]
$$\mathcal{A}(r_{1}^{*}) = (Q_{1} \cup \set{0}, \Sigma, \Delta_{1}\cup \set{(f_{1}, \epsilon, 0)\ |\ f_{1} \in F_{1}}, 0, \set{0})$$

> [!warning] Neuer [[Startzustand]] wird benötigt, weil Black Box nicht ausschließt, dass es Backlinks zu [[Startzustand]] $1$ gibt