![[Pasted image 20250507150250.png]]


[[SQL View]]


```sql
create view mitarbeiter_besucht_kurs
as 
select pers_nr, vorname, nachname, kurs_bez, institut, termin_kurs
from besucht_kurs
natural join mitarbeiter
natural join kurs;
```