
> [!hint] Ermöglicht, aus [[Chomsky Hierarchie]] der Sprachen eine _tatsächliche_ Hierarchie aus [[Teilmenge|Teilmengen]] zu machen 

Eine [[Kontextfreie Grammatik]] ist in [[Chomsky-Normalform]] (CNF), wenn alle [[Produktionsregel|Produktionsregeln]] einer der folgenden Formen sind:
- $N \rightarrow c$ mit $c \in \Sigma$
- $N \rightarrow AB$ mit $A, B \in N$
- $S \rightarrow \epsilon$, wenn $S$ auf keiner rechten Regelseite vorkommt

> [!hint] ähnlich zu [[Rechtslineare Grammatik]], einzig unterscheidbar damit, dass ein NTS zu zwei NTS expandiert werden kann

> [!hint] Eine [[Ableitung (Sprache)|Ableitung]] für ein [[Wort]] der [[Kontextfreie Sprache|konteztfreien Sprache]] kann aus maximal $2n - 1$ Regelanwendungen bestehen
### Ziel
- möglichsst wenige Arten von Regeln
- systematischer Test, ob ein [[Wort]] erzeugt werden kann
	- effektives Entscheidungsverfahren für [[Wortproblem]]


## Grund
- Wort wird mit jeder Regelanwendung länger --> Einfaches [[Wortproblem]]
- Es kann [[Endlosschleife|Endlosschleifen]] durch Kettenregeln geben


