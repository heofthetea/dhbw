# ER Modell

- [[ERM]] (Entity Relationship Model) modelliert immer einen <span style="color:rgb(245, 154, 35)">Ausschnitt der realen Welt</span> 

## Bestandteile
- [[Entität]]: Ein [[Object]] der realen Welt
	- eigentlich: Entitätstyp (think: [[Class]])
	- Charakterisiert durch [[Attribut|Attribute]]
	- Besitzt ein [[Schlüsselattribut]], um jede Instanz eindeutig zu kennzeichnen
- [[Relationship]]: eine Beziehung zwischen [[Entität|Entitäten]]
	- [[Kardinalität]]: mit wie vielen $B$ steht mein $A$ in [[Relationship|Relation]]?
		- [[1-1 Relation]]
		- [[1-n Relation]]
			- $1$ $A$ kann mit $n$ $B$'s in [[Relationship|Relation]] stehen
		- [[n-m Relation]]
	- [[Min-Max Kardinalität]]: 
	- [[n-stellige Relationship]] (in Vorlesung nur ternäre Relationships)
		- [[Kardinalität|Chen-Notation]]: Kann ich von $A$ und $B$ eindeutig auf $C$ schließen?
			- <span style="color:rgb(245, 154, 35)">ja</span>: $C$ erhält [[Kardinalität]] $1$ (Relation ist [[Abbildung]]: $A \times B \rightarrow C$)
			- <span style="color:rgb(245, 154, 35)">nein</span>: $C$ erhält [[Kardinalität]] $N$
		- [[Min-Max Kardinalität|Min-Max Notation]]: Wie oft kann mein $A$ maximal an meiner [[Relationship|Beziehung]] teilnehmen? 
### Besondere Relationships
- [[Is-a Relationship]]: [[1-1 Relation]], bei der einer [[Entität]] weitere [[Attribut|Attribute]] für eine Sonderrolle gegeben werden
	- für "$A$ is a $B$":
		- Realisiert, indem man zu [[Schlüsselattribut]] von $A$ noch den [[Schlüsselattribut|Primärschlüssel]] von $B$ hinzufügt
- [[Aggregation]]: $A$ ist Teil von $B$ und kann <span style="color:rgb(245, 154, 35)">nicht</span> eigenständig existieren
	- $A$ heißt [[Schwacher Entitätstyp]]
	- wird durch Doppelstrich um [[Entität|Entitäts]]-Kasten und [[Relationship]] und Linie gekennzeichnet
- [[Partitioning]]: mehrere $A$ werden unter $B$ zusammen gefasst - hierbei ist $A$ alleine überlebensfähig

# Logischer Entwurf für [[Relationales Modell|RM]] 
> [!hint] Alles ist eine [[Relation]]

- Jedes [[Attribut]] wird durch eine [[Menge]] der möglichen Werte beschrieben --> <span style="color:rgb(245, 154, 35)">Domäne</span> 
	- Auch hier wird der [[Schlüsselattribut|Primärschlüssel]] unterstrichen
- Eine [[Entität]] ist eine [[Relation]] über die [[Karthesisches Produkt|Produktmenge]] aller Attributsdomänen
- [[Relationship]]: [[Relation]] über die [[Schlüsselattribut|Schlüsselattribute]] der [[Entität|Entitäten]]
	- Beide davon bilden zusammen den [[Schlüssel]] der [[Relation]]
	- Da [[1-n Relation|1-n Relationen]] eine [[Abbildung]] sind, reicht das [[Urbild]] als [[Schlüssel]] aus 
		- kann als [[Fremdschlüssel]] in die [[Relation]] des [[Urbild|Urbilds]] gepackt werden

> [!warning] [[Relationship|Relationships]] können nur **binär** dargestellt werden - was man mit [[n-stellige Relationship|n-stelligen]] macht lernen wir hoffentlich noch lol
> 

- [[Schema einer Relation]]: Like... die Namen?
	- ist statisch
- [[Instanz einer Relation]]: Alle _aktuellen_ Elemente der [[Relation]]
	- ist dynamisch

### grafisch
![[Pasted image 20241008154624.png]]
