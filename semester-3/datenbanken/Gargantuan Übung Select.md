[[SQL select]], [[Abarbeitungsreihenfolge SELECT]], [[Projektion]], [[SQL Group By]], [[Aggregation]]

![[Pasted image 20250430135355.png]]

```sql
select skill, avg(gehalt)
from mitarbeiter
where eintrittsdatum > '01.01.2014'
group by skill
having skill is not null
order by avg(gehalt);
```