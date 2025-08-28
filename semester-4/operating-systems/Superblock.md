[[ext4]], [[Hierarchical Filesystem]]

- benötigt idr 3 Sektoren (1024 Byte)
- speichert:
	- Größe & Anzahl der Blöcke
	- Anzahl der [[Inode|Inodes]]
	- Verweis auf die [[Inode]]-Baumstruktur -> die liegt apparently woanders
	- Letzter [[Mount]]-Vorgang
	- Identifikationsnummer
	- ...

> [!hint] Ist redundant an mehreren Stellen abgelegt.