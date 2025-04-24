> [[Theta Join]], bei dem das [[Prädikat]] das Gleichheitsprädikat $=$ ist

$$R' = R_{1}\ \Join_{[L] = [R]}\ R_{2}$$
$$[R'] = [R_{1}] \cup [R_{2}]$$
- Vorraussetzungen:
$$[L] \subseteq [R_{1}]\ \land\ [R] \subseteq [R_{2}]$$


- $R_{1}$ und $R_{2}$ sind [[Relation|Relationen]]
- Kombiniert die [[Attribut|Attribute]] von zwei [[Tupel|Tupeln]] $r_{1} \in R_{1}$ und $r_{2} \in R_{2}$ gdw. 
$$\Pi_{[L]}\set{[r_{1}]} = \Pi_{[R]}\set{[r_{2}]}$$


## Als Kombination aus Basisoperationen
[[RelAlg Kreuzprodukt]], [[Selektion]]
$$\sigma_{[L] = [R]}(R_{1} \times R_{2})$$


## Beispiel

#### Relation Mitarbeiter

| Mitarbeiter_Nr | Vorname | Nachname   | Abteilungs_Nr |
| -------------- | ------- | ---------- | ------------- |
| 1              | John    | Doe        | 1             |
| 2              | Max     | Mustermann | 2             |
| 3              | Juan    | Perez      | 1             |

#### Relation Abteilung

| Abteilungs_Nr | Bezeichnung  |
| ------------- | ------------ |
| 1             | IT Abteilung |
| 2             | Marketing    |
| 3             | Consulting   |

#### Join
$$Mitarbeiter\ \Join_{[MA.Abt\_{Nr}] = [Abt.Abt\_{Nr}]}\ Abteilung$$


| Mitarbeiter_Nr | Vorname | Nachname   | Abteilungs_Nr | Bezeichnung  |
| -------------- | ------- | ---------- | ------------- | ------------ |
| 1              | John    | Doe        | 1             | IT Abteilung |
| 2              | Max     | Mustermann | 2             | Marketing    |
| 3              | Juan    | Perez      | 1             | IT Abteilung |
