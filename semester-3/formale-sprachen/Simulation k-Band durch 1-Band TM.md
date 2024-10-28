> k-Band Turing Machines und 1-Band Turing Machines sind gleich mächtig.

[[k-Band Turing Machine]], [[Turing Machine]], [[Tupel]]

1. Man nimmt ein Band mit $k$ Spulen --> Eingabe-[[Alphabet]] $= \Gamma^{k}$
2. zusätzliche $k$ Spuren: $X$ markiert die Kopfposition auf Band $n$, alle anderen Felder sind ein [[Blanksymbol|Blank]]

> [!info] Spuren sind so angeordnet, dass an ungerader Position $p$ das "Kopf"-Band für die Spur $p + 1$ liegt

> [!warning] Ist nichts, was man in der Praxis durchführen wollte (jede TM wird absurd riesig und [[exponentielle Laufzeit|exponentiell]] langsam) - it's just for the sake of argument
> - benötigt $|\Gamma|^{k}$ [[Zustand|Zustände]] zum Merken des Bandinhalts


## Berechnung
1. laufe über verwendetes Band (Anfangs-/ End-Markierungen)
2. merke in [[Zustand|Zuständen]] den Inhalt von Spur $2 \cdot i$, wenn auf $2 \cdot i - 1$ ein $X$ steht
3. finde passenden Übergang in [[Übergangsrelation]]
4. modifiziere Spursymbole und Kopfpositionen

