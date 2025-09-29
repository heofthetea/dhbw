> [[Tabelle]] nach [[SQL create table|Anlegen]] verändern

## foreign key hinzufügen
- [[FOREIGN KEY Constraint]]
```sql
ALTER TABLE mitarbeiter
ADD COLUMN additional_key datatype -- column is optional
ADD FOREIGN KEY (additional_key) REFERENCES name;
```

## Cosntraint hinzufügen
[[UNIQUE Constraint]]
```sql
ALTER TABLE name ADD UNIQUE(attribute_name);
```