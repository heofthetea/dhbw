> Äquivalent der [[Geometrische Verteilung|Geometrischen Verteilung]] für [[Stetige Verteilung|stetige Verteilungen]]

- Modelliert die Länge von zufälligen Zeitintervallen
$$X \sim Exp(\lambda)$$
> [!warning] kann nur positiv sein -> $D_{f} = \mathbb{R}^{+}$

### Dichtefunktion
$$f(x) = \begin{cases} \lambda \cdot exp(-\lambda x); \quad x \geq 0 \\ 0 \ \qquad \qquad\qquad else\end{cases}$$
### kumulative [[Wahrscheinlichkeit]]
$$F(x) = \begin{cases} 1 - exp(-\lambda x); \quad x \geq 0 \\ 0 \ \qquad \qquad\qquad else\end{cases}$$
> [!warning] Kumulativ -> $P(X \leq a) = F(a)$ 
### Kennzahlen
- [[Erwartungswert]]: $E(X) = \frac{1}{\lambda}$
- [[Varianz]]: $E(X) = \frac{1}{\lambda^{2}}$ 

## Beispiel
- Carbon-Dating - wie alt sind gefundene menschliche Knochen?