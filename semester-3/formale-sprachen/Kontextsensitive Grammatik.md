> Unterklasse der [[Monotone Grammatik]]


$$uAv \rightarrow u\beta v$$
$$A \in N;\ \ u, v \in V^{*};\ \ \beta \in V^{*}\textbackslash\set{\epsilon}$$


- nur ein [[Nichtterminalsymbol]] darf verändert werden
- **aber**: Anwendung der [[Produktionsregel]] hängt von einem **Kontext** $u, v$ ab
- der Kontext darf _nicht_ verändert werden

## Warum Unterklasse?
$CB \rightarrow BC$ ist nicht kontext-sensitiv, aber monoton
> [!hint] Jede [[Monotone Grammatik|monotone Grammatik]] kann in eine [[Kontextsensitive Grammatik|kontextsensitive Grammatik]] transformiert werden.
> $CB \rightarrow CY \rightarrow XY \rightarrow XC \rightarrow BC$

