[[Selektion]], [[Kartesisches Produkt]], [[Relation]]

$$R' = R_{1} \Join_{p} R_{2}$$
- $p$ ist ein [[Prädikat]]
- Verbindet die [[Tupel]] zweier [[Relation|Relationen]], gdw. wenn das [[Prädikat]] erfüllt ist

### Durch Elementaroperationen
$$\sigma_{p}(R_{1} \times R_{2})$$

## SQL
```sql
SELECT *
FROM Kunde
JOIN Auftrag
ON Kunden_Nr = erteilt_von;
```
