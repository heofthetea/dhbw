[[Semi-Entscheidbarkeit]], [[Aufzähl-Turing Machine]], [[Dovetailing]] 

Sei $M_{s}$ ein Sem-Entscheidungsverfahren für $L$ und $\Sigma^{*} = \set{w_{1}, w_{2}, w_{3}, ...}$. Wir definieren eine [[Aufzähl-Turing Machine]] $M_{a}$ wie folgt:
1. Führe **einen** Schritt der Berechnung von $M_{s}$ auf $w_{1}$ aus.
2. Führe **zwei** Schritte der Berechnung von $M_{s}$ auf $w_{1}$ und $w_{2}$ aus.
3. ...

Wann immer $M_{s}$ auf einer Eingabe terminiert, gibt $M_{a}$ diese Eingabe aus und fährt dann fort.

> [!hint] Das muss so umständlich gemacht werden, weil sobald **ein** [[Wort]] nicht zur Sprache gehört, [[Haltekonfiguration|terminiert]] $M_{a}$ nicht.
