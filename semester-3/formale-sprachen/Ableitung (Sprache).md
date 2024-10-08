> Die Anwendung einer oder mehrerer [[Produktionsregel|Produktionsregeln]] ausgehend von einem spezifischen Kontext heißt "Ableitung".


- **direkt ableitbar** $\Rightarrow$: Aus Kontext ist mit _einer_ Ableitung das Ergebnis zu erreichen
- **ableitbar** $\Rightarrow^{*}$: Aus Kontext ist mit _beliebig vielen_ Ableitungen das Ergebnis zu erreichnen

[[Übung 3.6 Ableitung]]
## Formal
Sei $G = (N, \Sigma, P, S)$ eine [[Grammatik]] und $x, y \in V^{*} = (\Sigma \cup N)^{*}$ [[Wort|Wörter]].
- $y$ ist aus $x$ <span style="color:rgb(245, 154, 35)">direkt ableitbar</span> ($x \Rightarrow y$), wenn es [[Wort|Wörter]] $u, v, \alpha, \beta \in V^{*}$ gibt, sodass $(x = u\alpha v) \land ((a \rightarrow \beta) \in P) \land (y = u \beta v)$
- $y$ ist aus $x$  <span style="color:rgb(245, 154, 35)">ableitbar</span> ($x \Rightarrow^{*} y$), wenn es [[Wort|Wörter]] $w_{0}...w_{n}$ gibt, wo dass $w_{0} = x \land w_{n} = y \land \forall_{i \in [0, n]}\ (w_{i-1} \Rightarrow w_{i})$ 

> [!hint]- Die von $G$ erzeugte [[Sprache]] ist $\mathcal{L}(G) = \set{w \in \Sigma^{*}\ |\ S \Rightarrow^{*} w}$
> **Note**: in erzeugter Sprache sind _nur_ [[Terminalsymbol|Terminalsymbole]] erlaubt!