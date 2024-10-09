- [[ERM]] (Entity Relationship Model) modelliert immer einen <span style="color:rgb(245, 154, 35)">Ausschnitt der realen Welt</span> 

## Bestandteile
- [[Entität]]: Ein [[Object]] der realen Welt
	- eigentlich: Entitätstyp (think: [[Class]])
	- Charakterisiert durch [[Attribut|Attribute]]
	- Besitzt ein [[Schlüsselattribut]], um jede Instanz eindeutig zu kennzeichnen
- [[Relationship]]: eine Beziehung zwischen [[Entität|Entitäten]]
	- [[Kardinalität]]: wie viele distinct [[Object|Objekte]] können pro [[Entität]] an der [[Relationship|Beziehung]] teilnehmen?
		- [[1-1 Relation]]
		- [[1-n Relation]]
		- [[n-m Relation]]
	- [[n-stellige Relationship]] (in Vorlesung nur ternäre Relationships)
		- [[Kardinalität|Chen-Notation]]: Kann ich von $A$ und $B$ eindeutig auf $C$ schließen?
			- ja: $C$ enthält [[Kardinalität]] $1$ (Relation ist [[Abbildung]]: $A \times B \rightarrow C$)
			- nein: $C$ enthält [[Kardinalität]] $N$
		- [[Min-Max Kardinalität|Min-Max Notation]]: Wie oft kann mein $A$ maximal an meiner [[Relationship|Beziehung]] teilnehmen? 