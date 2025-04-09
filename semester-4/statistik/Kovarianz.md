> [[Varianz]] von zwei Variablen

$$cov(x, y) = \frac{1}{n}\sum\limits_{i=1}^{n}(x_{i}- \overline{x}) \cdot (y_{i} - \overline{y})$$
> [!info] Herleitung aus [[Varianz]]: $(x_{i} - \overline{x})^{2} = (x_{i} - \overline{x})(x_{i} - \overline{x})$


### Eigenschaften
- Symmetrie: $cov(x, y) = cov(y, x)$
- $x = y \Longrightarrow cov(x, y) = s^{2}$ ([[Varianz]] ist Sonderfall: Kovarianz mit sich selbst)
- Verschiebesatz: $cov(x, y) = \overline{x \cdot y} - \overline{x} \cdot \overline{y}$
- ???
## Bildliche Veranschaulichung
- Einteilung eines [[Streudiagramm]] in Quadranten:
	- $(x_{i} - \overline{x}) > 0 \land (y_{i} - \overline{y}) > 0 \Longrightarrow (x_{i}, y_{i}) \in I$ 
	- $(x_{i} - \overline{x}) < 0 \land (y_{i} - \overline{y}) > 0 \Longrightarrow (x_{i}, y_{i}) \in II$ 
	- $(x_{i} - \overline{x}) < 0 \land (y_{i} - \overline{y}) < 0 \Longrightarrow (x_{i}, y_{i}) \in III$ 
	- $(x_{i} - \overline{x}) < 0 \land (y_{i} - \overline{y}) > 0 \Longrightarrow (x_{i}, y_{i}) \in IV$

> [!hint] Vorzeichen der [[Kovarianz]] entscheidet: steigende, oder fallende Gerade?
> - $cov(x, y) < 0$ => Fallende Gerade, negativer Zusammenhang
> - $cov(x, y) > 0$ => Steigende Gerade, positiver Zusammenhang

![[Pasted image 20250402090054.png]]