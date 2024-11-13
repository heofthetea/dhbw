> Ein Problem auf ein bekanntes/gelöstes Problem zurückführen

[[Beispiel Reduktionsbeweis - Leerheitsproblem auf Äquivalenzproblem]], [[Übung 5.16 Reduktion]]


Eine [[Reduktion]] von $L_{1} \subset T_{1}$ auf $L_{2} \subset T_{2}$ ist eine mit einer [[Turing Machine]] berechenbare [[Abbildung]] $f: T_{1} \rightarrow T_{2}$, so dass für alle $w \in T_{1}$ gilt:
$$w \in L_{1} \Leftrightarrow f(w) \in L_{2}$$
Es gilt:
- $(L_{1} \leq L_{2}) \land L_{2}$ [[Entscheidbarkeit|entscheidbar]]$\Longrightarrow L_{1}$ entscheidbar
- $(L_{1} \leq L_{2}) \land L_{1}$ [[Unentscheidbarkeit|unentscheidbar]] $\Longrightarrow L_{2}$ unentscheidbar

> [!warning] Schlussrichtung ist **umgekehrt** für [[Entscheidbarkeit]] und [[Unentscheidbarkeit]].

> [!info] Gilt in derselben Form für [[Semi-Entscheidbarkeit]].
#### Notation
$$L_{1}\leq L_{2}$$
$L_{1}$ ist auf $L_{2}$ reduzierbar.

> [!hint] ist Alltagsgeschäft eines Informatikers => [[Reduktion]] neuer Probleme auf bekannte (= [[Entscheidbarkeit|entscheidbare]]) Implementierungen

