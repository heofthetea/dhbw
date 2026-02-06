
> Geschätzte Klasse $\hat{\omega}(x)$ bestimmen

- Entscheidungsschwellwert $\gamma$
	- $\omega_{2} \gt \gamma$
	- $\omega_{1} \lt \gamma$

$$\frac{p(x|\omega_{2})}{p(x|\omega_{1})}$$

[[Likelihood]]

## Wahl von $\gamma$ 
### [[Minimum Bayesian Risk|MBR]]
$$\gamma = \frac{l_{21}-l_{11}}{l_{12}-l_{22}} \cdot \frac{P(\omega_{1})}{P(\omega_{2})}$$

> [!hint] Hier sieht man Existenz von [[MAP Klassifikator]] als Subset von [[MBR Klassifikator]] - $l_{11} = l_{22} = 0, l_{21} = l_{12} = 0$ für [[01-Loss]] -> kürzt sich weg
## [[MAP Klassifikator]]
$$\gamma  = \frac{P(\omega_{1})}{P(\omega_{2})}$$
### [[Maximum Likelihood Klassifikator]]
$$\gamma = 1$$
-> [[01-Loss]]