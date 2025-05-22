> [[Unterabfragen|Sub-query]], der eine [[Relation]] $R$ mit $|R| \gt 1$ zurück gibt

[[Unterabfragen]]


- Operatoren, die in der Lage sind, mit [[Relation|Relationen]] als [[Array|Listen]] umzugehen

## ANY
- mindestens eine Übereinstimmung mit ausgabe der [[Unterabfragen|Unterabfrage]]

```sql
WHERE attr <predicate> ANY (SELECT ...)
```

## ALL
[[Allquantor]]

```sql
WHERE attr <predicate ALL (SELECT ...)
```
## EXISTS
[[Existenzquantor]]

- kein Vergleichsoperator -> prüft nur, ob [[Unterabfragen|Sub-query]] mindestens einen Wert zurückgibt

```sql
WHERE EXISTS (SELECT ...)
```
## IN

TRIVIAL