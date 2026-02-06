> [[Support Vector Machine|SVM]], wo Fehlklassifikationen Erlaubt sind


> [!hint] Problem durch Definition der Margin/[[Support Vektor]]: Überlappungen von Klassen sind nicht erlaubt
=> traditionelle [[Support Vector Machine|SVM]] kommt zu keinem ergebnis (Hard Margin SVM)

- **Lösung**: Man erlaubt einen [[Fehlerrate|Trainingsfehler]] $ER \gt 0$


## Modifiziertes Optimierungsproblem
- Einführung eines **Outlier**-Grades $\xi_{n}$
	- $C$ bestimmt, wie stark die Outlier in der Optimierung gewichtet werden sollen)

$$min \frac{1}{2}||\vec{w}||^{2} + C \sum\limits_{n=1}^{N} \xi_{n}$$
- Nebenbedingungen:
	- $\xi_{n} \geq 0$ => ?
	- $y_{n}(\vec{w}^{t}\vec{x_{n}} + w_{0}) \geq 1 - \xi_{n}$ => [[Diskriminanzfunktion|LDF]] soll größer als 1 - die Schlupfvariable sein
		- $w_{0}$ ist Stützvektor der [[Entscheidungsgrenze]]
		- $y_{n} \in \set{1, -1}$ ?

![[Pasted image 20251121135003.png]]