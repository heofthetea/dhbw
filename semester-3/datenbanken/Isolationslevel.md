> Welche Maße der [[SQL select|Read]]-Operationen gegen [[Konkurrierender Zugriff|konkurrierende Änderungen]] geschützt werden

1. **Read uncommitted** - Erlaubt [[Dirty Read]]
2. **Read committed** - Erlaubt [[Non-Repeatable Read]] ([[PostgreSQL|Postgres]] default)
3. **Repeatable Read** - Erlaubt [[Phantom Read]]
4. **Serializable** - Erlaubt kein paralleles Lesen. -> Verhindert alles


> [!hint] **Read uncommitted** verhindert **nur** [[Lost-Update Problem]].

> [!info] Jede Stufe verbietet das, was die Stufe drüber erlaubt.
> z.B.: **read uncommited** verbietet [[Dirty Read]].

```sql
set transaction isolation level <isolation level (name)>
set transaction isolation level READ COMMITTED; -- beischbiel
```

![[Pasted image 20250514150630.png]]