[[Benutzersicht]]

- Erstellt nach außen hin eine neue [[Relation]] 
	- intern ist es aber nur ein [[SQL select]] -> [[SQL View Rules]]
- Über Views können auch Daten angelegt/verändert werden -> [[Einfügen in View]]
### Create View
[[SQL select]]
```sql
CREATE VIEW view_name
AS
SELECT ...
```

> [!hint] Can be altered and dropped like [[Relation|Relations]].


## Beispiel
- [[Benutzersicht]] auf Projektmitarbeiter

```sql
CREATE VIEW Projektmitarbeiter
AS 
SELECT * from mitarbeiter
NATURAL JOIN Mitarbeiter_Projekt;
```

### usage
```sql
select * from Projektmitarbeiter;
```