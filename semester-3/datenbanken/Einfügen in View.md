[[SQL View]]

```sql
create view v_kurs as 
select * from kurs;

insert into v_kurs
values (2223, 'Testkurs', 'Testinstitut'); -- funktioniert lol
```

