---
aliases:
  - Convolution
---

## Def

[[Faltung]] (eng. [[Faltung|Convolution]]) ist eine mathematische Operation über zwei [[Abbildung|Funktionen]] $f$ und $g$, die veranschaulicht, wie $f$ durch $g$ verändert wird.

- gegeben: zwei [[Signal|Signale]] $\vec{x}, \vec{y}$ mit Länge $N_{x}$ bzw $N_{y}$

### Lineare Faltung

$$(f * g)(k) = \sum\limits_{m=-\infty}^{\infty}f(m)g(k-m)$$

> [!hint] $*$ ist der **Faltungsoperator**, keine Multiplikation.

```python
def convolute(f, g):
	return lambda k: sum([f(m) * g(k - m) for m in range(-INFINITY, +INFINITY)])
```

### Eigenschaften

1. resultierendes [[Signal]] besitzt die Länge $N_{x} + N_{y} - 1$
2. Faltung entspricht [[Korrelation]] mit **gespiegeltem** $y$
3. Kann im mehrdimensionalen Raum verwendet werden

## Bildlich
- $g$ an y-Achse spiegeln
	- dann an $f$ entlang schieben (die Würfel)
- Tabelle: $f$ in x-Richtung, $g$  in y-Richtung
	- Einzelne Werte miteinander Multiplizieren
	- dann: Entlang der Diagonale Aufsummieren

> [!hint] Multiplikation von Polynomen ist eine Faltung!

## Darstellung in den [[Natürliche Zahlen]]

![[Pasted image 20251010154107.png]]

![[Pasted image 20251010154046.png]]
