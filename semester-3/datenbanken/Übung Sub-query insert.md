[[SQL INSERT]], [[Unterabfragen|Sub-query]]

![[Pasted image 20250430145357.png]]

```sql
insert into mitarbeiter
values
((select max(pers_nr) from mitarbeiter) + 1,
'Horst','Mahler',NULL,'01.04.1975','m', '15.3.2013',default,49000);
```

