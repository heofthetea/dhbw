- [[Algebra]] = beschäftigt sich mit abstrakten [[Object|Objekten]] und Operationen auf diesen
- [[Relationale Algebra]] = Operationen auf [[Relation|Relationen]]

> [!warning] Hier besteht kein signifikanter [[Semantik|semantischer]] Unterschied zwischen einer [[Relation]] und ihrer [[Instanz einer Relation|Instanz]].

## Basisoperationen
### [[Selektion]]
- [[Abbildung]] der Eingabe-[[Relation]] auf eine [[Teilmenge]] derer [[Tupel]], die einer [[Prädikat|Bedingung]] entsprechen

$$\sigma_{P}(R): R \longrightarrow R' \subset R$$

> [!warning] $P: [R] \rightarrow \mathbb{B}$

```sql
...
WHERE
...
```
### [[Projektion]]
- [[Abbildung]] der Eingabe-[[Relation]] auf eine Relation mit einem neuen [[Schema einer Relation|Schema]] $[R'] \subset [R]$

$$\Pi_{[R']}R: R \longrightarrow R'$$

```sql
SELECT [R*] ...
```
### [[Differenz von Relationen]]
[[Operationen auf Mengen]]
- [[Abbildung]] der Eingabe-[[Relation]] basierend auf der Mengendifferenz -> Alle [[Tupel]] in $R_{1}$, die nicht auch in $R_{2}$ sind

```sql
(R1)
EXCEPT 
(R2)
```

> [!warning] Hier müssen die [[Schema einer Relation|Schemata]] gleich sein!!!

### [[RelAlg Kreuzprodukt|Kreuzprodukt]]
- [[Kartesisches Produkt]]
- Vereinigt die [[Schema einer Relation|Schemata]] und erstellt alle möglichen Kombinationen


##### Mächtigkeit
$$|R'| = |R_{1}| \cdot |R_{2}|$$