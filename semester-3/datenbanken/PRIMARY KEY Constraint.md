---
aliases:
  - Primärschlüssel
---
> Legt [[Schlüssel|Primärschlüssel]] der Tabelle an

```sql
CREATE TABLE ... (
	id int,
	name varchar,
	PRIMARY KEY (id, varchar)
);
```