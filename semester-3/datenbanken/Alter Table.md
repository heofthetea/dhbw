> [[Tabelle]] nach [[SQL create table|Anlegen]] verändern

## foreign key hinzufügen
- [[FOREIGN KEY Constraint]]
```sql
ALTER TABLE mitarbeiter
ADD additional_key datatype
ADD FOREIGN KEY (additional_key) REFERENCES name;
```

## Cosntraint hinzufügen
```sql
ALTER TABLE name ADD UNIQUE(attribute_name);
```