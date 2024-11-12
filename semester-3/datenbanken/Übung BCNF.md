[[BCNF]], [[3NF]]

$$R: \set{[b, c, d, e]}$$
$$F: \begin{cases}\set{b, c} \rightarrow \set{e} \\ \set{c} \rightarrow \set{d} \\ \set{d} \rightarrow \set{c} \end{cases}$$
## Schlüsselkandidaten
- $K_{1} = \set{b, c}$
- $K_{2} = \set{b, d}$ (Herleitung durch pseudo-transitivität)

> [!hint] Es gibt überlappende Schlüssel: $K_{1} \cap K_{2} = \set{b} \neq \varnothing$ => **kann** nicht in [[BCNF]] sein
## Tabelle

| $X$          | $\alpha$ | [[Superschlüssel]] | [[Primattribut\|prim]] |
| ------------ | -------- | ------------------ | ---------------------- |
| $\set{b, c}$ | $e$      | ✅                  | ❌                      |
| $\set{c}$    | $d$      | ❌                  | ✅                      |
| $\set{d}$    | $c$      | ❌                  | ✅                      |

## Zerlegung
- $R_{1} = \set{\underline{b}, \underline{c\uparrow}, e}$
- $R_{2} = \set{\underline{c}, d}$