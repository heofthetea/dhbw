
## k-nearest Neighbours
- [[K-Nearest Neighbours]]
- Verfahren für [[Klassifikation]]

> [!hint] Annahme: Punkte gleicher Klasse sind eng beieinander
#### Ansatz
1. $k$ ist [[Hyperparameter]] (tuning)
2. Rechne Distanz zu _allen_ anderen Punkten aus
3. nimm die $k$ nächsten Punkte
4. klassifiziere entsprechend der häufiger vorkommenden Klasse

## Linearregression
- [[Linearregression]]
- Ziel: [[Gerade]] durch eine [[Menge]] an Punkten setzen
	- Güte gemessen durch [[Güte der Regressionsgerade|Bestimmtheitsmaß]] $R^{2}$
	- Verbesserungen: [[Ridge Verfahren]] und [[Lasso Verfahren]]
		- [[Ridge Verfahren]]: Nach und nach Parameter gegen 0 sinken lassen
		- [[Lasso Verfahren]]: Erweitern von [[Ridge Verfahren|Ridge]] durch Strafterme (????)

## [[Bias-Varianz Problem]]
- [[Güte einer Vorhersage]] wird beeinflusst durch zwei Fehlerarten: 
	1. der [[Bias]] der Vorhersage (~ [[Underfitting]] (wird besser mit mehr training))
	2. die [[Varianz]] der Vorhersage (~ [[Overfitting]] (wird schlimmer mt mehr training))
- man kann nicht beide Fehler auf null bringen

> [!warning] die beiden sind exponentiell antiproportional, das führt zu dieser U-kurve:
> ![[Pasted image 20251027104117.png]]


## [[Bewertungsmetriken für Regression]]

| Name                                             | Was macht es                                                                                                                  | (für die Formeln bin ich zu faul) |
| ------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------- | --------------------------------- |
| [[Mean Square Error]]                            | Quadrierte Abweichung des tatsächlichen Punktes von der Vorhersage<br>=> gewichtet starke Ausreißer                           |                                   |
| [[Mean Absolute Error]]                          | wie [[Mean Square Error]] nur ohne quadrieren<br>=> man erhält information über "richtung" des Fehlers<br>=> keine Gewichtung |                                   |
| [[Mean Absolute Percentage Error]]               | [[Mean Absolute Percentage Error]] normiert<br>=> Bei Fehlern nah bei 0 ist das instabil                                      |                                   |
| [[Root Mean Squared Error]]                      | Wurzel aus [[Mean Square Error]]<br>=> sinnvolle Einheiten (keine Fehler in ${\texteuro}^{2}$)                                |                                   |
| [[Min-max distance]]                             | Wie weit bin ich im [[Worst Case]] daneben?                                                                                   |                                   |
| [[Güte der Regressionsgerade\|Bestimmtheitsmaß]] | Für [[Linearregression]]                                                                                                      |                                   |
