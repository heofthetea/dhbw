[[DDL]]

## Create a Database

```sql
CREATE DATABASE softwarehaus
    WITH
    TEMPLATE = template0
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'de_DE.utf8'
    LC_CTYPE = 'de_DE.utf8'
    LOCALE_PROVIDER = 'libc'
    TABLESPACE = pg_default
    CONNECTION LIMIT = -1
    IS_TEMPLATE = False;
```

- In PgAdmin: Create > Table, Parameter definieren unter Tab 'Definition'

## Create a Type
```sql
CREATE TYPE ...
```