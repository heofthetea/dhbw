[[Attribut]], [[Tabelle]], [[Relation]]
```sql
CREATE TABLE name (
	Attribut_1 Domain_1, 
	Attribut_2 Domain_2,
	...
);
```

> [!hint] [[PostgreSQL]] erlaubt Speicherung großer [[Object|Objekte]] - LOBs

> [!hint] Man kann eigene Datentypen erstellen: [[SQL create#Create a Type|CREATE TYPE]] 
## Vorteile 'Richtiger Datentyp'
- Operationen auf Spalten mit selbem Datentyp liefer konsistente Ergebnisse
	- "ich weiß: es kommt ein Integer zurück"
- Effizientere Speicherung (`VARCHAR(100)` vs `VARCHAR(12345)`) => Performance-Vorteil
- Verdichtete Abspeicherung von Daten