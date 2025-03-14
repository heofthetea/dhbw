[[Is-a Relationship]]

> [!warning] Keine Abbildungsvorschrift im [[Relationales Modell|RM]] - mehrere Möglichkeiten

## 1. Squashen
- Alle Spezialisierungen werden in der gemeinsamen [[Relation]] zusammengehängt
- neues [[Attribut]] "...-Art"
- die weiteren Attribute werden einfach in die [[Relation]] angehängt
Beispiel

> [!hint] Es gibt trotzdem nen Haufen [[null]]-Werte - defeats the entire purpose of those Relationships

> [!info]- Vorteil: Wenige [[Relation|Relationen]] und schneller Zugriff (kein [[SQL join]] Statement notwendig)
> Anwendung: Abfragen sind zu langsam bei großen Datenmengen --> Tabellen squashen macht das schneller
## 2. Selber Primärschlüssel
- Jede Spezialisierung bekommt eine eigene [[Relation]]
	- [[Schlüssel|Schlüsselattribut]] ist _nur_ der [[Fremdschlüssel]], der auf den [[Schlüssel]] der gemeinsamen [[Relation]] abbildet
	- enthält keine Redundanz und ist schön ordentlich

$[PR-MA] = \set{[\underline{Pers-Nr \uparrow}, Std-Satz, PR-Erfahrung]}$ 

> [!info] Nachteil: Macht [[SQL join]] **mandatory**, um gesamte Information zu bekommen

![[Pasted image 20241015140959.png]]
## 3. Redundanz
- Jede Spezialisierung erhält eine eigene [[Relation]] mit denselben [[Attribut|Attributen]]
	- gemeinsame [[Relation]] wird geyeeted
	- führt zu [[Redundanz]] der gemeinsamen Daten
- Modellierung geht verloren

> [!warning] Die allgemeine [[Relation]] bleibt erhalten! Für [[Tupel]], die zu keiner der Spezifikationen conformen.

> [!info] Vorteil: wieder kein Join, **aber** auch keine überflüssigen null-Werte.

