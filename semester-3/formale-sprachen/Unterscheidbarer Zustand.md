
> [!hint] [[Relation]] $U$ ist symmetrisch --> $(p, q) \in U \Leftrightarrow (q, p) \in U$

## Definition
[[Recursion]]

Zwei [[Zustand|Zustände]] $p, q$ sind _unterscheidbar_, wenn:
- [[Base Case]]: _einer_ von beiden ist ein [[Endzustand]]
- Induktion: wenn
	- es ein $c\in \Sigma$ gibt, so dass $\delta(p, c) = p';\ \ \delta(q, c) = q'$
	- und $p', q'$ unterscheidbar sind.