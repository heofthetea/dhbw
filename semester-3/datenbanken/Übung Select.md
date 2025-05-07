
[[SQL select]]
### Was erhält man auf folgende Abfrage:
```sql
SELECT 42 FROM Mitarbeiter;
```
- returns eine neue [[Relation]] mit $|Mitarbeiter|$ [[Tupel|Tupeln]] die $42$ enthalten.
- why?


## Mitarbeitergehalt
![[Pasted image 20250430130034.png]]

```sql
select vorname, nachname, gehalt
from mitarbeiter
where gehalt between 40000 and 60000
and skill in ('Test', 'PR')
and nachname like '%z'
order by gehalt;
```


## Aufträge
![[Pasted image 20250430131440.png]]

```sql
select sum(gepl_std) from leistung where ende_termin is null;
```

- 1410
