> [[Linux]] CLI für [[PostgreSQL]]

```bash
psql -h localhost -p 5432 -U postgres <database_name>
```

## Commands
- `\l` lists databases
- `\d <table_name>` gives table overview similar to `show columns from` in mariadb
	- `\d` list all tables  in current database
- `\c <database_name>` changes Database


### Drop all Databases
- done by dropping and re-instating the schema

```sql
DROP SCHEMA public CASCADE;
CREATE SCHEMA public;

GRANT ALL ON SCHEMA public TO postgres;
GRANT ALL ON SCHEMA public TO public;
```