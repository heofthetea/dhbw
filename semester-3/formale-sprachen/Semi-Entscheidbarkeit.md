
- Frage: ist $w \in L$?
	- Wenn ja: [[Turing Machine]] findet dies in _endlicher_ Zeit heraus & [[Haltekonfiguration|terminiert]]
	- Wenn nein: [[Endlosschleife]]

## Formal
Sei $\Sigma$ ein [[Alphabet]]. Eine [[Sprache]] $L \subset \Sigma^{*}$ heißt [[Semi-Entscheidbarkeit|semi-entscheidbar]], wenn es eine [[Determinismus|deterministische]] [[Turing Machine]] gibt, die mit Eingabe $w \in \Sigma^{*}$:
1. [[Haltekonfiguration|terminiert]], wenn $w \in L$
2. ansonsten [[Endlosschleife|nicht terminiert]].


> [!info] Eine [[Sprache]] ist semi-entscheidbar, wenn sie [[Rekursiv aufzählbare Sprache|rekursiv aufzählbar]] ist. =>  [[Aufzähl-Turing Machine]] 

> [!info] Wenn sowohl $L$ als auch $\overline{L}$ [[Semi-Entscheidbarkeit|semi-entscheidbar]] sind, ist $L$ [[Entscheidbarkeit|entscheidbar]].



## Beispiel
- Tableau + Resolutionsalgorithmus der Prädikatenlogik