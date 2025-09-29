[[PostgreSQL]], [[dhlgres-Dockerfile]], [[Mail an Stark Postgres locales]], [[psql]]


### get encoding for all tables
```sql
select datname, datcollate from pg_database;
```