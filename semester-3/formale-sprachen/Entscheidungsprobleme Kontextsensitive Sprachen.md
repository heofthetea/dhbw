[[Kontextsensitive Sprache]]
## Wortproblem
[[Wortproblem]] - ist entscheidbar

1. Berechne die [[Menge]] $M$ alle [[Wort|Wörter]] über $\Sigma$, die genau so lang (oder kürzer) sind wie $w$
2. $w \in M \Rightarrow w \in L(G)$

> [!info] $M$ ist endlich und kann in endlicher Zeit durch eine [[Turing Machine|TM]] berechnet werden.

## Leerheitsproblem
[[Leerheitsproblem]] ist nicht entscheidbar.

- kontextfreie Sprachen sind eine **echte** [[Teilmenge]] der kontextsensitiven Sprachen
- Konstruiere [[Linear beschränkter Automat|LBA]] für Durchschnitt => $L(A) = L(G_{1}) \land L(G_{2})$

$$L(A) = \varnothing \Longleftrightarrow (G_{1}, G_{2}) \in DP$$
(vgl. [[Disjunktheitsproblem]])
## Äquivalenzproblem
[[Äquivalenzproblem]] ist [[Unentscheidbarkeit|unentscheidbar]].

Widerspruch: [[Kontextfreie Sprache|Kontextfreie Sprachen]] sind eine echte [[Teilmenge]] der [[Kontextsensitive Sprache|Kontextsensitiven Sprachen]] ==> es ist schon für die nicht entscheidbar

> [!info] oder: [[Reduktion]] [[Leerheitsproblem]] auf [[Äquivalenzproblem]] analog zu [[Äquivalenzproblem TM]]