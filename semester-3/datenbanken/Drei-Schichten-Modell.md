- Konzept zum Datenbankentwurf

Analog zu [[MVC]]

> [!hint] **Motivation**: Abgrenzung von Prozessen und Aufgaben. Flexibilität durch Datenunabhängigkeit: Eine Ebene kann angepasst werden, ohne dass die tieferen Ebenen betroffen sind.

```mermaid
flowchart TD
	subgraph A[ ]
		direction LR
		extern[externe Ebene]
		konzeptionell[konzeptionelle Ebene]
		intern[interne Ebene]
	end
```

### externe Ebene
Benutzeroberfläche, [[Benutzersicht|Benutzersichten]], Schnittstellen

Erfolgt mithilfe von [[Benutzersicht|Benutzersichten]] 


### konzeptionelle Ebene
Tabellen und [[Relation|Beziehungen]]
[[Datenbankschema]]

### interne Ebene
Dateiorganisation und Zugriffspfade auf die Daten, Details der Datenspeicherung
- wie sind die Daten auf der Maschine abgespeichert?

