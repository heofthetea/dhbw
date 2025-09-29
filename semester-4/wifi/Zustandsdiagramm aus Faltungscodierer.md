[[Übergangsfunktion]], [[Mealy-Automat]]

$$Q = \mathbb{B}^{2} \ni (u_{1}u_{2})$$
$$\Sigma = \mathbb{B} \ni u_{0}$$

$$\delta: Q \times \Sigma \longrightarrow Q\times Y \quad \approx \quad u_{1}u_{2}\times u_{0} \longrightarrow u_{1}u_{2} \times AB$$

- $A,\ B$ sind Ausgänge des [[Faltungscodierer]]s
- $Y$ ist Ausgabe-[[Alphabet]] (s. [[Mealy-Automat]])

## Algorithmus
- [[Zustand]] an $u_{1}\times u_{2}$ nehmen
- Was kommt an $u_{0}$ rein? -> $\in \set{0, 1}$
1. Welcher Output wird dabei produziert? (s. Wahrheitstabelle) -> $y \in Y$
2. Welchen Wert haben $u_{1}$ und $u_{2}$, nachdem sich der Input einmal durch die [[D-Flipflop (Delay-FF)|DFFs]] geschoben haben? => $u_{1}u_{2} \in Q$ (= Folge-[[Zustand]]))


