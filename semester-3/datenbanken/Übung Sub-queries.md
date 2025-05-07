![[Pasted image 20250430141659.png]]

[[Sub-queries mit Relationen]]

Digga kein Schwein macht das mit sub-queries dafuq

```sql
select pers_nr, skill
from mitarbeiter
where skill is not null
and arbeitet_in = any (select abt_bez_kurz from abteilung where standort = 'Leinfelden')
```

### MIt Existenzquantor
[[Existenzquantor]]

```sql
select pers_nr, nachname, skill
from mitarbeiter
where skill is not null
and exists (select from abteilung where standort = 'Leinfelden' and abt_bez_kurz = arbeitet_in)
order by nachname;
```

> [!warning] Hier **kann** das [[DBMS]] abbrechen, nachdem es ein erstes Ergebnis hat.

