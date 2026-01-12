> kurz: "Postgres" - steht für "Post [[INGRES]]"

[[SQL]]

- open source
- , aber ähnlich leistungsfähig wie kommerziellen Datenbanken
- unterstützt diverse [[SQL]]-Standard



## Docker Compose for quick start
```yml
services:
  postgres:
    image: postgres:17.4-bookworm
    container_name: postgres
    # restart: unless-stopped
    ports:
      - "5432:5432"
    environment:
      POSTGRES_USER: postgres
      POSTGRES_PASSWORD: postgres
      POSTGRES_DATABASE: postgres
    volumes:
      - <project>_pgdata:/var/lib/postgresql/data

volumes:
  <project>_pgdata:

```
