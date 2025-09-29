> Suche nach den **echten** $NP$-Problemen

[[P = NP Problem]]

> [!warning] $NP \ \textbackslash\ P$ ist nicht sinnvoll, weil bisher unentschieden

## Definition
Ein Problem $L$ ist NP-schwer, wenn **jedes** Problem in $NP$ sich in [[Polynomielle Laufzeit|polynomieller Zeit]] auf $L$ [[Reduktion|reduzieren]] lässt.
$$\forall_{L' \in NP} L' \leq_{p} L$$
$L$ ist [[NP-Vollständigkeit|NP-vollständig]], wenn $L$ sowohl in $NP$ als auch NP-schwer ist.

> [!info] Aus dieser Definition folgt:
> Angenommen, $L$ sei NP-vollständig.
> $$L \in P \longrightarrow P = NP$$
> ![[Pasted image 20241120141900.png]]


## Reduktionen
![[Pasted image 20241120144439.png]]

## Liste NP-vollständiger Probleme
- [[Cliquenproblem]]
- [[Erfüllbarkeitsproblem]]
- [[3-SAT]]
- [[Hamilton-Kreis]]
- [[Travelling Salesman Problem]]
- [[Rucksackproblem]]