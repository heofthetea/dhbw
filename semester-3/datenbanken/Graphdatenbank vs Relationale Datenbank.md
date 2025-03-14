[[Relationale Datenbank]]
- eine [[Entität]] ist eine Zeile in irgendeiner Tabelle
- Verbindungen von Entitäten mit [[Constraint|Constraints]] 
	- multi-level [[SQL join|joins]]
	- rigid, nicht sehr flexibel
	- oftmals Denormalisierung ist nötig für Effizienz
- Schema benötigt Übersetzungen von Konzepten aus der realen Welt
	- bestes Beispiel: [[ERM]]
- They're good at answering questions you already knew
	- because you need to define everything beforehand
	- Example for unanswerable question: "I want to know ho many people who bought a toeaster, live in kansas, and have a criminal record, used the coupon in yesterday's paper?"

---
[[Graphdatenbank]]
- ein [[Graph]] ist einfach
	- [[Entität]] ist ein [[Knoten]]
		- Each Node has a Label to tell you what [[Entität|Entitytype]] it is
	- Relationships are made through [[Kante|Edges]] 
		- each also has a label and attributes
- is strong when the "meaning is in the relationships"
	- especially with indirect, multi-level relationships
- You can add new relationships if you want to
- 