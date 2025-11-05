---
aliases:
  - Ordnung
  - Preorder
---

$$\leq$$
[[Relation]], die eine Ordnung vorgibt
-> Bedingung, nach welcher [[Sortieren|sortiert]] wird

> [!hint] Semantisch gesehen ein zweistelliges [[Prädikat]].

### Transitivität
Eine [[Ordnungsrelation]] muss [[transitiv]] sein: 
$$a_{0}\leq a_{1}\ \  \land\ \ a_{1} \leq a_{2} \Longrightarrow a_{0} \leq a_{2}$$
## Modelled as [[Category]] 
- Every element is an [[Object]]
- a [[Morphism]] represents the two objects being in [[Relation]] with each other (i. e. $f: A \longrightarrow B \sim A \leq B$)

> [!hint] Possible because $\leq$ is [[Associativity|associative]] and [[transitiv|transitive]].s