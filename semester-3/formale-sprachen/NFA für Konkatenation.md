[[Transformation RegEx -> NFA]], [[Konkatenation]]

- $\mathcal{A}(r_{1})$ wird dargestellt als Black Box mit Anschlüssen:
	- Startzustand ist sichtbar
	- Endzustände sind sichtbar
	- alles dazwischen kann beliebig kompliziert sein
![[Pasted image 20240920125907.png]]
> [!hint] Basically alle [[Endzustand|Endzustände]] von $A(r_{1})$ werden per [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] mit [[Startzustand]] von $A(r_{2})$ verbunden

$$A(r_{1} \cdot r_{2}) = (Q_{1} \cup Q_{2}, \Sigma, \Delta_{1} \cup \Delta_{2} \cup \set{(f_{1}, \epsilon, 2)\ |\ f_{1} \in F_{1}}, 1, F_{2} )$$

