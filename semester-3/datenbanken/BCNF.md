> [[3NF]] ohne Bedingung ("$\alpha$ ist prim") => Echt stärker als [[3NF]]
> "Boyce-Codd Normalform"

Eine [[Relation]] ist in [[BCNF|Boyce-Codd Normalform]], wenn sie in [[3NF]] ist **und** jede Determinante $X$ ein [[Superschlüssel]] ist.

Eine [[Relation]] ist auch in [[BCNF]], wenn diese keine überlappenden [[Schlüsselkandidat|Schlüsselkandidaten]] hat:
$$\forall_{K_{i}, K_{j}}(K_{i} \cap K_{j} = \varnothing)$$

> [!info] Das ist die erste Normalform, die _theoretisch_ sicherstellt, dass keine [[Anomalie|Anomalien]] mehr auftreten.

