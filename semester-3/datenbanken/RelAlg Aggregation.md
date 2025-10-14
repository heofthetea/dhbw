1. Gruppiere alle [[Tupel]] nach einem gemeinsamen [[Attribut]] $G$
2. Für jedes neue [[Tupel]] $T_{i}$: Errechne die [[Aggregation]] anderer [[Attribut|Attribute]] durch $f_i$

> [!info] "Gruppieren" = Generiert neues [[Tupel]] für jeden eindeutigen Werts

$$R:= \Gamma_{[G],f_{1}([G_{1}]),\ \dots,\ f_{n}([G_{n}])}(R)$$
$$[G_{i}] \subset [R]$$

- $f_i$ ist die Aggregations-[[Abbildung|Funktion]] $f_{i} : [G_{i}] \mapsto D_{i}$

> [!hint] Zuerst wird gruppiert, danach [[Aggregation|aggregiert]]
