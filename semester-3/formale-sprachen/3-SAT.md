> [[Erfüllbarkeitsproblem]] für KNF mit 3-Klauseln

> [!info] Ist gleich schwer wie allgemeines [[Erfüllbarkeit], also auch [[NP-Vollständigkeit|NP-vollständig]].
## Definition
1. Eine <span style="color:rgb(245, 154, 35)">3-Klausel </span>ist eine aussagenlogische Disjunktion mit höchstens 3 Literalen 
2. Eine Formel ist in 3-[[Konjunktive Normalform|KNF]], wenn sie eine **endliche** Konjunktion von 4-Klauseln ist
3. [[3-SAT]] ist die [[Menge]] aller [[Erfüllbarkeit|erfüllbaren]] Formeln in 3-KNF.

## Transformation in 3-KNF
> [!info] ist [[Polynomielle Laufzeit|polynomiell]].

1. Führe für jede Teilformel eine neue Aussagenvariable als Abkürzung ein
2. Esetze Teilformeln durch die Abkürzungen
3. Transformiere Konjunkte nach dem bekannten Verfahren in [[Konjunktive Normalform|KNF]]
4. Bilde Konjunktionen der abgekürzten Formeln und der Variable für die Gesamtformel

> [!hint] Danach kann jedes Konjunkt einzeln transformiert werden

> [!hint] Da für jede Teilformel (= jeden Operator) eine neue Variable gewählt wird, können nur **vier** verschiedene Fälle auftreten -> [[Übung 7.33 Transformation in 3-KNF]]
> Es kann einfach hardcoded werden lol


### Beispiel
![[Pasted image 20241120151013.png]]