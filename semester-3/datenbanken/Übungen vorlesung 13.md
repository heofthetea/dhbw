## 01
![[Pasted image 20250507130935.png]]

```sql
-- 1
update mitarbeiter
set gehalt = (select gehalt from mitarbeiter where pers_nr = 10)
where pers_nr = 1;
-- 2
select mitarbeiter.vorname, mitarbeiter.nachname, mitarbeiter.gehalt from mitarbeiter, mitarbeiter as ma
where mitarbeiter.gehalt = ma.gehalt
and mitarbeiter.pers_nr != ma.pers_nr;
```

## 03
[[Equi Join]]
![[Pasted image 20250507134550.png]]

```sql
select distinct vorname, nachname, auftrag_nr 
from mitarbeiter
join arbeitet_an using (pers_nr)
join auftrag using (auftrag_nr)
order by nachname desc;
```

## 04

![[Pasted image 20250507141914.png]]

```sql
select distinct vorname, nachname, auftrag_nr from mitarbeiter_projekt
natural join mitarbeiter
left outer join arbeitet_an using (pers_nr)
where auftrag_nr is null;
```

### ohne fucking join
```sql
select vorname, nachname from mitarbeiter_projekt
natural join mitarbeiter
where pers_nr not in (select pers_nr from arbeitet_an);
```

## 05
![[Pasted image 20250507142037.png]]


### Chain of thought
> [!hint] Aufdröseln, und von innen nach außen arbeiten

1. Alle Mitarbeiter, die noch an einem auftrag arbeiten
2. Ich will aber eigentlich das inverse davon -> `NOT IN` mit 1. als [[Unterabfragen|Sub-query]]
3. Dann halt noch vor- und nachnamen selektieren -> 2. wird wieder eine subquery

```sql
select pers_nr, vorname, nachname from mitarbeiter
where Pers_nr in (
	select pers_nr from mitarbeiter_projekt 
	where pers_nr not in (
		select pers_nr
		from arbeitet_an
		natural join leistung
		where ende_termin is null
			
	)
)
```

#### Alternative
- mit [[Differenz von Relationen|Differenz]]
- 

```sql

select vorname, nachname from mitarbeiter 
where pers_nr in (
	select pers_nr from arbeitet_an
	right join mitarbeiter using (pers_nr)
	natural join mitarbeiter_projekt
	except
	select pers_nr from arbeitet_an -- alle mitarbeiter, die an aktivem Projekt arbeiten
	inner join mitarbeiter using (pers_nr)
	inner join leistung using (leistung_nr)
	where ende_termin is null
);
```
