[[Reguläre Sprache]], [[NFA]], [[Rechtslineare Grammatik]]



$$Q = N \cup \set{f};\ \ \ f\not\in N$$$$q_{0} = S$$
$$F = \set{f}$$

$$\Delta = \set{(A, c, B)\ |\ A \rightarrow cB \in P}\ \cup \set{(A, c, f)\ |\ A \rightarrow c \in P}\ \cup\ \set{(A, \epsilon, B)\ |\ A \rightarrow B \in P}\ \cup\ \set{(A, \epsilon, f)\ |\ A \rightarrow \epsilon \in P}$$

- Jedes [[Nichtterminalsymbol]] wird zu [[Zustand]]
	- ein zusätzlicher [[Endzustand]]
- jede [[Produktionsregel]] wird zu einer [[Übergangsrelation]]
	- ist nach einer [[Produktionsregel]] kein [[Nichtterminalsymbol]] mehr im [[Wort]], gehe zu [[Endzustand]]

## Beispiel 

![[Pasted image 20241009142840.png]]