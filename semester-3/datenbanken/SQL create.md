[[DDL]]


## Create a Database

```sql
CREATE DATABASE "Softwarehaus"
    WITH
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'en_US.utf8'
    LC_CTYPE = 'en_US.utf8'
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