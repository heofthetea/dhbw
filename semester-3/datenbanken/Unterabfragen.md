---
aliases:
  - Sub-query
---
> Nested [[SQL select]] queries, um einen Wert für [[Selektion|Vergleiche]] zu bekommen

- in der `WHERE` Klausel des [[SQL select]] gibt es die Möglichkeit, ein weiteres [[SQL select]] query zu  anstelle eines festen Wertes benutzen

> [!hint] Attribute können aus der Super-query übernommen werden.

```sql
select attribute
from table 
where attribute > (select attr2 ...);
```

> [!warning]- Subquery muss als Ergebnis **einen** Wert haben - eine [[Relation]] ist nicht erlaubt.

> [!hint] Geht auch für [[SQL INSERT]] -> [[Zwischentabelle]]