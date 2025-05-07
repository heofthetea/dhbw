> Mehrere [[Tupel]] aufgrund eines gleichen Werts in ein [[Tupel]] zusammenfassen

[[RelAlg Aggregation]], [[SQL select]]

- Benötigt eine Aggregatisfunktion -> [[Aggregatsfunktion]]


> [!warning] Jeder Teil der [[Projektion]] muss in einer GROUP BY oder Aggregationsfunktion verwendet werden, kann sonst nicht angezeigt werden!!

## Beispiel
> könnte keinem neuen [[Tupel]] zugeordnet werden

```sql
SELECT Skill, Count(*), AVG(Gehalt)
from Mitarbeiter
group by skill
order by AVG(Gehalt) DESC;
```


![[Pasted image 20250430134029.png]]