> Mehrere [[Baumübersicht ML Modelle|Entscheidungsbäume]] aus einem [[Datensatz]] bauen

- man baut sehr viele Bäume parallel -> [[Forest]]
- Ziel: die einzelnen [[Decision Tree|Bäume]] sollten **unkorelliert** sein
	- Es sollten auch "schlechtere" Splits (i.e. Splits mit weniger [[Information Gain]]) nach oben kommen
- man nimmt ungefähr $\sqrt{p}$ Parameter

> [!hint] Idee: Man schöpft den Informationsgehalt besser aus
> -> Demokratie: man lässt alle 400 Bäume auf das Problem los -> nehme [[Lagemaß Modus|Modus]] oder [[Arithmetisches Mittel|Mittelwert]]

> [!hint] [[Overfitting|Overfitten]] quasi nie, dafür sind sie prinzipiell _mehr_ [[Underfitting|underfitted]] als [[Gradient Boosted Trees]]