[[Prädikat]], [[SQL]]

```sql
... WHERE predicate;
```

## in
```sql
WHERE attribute IN <list>
```

## between
```sql
WHERE attribute BETWEEN lower AND upper;
```

> [!hint] lower and upper bounds are inclusive.

## like
- String Pattern matching; `%` ist ein Placeholder
```sql
WHERE attribute LIKE <string_pattern>
```