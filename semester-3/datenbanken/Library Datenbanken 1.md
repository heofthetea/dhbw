## Definition
- [[Datenbank]]: logisch zusammengehörender, strukturierter Datenbestand
	- verwaltet von [[DBMS]]: Datenbank-Management-System
- [[Datenbankmodell]]: Was ist diei Struktur der [[Daten]]?
	- [[Relationale Datenbank]]: Daten organisiert in [[Relation|Relationen]]
	- [[Netzwerk]]: Daten strukturiert in [[Graph]] ([[Graphdatenbank]])
	- [[Hierarchisches Datenmodell]]: [[Baum|Baum-Struktur]], vgl. [[OOP]]
- [[Datenbankschema]]: Welche Daten werden gespeichert?
	- Gibt gespeicherten [[Daten]] die [[Semantik]]
	- ist Teil des [[Katalog]]
- [[Datenbanksprache]]: Wie kommuniziere ich mit dem [[DBMS]]?
	- [[DDL]]: Data Definition Language (definiert [[Datenbankschema]])
	- [[DML]]: Data Modeling Language (einfügen, ändern + löschen von Datensätzen)
	- [[DQL]]: Data Query Language (Abfragen auf Datenbestand)

### Codd's Regeln
sind Anforderungen an [[DBMS|Datenbankmanagementsysteme]] für [[Relationale Datenbank|Relationale Datenbanken]]
1. [[Integration RDB]]: Alle Daten sind einheitlich, es gibt keine [[Redundanz]]
2. [[Operation RDB]]: Man muss Daten nicht nur ablegen können, sondern auch verwalten
3. [[Katalog]]: Abgelegte Daten brauchen auch [[Semantik]], um [[Information]] draus zu machen
4. [[Benutzersicht]]: Für verschiedene Nutzer sind verschiedene Teile der Daten relevant
5. [[Konsistenzüberwachung]]: Logisch korrekter Zustand der Daten ist immer gewährleistet
6. [[Zugriffskontrolle RDB]]: Verschiedene Nutzer _dürfen_ nur Teile der Daten sehen
7. [[Transaktion]]: Vor und nach jeder [[Operation RDB|Operation]] liegt ein logisch korrekter Stand vor
8. [[Synchronisation RDB]]: Umgang mit vielen gleichzeitigen Anfragen, [[Lost-Update Problem]]
9. [[Datensicherung RDB]]: Nach Crash sollten Daten wiederherstellbar sein

> [!hint] ein [[DBMS]] muss nicht alle Anforderungen erfüllen, um als relational zu gelten

