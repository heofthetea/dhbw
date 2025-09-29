> For every [[Kante|Edge]] $(a, b)$ in a [[Flow Graph]], an additional edge $(b, a)$ gets created

- the capacity of a reciprocal edge is $0$
- the flow of the edge is $-f$, where $f$ is the flow of $(a, b)$

> [!hint] [[Reciprocal Edge]]s allow the algorithm to correct bad choices it's made earlier, by also using them in [[Augmenting Path|Augmenting Paths]].

