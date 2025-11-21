---
aliases:
  - Multidimensional Expressions
---
> [[DQL]] für [[Multi-Dimensional Data Model|MDDM]] (und andere [[OLAP]] Modellen)


- [[SQL]]-like Syntax für [[Selektion]]
- Abfragen liefern wieder einen [[MDDM Cube|Cube]] zurück:
	- Kanten sind Achsen
	- ersten drei Achsen: `columns`, `rows`, und `pages`

## Zusätzliche [[Type|Types]]
- Scalar - [[String]] oder Zahl
- Dimension element (character/string darstellung)
- Level
- Member
- Tuple
	- Liefert eine [[Slice]] (oder eine Zelle, wenn alles spezifizierrt)
- Sets
	- geordnete Sammlung von Tuplen
