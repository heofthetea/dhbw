[[Operationen auf Mengen#Union]], [[Transformation RegEx -> NFA]]

- Startzustände $1$ und $2$ sind keine Startzustände mehr 
	- Stattdessen wird neuer Startzustand $0$ eingeführt, mit [[ε-Übergang (epsilon-Übergang)|epsilon-Übergängen]] zu bisherigen Startzuständen
![[Pasted image 20240920130541.png]]

$$A(r_{1} + r_{2}) = Q_{1} \cup Q_{2} \cup \set{0}, \Sigma, \Delta_{1} \cup \Delta_{2} \cup \set{(0, \epsilon, 1), (0, \epsilon, 2)}, F_{1} \cup F_{2}$$
