> Anlegen eines neuen [[Tupel|Tupels]]


[[SQL]]

```sql
INSERT INTO table_name
VALUES (wert_1, wert_2, ..., wert_n);
```

- `default`: Wenn `default` angegeben ist, wird der default verwendet.
- unbekannte Werte werden mit [[null]] angegeben

> [!warning] Hier müssen **alle** [[Attribut|Attribute]], in der richtigen Reihenfolge, referenziert werden.

## Benannte Parameter
- nur die Werte angeben, die ich will
- alle nicht angegebenen Werte werden mit dem default belegt - oder mit [[null]], wenn kein default angegeben ist

```sql
INSERT INTO <table_name> (column_1, column_2)
VALUES (value_1, value_2)
```

> [!warning] [[SQL Constraints|Constraints]] dürfen nicht verletzt werden!!