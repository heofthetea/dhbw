> auch: [[Semi-Entscheidbarkeit|semi-entscheidbare]] Sprachen
> erkannt durch [[Aufzähl-Turing Machine]])

allgemeinste Klasse der [[Sprache|formalen Sprachen]] (in dieser Vorlesung)
- ist nicht [[Entscheidbarkeit|entscheidbar]]
- Namensgebung: Mit einem [[Algorithmus|Algorithmus]] generierbar (basically ein [[Large Language Model]])
- haben eine _endliche_ Anzahl an Regeln


> [!hint]- ist nur eine sehr kleine [[Teilmenge]] aller möglichen Sprachen
> Die [[Menge]] der _unvernünftigen Sprachen_ ist wesentlich größer


## Normalform
1. $A \rightarrow c$
2. $A \rightarrow BC$
3. $AB \rightarrow CD$
4. $A \rightarrow \epsilon$

## Fähigkeiten
- praktisch brauchbare "vernünftige" Sprachen

### Beispiele
- alle gültigen Sätze der [[Lgk 1.2 Prädikatenlogik.pdf|Prädikatenlogik]] erster Stufe
- alle Programme, die auf einer gegebenen Eingabe anhalten --> [[Halteproblem]]

## Gegenbeispiel
- Generiere alle (undendlich vielen) [[Wort|Wörter]] aus $\Sigma = \set{a, b}$
- entscheide für jedes Wort zufällig, ob es zu $L$ gehört oder nicht


