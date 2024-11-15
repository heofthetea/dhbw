> "Turing Machine, die sich selbst akzeptiert"

[[Beweis Unentscheidbarkeit spezielles Wortproblem]]

> [!info]- Das [[Spezielles Wortproblem|spezielle Wortproblem]] ist [[Unentscheidbarkeit|unentscheidbar]].
[[Beweis Unentscheidbarkeit spezielles Wortproblem]]

> [!hint] Ist eine spezielle Instanz des [[Halteproblem|Halteproblems]].
## Formal
Sei $T$ die [[Menge]] aller [[Gödelisierung|Codierungen von Turing Machinen]] und $M_{w}$ für $w \in T$ die [[Turing Machine]] mit der Codierung $w$.
Das spezielle Wortproblem $W$ ist die [[Menge]] aller codierten Turing Maschinen, die ihre eigene Codierung akzeptieren:
$$W = \set{w\ |\ w \in \mathcal{L}(M_{w})}$$

> [!info] Wenn $W$ [[Entscheidbarkeit|entscheidbar]] ist, dann ist auch $\overline{W} = \set{w\ |\ w \not\in \mathcal{L}(M_{w})}$ entscheidbar.
