> **unbeschränkte** [[Binomialverteilung]] (= unendlich viele Versuche)

[[Diskrete Verteilung]]

- Frage: Was ist die Wahrscheinlichkeit, dass $X$ $k$ mal auftritt, wenn $X$ unendlich oft eintreten kann?

> [!hint] eine [[Binomialverteilung]] $B(n, p)$ mit sehr großen $n$ und kleinem $p$ [[Grenzwert|konvergiert]] gegen die [[Poisson-Verteilung]].

$$X \sim P(\lambda)$$
- [[Erwartungswert]] und [[Varianz]]: $E(X) = Var(X) = \lambda$
## Wahrscheinlichkeit

$$x \in \mathbb{N} = \set{0, 1, 2,\,\dots\,,n,\,\dots}$$

$$P(X = x) = \frac{\lambda^{x}}{x!} \cdot e ^{-\lambda}$$

> [!hint] $\lambda$ ist der [[Erwartungswert]] der Verteilung.

## Beispiel
- Bei einer Hotline weiß man aus Erfahrung, dass freitags zwischen 14 und 15 Uhr im Durchschnitt 7 Kunden den Dienst in Anspruch nehmen. Wie wahrscheinlich ist es, dass 9 Kunden anrufen?
	- $E(X) = \lambda = 7$
	- $x = 9$

$$P(X = 9)=\frac{7^{9}}{9!} \cdot \frac{1}{e^{7}}\approx 0.1014$$

