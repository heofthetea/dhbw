

1. Signale $x$ und $y$ werden in [[Partial Order|Rangfolgen]] $r_{x}, r_{y}$ konvertiert (i.e. aufsteigend [[Sortieren|sortiert]])
2. Danach werden Rangfolgen verglichen

> [!hint] Kann auch [[Exponentialfunktion|exponentielle]] Zusammenhänge


## Spearman
- Zuerst Rangfolgen bilden, dann diese auf Korrelation untersucht
$$\rho_{s} = \frac{cov(r_{x}, r_{y})}{\sigma_{r_{x}} \sigma_{r_{y}}} = 1 - \frac{6\sum\limits_{i = 1}^{N}d_{i}^{2}}{N(N^{2} - 1)}$$

## Kendall
Signalpaare $x_{i}, y_{i}$ werden nur nach $x$ sortiert
neue [[Folge]] wird auf Konkordanz $y_{i} \lt y_{j}$ untersucht
$$\tau = \frac{n_{k}- n_{d}}{\frac{N}{2}(N-1)}$$