Entscheiden Sie für die folgenden drei Szenarien (1) ob es sich um eine Klassifikations- oder Regressionsaufgabe handelt und geben Sie an, ob wir mehr in (2) [[Inferenz]] oder Vorhersage interessiert sind. Weiterhin geben Sie die (3) Anzahl der Dimensionen p und die Anzahl der Datenpunkte N an. 
- a) Wir haben eine Liste der Top-500 Unternehmen in Deutschland. Für jede Firma liegt der Gewinn, Umsatz, die Anzahl der Mitarbeiter, die Branche und das Gehalt des CEOs vor. Wir interessieren uns für die Faktoren welche das CEO-Gehalt beeinflussen.
- (b) Wir möchten in neues Produkt im Markt einführen und wollen wissen, ob es ein Erfolg oder ein Ladenhüter wird. Wir haben Daten von 20 ähnlichen Produkten welche eingeführt wurden. Wir wissen ob es ein Erfolg oder ein Ladenhüter war, den Preis, das Budget für Marketing, die Preise der Konkurrenz und zehn weitere Variablen.
- (c) Wir möchten gerne die prozentuale Veränderung des Euros in Zusammenhang mit den Börsen weltweit vorhersagen. Dafür liegen Daten aus ganz 2018 vor. Für jede Woche ist bekannt wie sich der Euro prozentual verändert hat, sowie die Börsenwerte er USA, GB und Deutschland.



|     | 1                          | 2          | 3                                |
| --- | -------------------------- | ---------- | -------------------------------- |
| a   | Klassifikation[^1]         | Inferenz   | $N = 500$<br>$p = 6$[^2]         |
| b   | Klassifikation - (weil ??) | Vorhersage | $N = 20$<br>$p \in \set{15, 16}$ |
| c   | Regression                 | Vorhersage | $N = 52 (?)$<br>$p = 4$          |

[^1]: Wäre nur Regression, wenn wir _vorhersage_ treffen wollten

[^2]: Firma ist auch bekannt lol
