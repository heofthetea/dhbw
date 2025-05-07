[[SQL select]]

```sql
SELECT attribute 
FROM relation
WHERE Predicate
GROUP BY attribute 
HAVING predicate 
ORDER BY attribute;
```

1. `FROM` - erstellt ein [[Kartesisches Produkt]]
2. `WHERE` - Filtert [[Relation]] durch [[Prädikat]] (-> [[Selektion]])
3. `GROUP BY` - [[SQL Group By|Gruppierung]] (-> fasst [[Attribut|Attribute]] nach gleichem Wert zusammen)
4. `HAVING` - [[Prädikat]] für `GROUP BY`
5. `SELECT` - die [[Attribut|Attribute]] auswählen, die ich tatsächlich sehen will (-> [[Projektion]])
6. `ORDER BY` - [[Sortieren]] 