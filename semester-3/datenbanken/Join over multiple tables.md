[[Equi Join]]

> [!warning] Alle [[Attribut|Attribute]], die im [[SQL join]] verwendet werden, müssen auch im [[SQL select]] stehen!!

![[Übungen vorlesung 13#03]]

## Best Practices
- von innen heraus denken -> Aufdröseln der Query in kleine Unterprobleme ([[Divide and Conquer]])
- für [[n-m Relation]]:  [[Relationship]] als from, die [[Entität|Entitäten]] [[Inner Join|joinen]]
```sql
select ... from relationship
inner join entity_a using (id)
inner join entity_b using (id)
```