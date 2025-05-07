[[SQL]], [[DQL]], [[Selektion]], [[Prädikat]]


```sql
SELECT Attribute_1, Attribute_2, ... Attribute_n
FROM Relation_1, Relation_2, ..., Relation_m
-- optional from here
WHERE predicate
GROUP BY attribute
HAVING predicate
ORDER BY attribute;
```

> [!hint] Es können auch Operationen in Attributnamen gemacht werden -> z.B. `SELECT attribute + 42`

> [!hint] Verbindet [[Selektion]] und [[Kartesisches Produkt]], und [[Projektion]]:
> - `SELECT` -> [[Projektion]]
> - `FROM` -> [[Kartesisches Produkt]]
> - `WHERE` -> [[Selektion]]

> [!warning] Duplikate [[Tupel]] müssen explizit mit `DISTINCT` ausgeschlossen werden
> ```sql
> select distinct vorname from mitarbeiter;
> ```
> Hier ist die Reihenfolge dann unterschiedlich.

## Umbenennung
```sql
SELECT attribute_name AS new_name
...
```

