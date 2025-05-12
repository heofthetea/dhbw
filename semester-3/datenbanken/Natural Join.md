> [[Equi Join]], das gleichnamige [[Attribut|Attribute]] automatisch verbindet

$$R' := R_{1} \Join R_{2}$$
$$[R'] = [R_{1}] \cup [R_{2}]$$
> [!warning] Das join Attribut kommt natürlich nur einmal, nicht doppelt in $[R']$ vor. Dies ist impliziert durch die Bedingung, unter der der Join möglich ist.


- kombiniert alle [[Tupel]], falls es übereinstimmende [[Attribut]] gibt
- macht dann einen [[Equi Join]] für dieses Attribut

$$\Pi_{[R_{1} \cup R_{2}]} (\sigma_{P}(R_{1} \times R_{2}))$$

## SQL
> [!hint] Am nützlichsten für [[Is-a Relationship]].

> [!info] Wird für [[SQL View|Views]] von [[DBMS]] intern in einen [[Equi Join]] übersetzt.

```sql
SELECT *
FROM table1
NATURAL JOIN table2;
```


### Beispiel
- Komplette Daten der Projektleiter anzeigen lassen

```sql
select * from Mitarbeiter NATURAL JOIN Projektleiter;
```
