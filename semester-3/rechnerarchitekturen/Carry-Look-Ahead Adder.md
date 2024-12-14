
> [!hint] Nicht feasible mit mehr als 4 Bit --> [[#Blockbildung]]

### Pro Bit

- Generate: Beschreibt, ob ein Carry neu generiert wird
$$G_{i} = x_{i} \land y_{i}$$
- Propagate: Beschreibt, ob Ein $C_{in}$ weitergereicht wird
$$P_{i} = x_{i} \lor y_{i}$$

> [!hint] [[Komplexität|Laufzeit]]: $5\Delta T$ - UNABHÄNGIG VON $n$!

### Zusammen
Für jedes Bit im Output kann anhand der Generates und Propagates der vorangegangenen Addierer entschieden werden, ob $C_{in} = 1$ ist:

$$C_{m} = C_{m - 2} \land P_{m-1} \lor G_{m-1}$$

> [!hint] Für ersten Addierer ($x_{0} + y_{0}$) ist $C_{in}$ immer $0$.

- $C_{in\ 1} = G_{0} \lor P_{0}$
- $C_{in 2} = (G_{0} \lor P_{0}) \land P_{1} \lor G_{1}$
- $C_{in\ 3} = ((G_{0} \lor P_{0}) \land P_{1} \lor G_{1}) \land P_{2} \lor G_{2}$
## Schaltplan



