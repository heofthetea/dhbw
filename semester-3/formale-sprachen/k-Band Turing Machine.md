> [[Turing Machine]] mit $k$ Bändern

[[Beispiel k-Band Turing Machine]]

Problem einer regulären [[Turing Machine]]: Eigetnliche Problemlösung verliert sich in ewigem [[Spulen]]

> [!warning] Eingabewort steht nur auf dem ersten Band!

- [[Haltekonfiguration]] wird hier erreicht, sobald für den aktuellen [[Vector]] kein Übergang existiert.
## Formal
eine [[k-Band Turing Machine]] ist ein $6$-[[Tupel]] $(Q, \Sigma, \Gamma, \Delta, q_{0}, F)$ wobei
- $Q, \Sigma, \Gamma, q_{0}, F$ definiert wie für ein-band [[Turing Machine]]
- [[Übergangsrelation]]: $\Delta \subset Q \times \Gamma^{k} \times \Gamma^{k} \times \set{r, l, n}^{k} \times Q$

> [!hint] In [[Übergangsrelation]] stehen [[Vector|Vektoren]] für die Bänder

