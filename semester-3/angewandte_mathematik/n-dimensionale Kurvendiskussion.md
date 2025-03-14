> [!info] Bedingung für Extrempunkt: **Gradient** = 0

1. Bilde [[Gradient]] $g$ => [[Transponierung|transponierte]] [[Jacoby Matrix]]
2. Setze $g = 0$: Jeden [[Vektor]]-Eintrag gleich Null
	1. Wird ein [[LGS]] => Mach Gauss
	2. (an dem Punkt weiß mann, ob es überhaupt eine Extremstelle geben kann)
3. Bilde [[Hesse Matrix]] ~ $f''$
4. Setze $[x_{1}, x_{2}]^{t}$ in [[Hesse Matrix]] ein
5. Bestimme [[Eigentwerttheorie|Eigenwerte]]: $det(H(x_{1}, x_{2}) - \lambda\mathbb{1})$ 
6. Entscheide anhand Vorzeichen der Eigenwerte
	1. $\nu(\lambda_{1}) = \nu(\lambda_{2}) = -1$ -> Hochpunkt
	2. $\nu(\lambda_{1}) = \nu(\lambda_{2}) = +1$ -> Tiefpunkt
	3. $\nu(\lambda_{1}) \neq \nu(\lambda_{2})$ -> Sattelpunkt

## Mit Nebenbedingungen
1. Bilde [[Lagrange Funktion]] $L(\vec{x}, \lambda)$
2. Bilde [[Gradient|Gradienten]] $g$ von $L$
3. Setze $g = 0$ -> stelle um
	1. Finde Werte für $x_{1}, x_{2}, x_{3}$ über $\lambda$ 
4. Setze $\vec{x}$ in $f$ ein
5. Setze triviale Lösung/Randwert $\vec{t}$ in $f$ ein
	1. $f(\vec{x}) > f(\vec{t})$ -> $\vec{x}$ ist Hochpunkt

> [!hint] Die resultierende $\lambda$-Gleichung ist einfach wieder $n$.

