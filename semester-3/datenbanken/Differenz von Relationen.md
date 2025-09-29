[[Relation]], [[Operationen auf Mengen]], [[Instanz einer Relation]]

$$R' := R_{1} - R_{2} = R_{1}\textbackslash R_{2}$$
$$[R'] = [R_{1}] = [R_{2}]$$

- entfernt alle [[Tupel]] aus $R_{1}$, die auch in $R_{2}$ sind.

> [!warning] Auch hier müssen die [[Schema einer Relation|Schemata]] gleich sein!

## SQL
```sql
SELECT vorname from mitarbeiter
EXCEPT
select vorname from kunde;
```

> [!hint] Hier wählt `ALL` halt einfach wieder Werte doppelt aus, die doppelt existieren.
## Beispiel
![[Pasted image 20250416134712.png]]