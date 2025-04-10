
[[Alter Table]]

```sql
alter table projekt
	add column is_intern bool not null default false;
	


alter table leistung
	add column is_intern bool not null default false references projekt.is_intern;





```




![[Beispiel Softwarehaus Miniwelt#ERM|Softwarehaus ERM]]