
[[Alter Table]]

![[Pasted image 20250416122444.png]]

```sql
alter table projekt
	add column is_intern bool not null default false;

alter table kunde
	add column is_intern bool not null default false;

```

> [!hint] Durch [[transitiv|Transitivität]] der [[Schwacher Entitätstyp|schwachen Entitäten]] hat man automatisch eine interne **Leistung**, wenn man einen internen **Kunden** hat.

### stuff anlegen
[[SQL INSERT]]

```sql
insert into projekt (bezeichnung, is_intern)
values ('intern 1', true);

insert into kunde (kunden_nr, nachname, firma)
values (42, 'intern kunde', 'interne abteilung');


insert into auftrag (auftrag_nr, erteilt_von, bezeichnung)
values (62, 42, 'interner auftrag')

insert into leistung (auftrag_nr, bezeichnung)
values (62, 'interne leistung')
```




![[Beispiel Softwarehaus Miniwelt#ERM|Softwarehaus ERM]]