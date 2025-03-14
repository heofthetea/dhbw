> _Konstruktive_ Definition einer [[Sprache|Formalen Sprache]]. Erzeugt ein [[Wort|Wörter]] über einem [[Alphabet]].

## Definition
Eine Chomsky-[[Grammatik]] ist ein **Quadrupel** (4-[[Tupel]]).
$$G = (N, \Sigma, P, S)$$

mit 
1. Einer [[Menge]] $N$ aus [[Nichtterminalsymbol|Nichtterminalsymbolen]]
2. Einer [[Menge]] $\Sigma$ aus [[Terminalsymbol|Terminalsymbolen]]
3. Einer [[Menge]] $P$ von [[Produktionsregel|Produktionsregeln]]
4. Einem [[Startsymbol]] $S$ mit $S \in N$
Es gilt $N \cap \Sigma = \varnothing$

> [!hint] $V = N \cup \Sigma$ ist die [[Menge]] aus allen [[Terminalsymbol|Terminalsymbolen]] und [[Nichtterminalsymbol|Nichtterminalsymbolen]]

## Beispiel
```
Σ = {x, y, +, (, ), ·}
N = { E }
P = { E -> x, E -> y,
	  E -> (E),
	  E -> E + E,
	  E -> E · E }
```

[[AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA]]

[[Übung 1.10 Grammatik]]