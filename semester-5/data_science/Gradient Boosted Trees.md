> mehrere [[Decision Tree|Entscheidungsbäume]] seriell hintereinander entscheiden lassen 

-> [[GBTpdf.pdf]]

1. Wähle den [[Arithmetisches Mittel|Mittelwert]] als Vorhersage
2. Compute Residual: $\overline{x} - x_{i}$ (= Abweichung vom [[Arithmetisches Mittel|Mittelwert]])
3. Trainiere [[Decision Tree]], um die Residuals vorherzusagen
4. berechne neue Residuals (mit kleinem increment Faktor (s. [[Gradient Descent]])
	1. repeat

> [!hint] Können auch [[Overfitting|overfitten]].

