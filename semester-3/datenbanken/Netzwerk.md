[[gerichteter Graph]]



---
## Datenbanken
[[Datenbank]]

Owner-Member Struktur:
```mermaid
flowchart LR
	Owner --> Member
```


```mermaid
flowchart TB
	A --> 1
	B --> 2
	C --> 3
	A --> 2
	A --> 3
	B --> 1
	B --> 3
	C --> 2
```

Problem: Zu kompliziert für den average Otto

[[Graphdatenbank]]