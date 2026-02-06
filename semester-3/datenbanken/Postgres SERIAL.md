> Automatisch den [[PRIMARY KEY Constraint|Primärschlüssel]] erhöhen

[[Datentyp SQL]], [[SQL]]


- Löst Problem [[Übung Sub-query insert]]

### Under the hood
- Erstellt im Hintergrund eine SEQUENCE Variable - wird auto incrementiert
- owned die Sequence 

```sql
drop sequence if exists pers_nr_seq;
create sequence pers_nr_seq 
start with 12
owned by mitarbeiter.pers_nr;


alter table mitarbeiter
alter column pers_nr set default nextval('pers_nr_seq');
```


## Manuelle Implementierung
- [[Unterabfragen|Sub-query]]