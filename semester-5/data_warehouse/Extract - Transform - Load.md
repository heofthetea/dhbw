---
aliases:
  - ETL
---
[[Event-driven Architecture]]

- Daten aus [[Operative System]]s extrahieren
- Daten transformieren in [[Multi-Dimensional Data Model|MDDM]]
	- auch: [[Sichtenkonsolidierung|Konsolidierung]] verschiedener Daten, [[Surrogate Key]]
- Daten ins [[Staging]] der [[Architektur Data Warehouse|DWH Architektur]]
![[Pasted image 20251030082032.png]]


## ELT
> Alternative, die Diskussion geht schon länger

- erst aus [[Operative System]] so schnell wie möglich in das [[Multi-Dimensional Data Model|MDDM]] [[ETL Load|laden]]
	- Transformieren erst später mithilfe der Tools des [[DBMS]]