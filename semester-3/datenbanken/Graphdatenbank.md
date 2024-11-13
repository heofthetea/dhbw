[[Graph]]

- [[Entität|Entitäten]] sind [[Knoten]] (Nodes)
	- besitzen ein Label (= Entitätstyp)
	- besitzen [[Attribut|Attribute]]
- [[Relationship|Relationships]] sind [[Kante|Kanten]]
	- idr. [[gerichteter Graph|gerichtet]]
	- hat auch Label, kann auch [[Attribut|Attribute]] haben

> [!hint] Indirekte [[Relationship|Relationships]] sind sehr schwer zu navigieren mit Relational Databases

- Query: Select a starting Node, then "simply chase memory pointers"
	- doesn't need to index for every new table in the join
- [[DQL]] (Cipher) basically looks like mermaid lol

![[Pasted image 20241026142025.png]]

---

[[Graphdatenbank vs Relationale Datenbank]]
[[Beispiel Graphdatenbank für Ausarbeitungen]]
