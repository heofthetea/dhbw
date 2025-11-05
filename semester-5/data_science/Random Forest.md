> Mehrere [[Entscheidungsbaum|Entscheidungsbäume]] aus einem [[Datensatz]] bauen

- man baut sehr viele Bäume
- Ziel: Bäume sollten **unkorelliert** sein
	- Es sollten "schlechtere" Splitz nach oben kommen
- man nimmt ungefähr $\sqrt{p}$ Parameter

> [!hint] Idee: Man schöpft den Informationsgehalt besser aus
> -> Demokratie: man lässt alle 400 Bäume auf das Problem los -> nehme [[Lagemaß Modus|Modus]] oder [[Arithmetisches Mittel|Mittelwert]]

> [!hint] [[Overfitting|Overfitten]] quasi nie, dafür sind sie prinzipiell _mehr_ [[Underfitting|underfitted]] als [[Gradient Boosted Trees]]