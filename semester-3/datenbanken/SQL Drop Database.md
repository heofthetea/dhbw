[[PostgreSQL]]
### Safe drop
```sql
drop database my_db;
```

### force delete
- just gives a shit about existing sessions to the database
- I like it

```sql
drop database my_db with (force);
```