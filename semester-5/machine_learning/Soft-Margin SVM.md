> [[Support Vector Machine|SVM]], wo Fehlklassifikationen Erlaubt sind


> [!hint] Problem durch Definition der Margin/[[Support Vektor]]: Überlappungen von Klassen sind nicht erlaubt
=> traditionelle [[Support Vector Machine|SVM]] kommt zu keinem ergebnis (Hard Margin SVM)
- 
- **Lösung**: Man erlaubt einen [[Fehlerrate|Trainingsfehler]] $ER \gt 0$


## Modifiziertes Optimierungsproblem
- Einführung eines **Outlier**-Grades $\xi_{n}$
	- $C$ bestimmt, wie stark die Outlier in der Optimierung gewichtet werden sollen)

![[Pasted image 20251121135003.png]]