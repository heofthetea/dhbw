> Monitoring der [[Operative System|Operativen Data Storages]]

- Erkennen, wenn Änderungen passieren -> irgendwo speichern für die [[Extract - Transform - Load|ETL]] pipeline

> [!hint] [[Transaktion|Transaktionen]] (mit [[Journaling]] helfen ziemlich bei sowas)

## Ansätze
- [[Monitoring eines DBMS]] -> im Datenmodell monitoring
- [[Monitoring von Operativen Applications]] -> Die Applications kontrollieren Logging
## Operationen tracken
- Ein [[Datensatz]] kann sich durch mehrere Operationen ändern:
	- UPDATE des Datensatz
	- ein DELETE & ein INSERT

> [!warning] Endergebnis ist gleich -> aber für [[Data Warehouse]] ist die Historie auch relevant!

