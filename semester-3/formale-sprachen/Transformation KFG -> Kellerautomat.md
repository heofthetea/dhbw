[[Kontextfreie Grammatik]], [[Kellerautomat]], [[Übergangsrelation]]

> [!warning] Hier sind Eingabe- und [[Stack]]-[[Alphabet]] nicht disjunkt.

## Definition
Gegeben sei eine [[Kontextfreie Grammatik]] $G = (N, \Sigma, P, S)$. 
Der [[Kellerautomat]] $\mathcal{A}_{G}$ ist wie folgt definiert:
$$\mathcal{A}_{G} = (\set{q}, \Sigma, \Sigma \cup N, \Delta, q, S)$$
mit [[Übergangsrelation]]:
$$\Delta = \set{(q, \epsilon, A, \beta, q)\ |\ A \rightarrow \beta \in P} \ \cup \\ \set{(q, c, c, \epsilon, q)\ |\ c \in \Sigma}$$

> [!hint]- Es gibt **genau** einen [[Zustand]]!
> [[Stack]] ist so mächtig, dass der [[Kellerautomat]] die [[Zustand|Zustände]] gar nicht braucht.

## Wörtlich
- $A_{G}$ simuliert [[Ableitung (Sprache)|Ableitungen]] von $G$
	- [[Nichtterminalsymbol]] $A$ auf [[Stack]]: [[Produktionsregel]] $A$ wird angewendet
	- [[Terminalsymbol]] $c$ auf [[Stack]]: wird gelöscht, wenn es dem gelesenen eingabesymbol entspricht

