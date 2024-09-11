> Erzeugt ein [[Wort|Wörter]] über einem [[Alphabet]]

Definiert als ein [[Tupel]] $G = (\Sigma, N, P)$, wo
- $\Sigma$: [[Menge]] aus [[Terminalsymbol|Terminalsymbolen]] (= [[Alphabet]])
- $N$: [[Menge]] aus [[Nichtterminalsymbol|Nichtterminalsymbolen]]
- $P$: [[Menge]] aus [[Produktionsregel|Produktionsregeln]]
### Beispiel
```
Σ = {x, y, +, (, ), ·}
N = { E }
P = { E -> x, E -> y,
	  E -> (E),
	  E -> E + E,
	  E -> E · E }
```

[[Übung 1.10 Grammatik]]
