> Vereinfachung von [[Bayes Plugin]]

- "Naive" Annahme: Alle extrahierten [[Merkmal|Merkmale]] sind voneinander [[Unabhängige Ereignisse|unabhängig]].

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



