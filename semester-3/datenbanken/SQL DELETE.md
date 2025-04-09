```sql
DELETE FROM table_name
WHERE <predicate>;
```

[[SQL Prädikate]]

## Integrität
[[Referenzielle Integrität]]

- Ein Eintrag kann nur dann gelöscht werden, wenn er von **keiner** anderen Tabelle durch einen [[FOREIGN KEY Constraint|Fremdschlüssel]] referenziert wird.
- => [[SQL Löschregeln]]