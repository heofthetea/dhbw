---
aliases:
  - RDBMS als ETL
---
[[Extract - Transform - Load|ETL]]

> [!question] Welche Kriterien sind wichtig für ein [[Extract - Transform - Load|ETL]] tool?

- sollte [[Determinismus|deterministisch]] sein -> derselbe Ausgangsstand der Daten sollte immmer zu den selben Daten führen
- performant (schnelle Operationen)
- keine Zeitlichen löcher (aka keine Operationen ausgelassen)
- Automatische Konsolidierung
- Es gibt [[Metadata]] zu jedem Wert (wie er zusammengesetzt wurde)
- Man sollte den ganzen Prozess abbilden können (definieren, wann was wo abgeholt wird)


## Wie könnte es mit einer [[Relationale Datenbank]] getan werden?
- Mit [[SQL]] kann man recht viel bzgl Organisierung machen
- Wie kommen die Daten in die Datenbank?
	- ggf. mit Flat File (wie CSV) -> und dann load
	- Federation zu anderen Datenbanken
- dann kann ein [[DBMS]] einfach auf ein anderes zugreifen
- wtf

> [!hint] ist an sich relativ beliebt

### Vorteile
- übliche Vorteile einer [[Relationale Datenbank]]
- hat feste Strukturen
- Billiger als externe Systeme
- Sehr robust
- bekanntes Umfeld
- gute Skalierbarkeit -> Performance

### Nachteile
- Datenbank nicht gut für File Storage
- Keine integrierte Prozess-Engine -> keine möglichkeit, den Ablauf grafisch zu modellieren
- Anschlussmöglichkeiten sind limitiert (z.B. kein SAP-Connector)
- Bringt kein System für [[Metadata|Metadaten]] eines SQL Skripts (-> externe Dokumentation)

