[[DB_Kap01_Grundlagen_Stud.pdf]]

### Prüfungsleistung
- Klausur 60% im 4. Semester (60 min)
- Projekt: 40% in Semester 3 & 4 
	- we'll use [[PostgreSQL]]
- [[Tipps Klausur Datenbanken]]


## Fragenkatalog/Libraries
- [[Datenbanken Fragenkatalog]]
- [[Library Datenbanken 1]]
- [[Library Modellierung]]
- [[Library DB Normalisierung]]
## Projekt
[Link zu moodöl](https://elearning.dhbw-stuttgart.de/moodle/mod/folder/view.php?id=394622)
[[DB_Semesteraufgabe_Studierende.pdf]]
[[Datenbanken Projekt]]
[[DB Beispiel Anforderungsanalyse]]
[[DB Projektidee Ticketsystem]]
[[DB Projektidee Scotland Yard]]
[[Graphdatenbank]]

## 01 Grundlagen
[[Datenbank]]
[[Begrifflichkeit Datenbank]]

[[Datenbanksystem]]
[[DBMS]]

[[Hierarchisches Datenmodell]]
[[Netzwerk]]
[[Relationale Datenbank]]
- [[Integration RDB]]
- [[Operation RDB]]
- [[Katalog]]
- [[Benutzersicht]]
- [[Konsistenzüberwachung]]
- [[Zugriffskontrolle RDB]]
- [[Transaktion]]
- [[Synchronisation RDB]]
- [[Datensicherung RDB]]

[[Datenbankmodell]]
[[Datenbankschema]]
[[Datenbanksprache]]

[[Drei-Schichten-Modell]]

[[Datenbank under the hood]]
[[DB Entwurfsprozess]]
[[ACID]]

#### Übungen
[[Übung DB Entwurf Universität]]
### Psychological stuff lol
[[Von Zeichen zu Wissen]]
[[Information]]
[[Daten]]
[[partielle Schrift]]
[[Geschichte der Datenverarbeitung]]
[[Anforderungen an elektronische Informationsverarbeitung]]

---
## 02 Konzeptioneller Entwurf
[[DB_Kap02_Konzeptioneller DB-Entwurf_Stud.pdf]]

[[Beispiel Softwarehaus Miniwelt]]

[[DB Entwurfsprozess]]
- [[Anforderungsanalyse Datenbank]]
- [[ERM]]
	- [[Entität]]
	- [[Kardinalität]]
	- [[Relationship]]
		- [[n-stellige Relationship]]
		- [[Rekursive Relationship]]
		- [[Is-a Relationship]]
	- [[Attribut]]
		- [[Schlüsselattribut]]
		- [[Spezielle Attribute]]

[[Ablauf ERM Modellierung]]
- [[Sichtenkonsolidierung]]
[[Relationsrichtung eindeutig machen]]

[[Aggregation und Partitionierung]]
- [[Aggregation]]
	- [[Schwacher Entitätstyp]]
- [[Partitionierung]]

#### Übungen
[[Übung Modellierung Computer]]
[[Übung ERM]]
[[Übung ternäre Relation]]
- [[Übung Is-a Relationship]]

## 03 Logischer Entwurf
[[DB_Kap03_Logischer DB-Entwurf_Stud-1.pdf]]
[[Relation]]
[[Relationales Modell]]
- [[Beziehung als Relation]]
- [[Rekursive Beziehung als Relation]]
- [[1-1 Beziehung als Relation]]
	- [[Is-a Relationship als Relation]]
- [[Aggregat als Relation]]
- [[Ternäre Beziehung als Relation]]
[[Schema einer Relation]]
[[Instanz einer Relation]]
[[Schlüsselattribut]]
[[Relation zu Tabelle]]
[[ERM zu RM]]

[[Von ternärer zu binärer Beziehung]]
### Integrität
[[Referenzielle Integrität]]

### Übungen
[[Übung Anforderungen erstellen]]
[[Übung Relationen Softwarehaus]]
[[Übung ERM Bestellung]]

## 04 Normalisierung
- [[DB_Kap04_Normalisierung_Stud.pdf]]
- [[Normalisierung]]
	- [[1NF]]
	- [[2NF]]
	- [[3NF]]
		- [[Prüfen auf 3NF]]
		- [[Hüllentreue Zerlegung]]
	- [[BCNF]]
		- [[Gültige Zerlegung]]
		- [[Verlustlose Zerlegung]]
- [[Anomalie]]
- [[Projektion]]
- [[Funktionale Abhängigkeit]]
- [[Triviale Funktionale Abhängigkeit]]
	- [[Beispiel Funktionale Abhängigkeit]]
- [[Hülle einer funktionalen Abhängigkeit]]
	- [[Armstrong Axiome]]
- [[Superschlüssel]]
- [[Primattribut]]

#### Beispiele
- [[Beispiel Schlüsselkandidaten]]
- [[Übung 2NF]]
- [[Übung BCNF]]
- [[Übung Normalformen]]

### Gigantische Übung
[[Übung Tierpflege]]