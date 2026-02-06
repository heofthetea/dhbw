> Vereinfachung von [[Bayes Plugin]]

[[Klassifikator]]

- "Naive" Annahme: Alle extrahierten [[Merkmal|Merkmale]] sind voneinander [[Unabhängige Ereignisse|unabhängig]].
	- (bsp: Alle Wörter in einer Email sind unabhängig)

> [!hint]- Ist gut für Textklassifikation (aus der Zeit vor Chatty).
> - kann keine Reihenfolge von Werten
> 	- kann nur: diese Wörter sind in derselben Email
> - lässt sich gut parallelisieren (man zählt einfach Wörter)

### Folgerungen
- [[Likelihood]]
$$p(x|\omega_{j}) = \prod\limits_{i=1}^{d}p(x_{i}|\omega_{j}, \nu_{ij})$$

## Advantage
- man muss weniger Parameter schätzen
	- => weniger Trainigssamples
- quick boi

## Disadvantage
- Annahme ist dumm

> [!hint] heißt: Es ist nur eine Approximation -> Bei zu starken [[Funktionale Abhängigkeit|abhängigkeiten]] wird die Performance scheiße
> Möglichkeit für mitigation: [[Merkmalstransformation]]



