[[Bayes Plugin]]

- Allgemein: für [[Stichprobe|Sample]] $\vec{x}$ mit [[Verteilungsfunktion]] $p(x, \nu)$ gilt

$$\nu_{ML}(x) = arg\ max\ p(x, \nu) = arg\ max\ ln(p(x, \nu))$$

> [!warning] Bedingung:
> $$ln(p(x, \nu))|_{\nu= \hat{\nu}_{ML}}= 0$$


> [!hint] $ln(p(x, nu))$ ist die log-[[Likelihood]] (relevant für [[SPRT]])


## Für Gaussförmige [[Likelihood]]
$$\hat{p_{j}} = \frac{N_{j}}{N}$$
- $N_{j}$: Samples der Klasse $j$
- $N$: alle Samples

> [!warning] Samples müssen zufällig gezogen worden sein!!!! 