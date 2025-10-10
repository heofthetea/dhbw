$$s^{2} := \frac{1}{n} \sum\limits_{i=1}^{n}|x_{i} - \overline{x}|^2$$

> [!hint] Bei allen Körpern außer den [[komplexe Zahl|komplexen zahlen]] ist die Norm unnötig.

> [!hint] Geschrieben als $s^{2}$, weil nur die [[Standardabweichung]] wirklich interessant ist

> [!info] Es ist einfacher, mit der [[Varianz]] zu rechnen, weil es keine Wurzel gibt.

> [!hint] Man muss quadrieren, weil negative Zahlen die Varianz zerstören.
## Verschiebesatz
(den gibt's halt auch wieso sollte man den auch behandeln idfk)
$$\overline{x^{2}} - \overline{x}^{2}$$


# Stochastik
[[Wahrscheinlichkeit]]
$$Var(x) =\sum\limits_{i=1}^{n}(x_{i} - E(X))^{2} \cdot P(x_{i})$$
#### Verschiebesatz
$$Var(x) = E(X^{2}) - E(X)^{2}$$
##### Rechnen:
$$Var(X) = \sum\limits_{i} x_i^2 \cdot P(X = x_i) - E(X)^2$$
## Eigenschaften
- [[Linearkombination|lineare]] Transformationen:
	- $Var(X + a) = Var(X)$ (Absorption)
	- $Var(b\cdot X) = b^{2} Var(X)$
	- $Var(b\cdot X + a) = b^{2}\cdot Var(X)$
- Additivität bei [[Unabhängige Ereignisse|Unabhängigkeit]]:
	- $Var(X + Y) = Var(X) + Var(Y)$
