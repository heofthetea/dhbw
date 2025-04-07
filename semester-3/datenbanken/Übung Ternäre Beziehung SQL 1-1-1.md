[[n-stellige Relationship als Relation]]

```sql
CREATE TABLE betreuen (
	Prof_Nr int,
	Themen_Nr int,
	Assistenten_Nr int,

	PRIMARY KEY (Prof_Nr, Themen_Nr),
	UNIQUE (Assistenten_Nr)
)
```

> [!hint] Die Lässt sich auflösen.

