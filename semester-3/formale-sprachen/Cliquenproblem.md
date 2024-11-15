[[ungerichteter Graph]]

- Gegeben: [[ungerichteter Graph]] $G = (V, E)$
	- $V = \set{v_{0}, v_{1}, ..., v_{n}}$
	- $E \subset V \times V$
- Frage: Gibt es eine $k$-[[Clique]] in $G$, also eine [[Teilmenge]] $V' \subset V$ mit
	- $|V'| = k$ und
	- $\forall_{(v_{i}, v_{j}) \in V' \times V'}:v_{i} \neq v_{j} \land (v_{i}, v_{j}) \in E$  

> [!hint] ist $\in NP$ ([[P = NP Problem]]).

## nichtdeterministischer Algorithmus
1. Erzeuge [[Nichtdeterminismus|nichtdeterministisch]] eine [[Menge]] $V' \subset V$ mit $|V'| = k$.
2. Teste ([[Determinismus|deterministisch]] und [[Polynomielle Laufzeit|polynomiell]], ob $V'$ eine [[Clique]] ist.)
3. Akzeptiere genau dann, wenn die Antwort "ja" ist.