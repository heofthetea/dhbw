[[Relationale Algebra]]

$$R' := R_{1} \cup R_{2}$$
$$[R'] := [R_{1}] = [R_{2}]$$


> [!warning] Die [[Schema einer Relation|Schemata]] der beiden [[Relation|Relationenen]] muss gleich sein!!!


![[Pasted image 20250416134332.png]]


## SQL
$$\Pi_{Vorname}(Mitarbeiter) \cup \Pi_{Vorname}(Kunde)$$
```sql
select vorname from mitarbeiter
union
select vorname from kunde;
```

-> Gibt eine Spalte zurück, die alle Werte aus beiden [[Relation|Relationen]] vereinigt

> [!hint]- Um Duplikate zu erlauben: `... UNION ALL SELECT ...`
> ist genau anders rum als mit [[Distinct]]... SQL ist sehr logisch lol

### verschieden namene Attribute
```sql
select nachname from mitarbeiter
union
select vorname from kunde;
```

- packt halt alles in eine Spalte
- ist möglich, weil die Datentypen vergleichbar sind