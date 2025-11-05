# ER Modell

- [[ERM]] (Entity Relationship Model) modelliert immer einen <span style="color:rgb(245, 154, 35)">Ausschnitt der realen Welt</span> 

## Bestandteile
- [[Entität]]: Ein [[Object]] der realen Welt
	- eigentlich: Entitätstyp (think: [[Java Class]])
	- Charakterisiert durch [[Attribut|Attribute]]
	- Besitzt ein [[Schlüsselattribut]], um jede Instanz eindeutig zu kennzeichnen
- [[Relationship]]: eine Beziehung zwischen [[Entität|Entitäten]]
	- [[Kardinalität]]: mit wie vielen $B$ steht mein $A$ in [[Relationship|Relation]]?
		- [[1-1 Relation]]
		- [[1-n Relationship]]
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
- Eine [[Entität]] ist eine [[Relation]] über die [[Kartesisches Produkt|Produktmenge]] aller Attributsdomänen
- [[Relationship]]: [[Relation]] über die [[Schlüsselattribut|Schlüsselattribute]] der [[Entität|Entitäten]]
	- Beide davon bilden zusammen den [[Schlüssel]] der [[Relation]]
	- Da [[1-n Relationship|1-n Relationen]] eine [[Abbildung]] sind, reicht das [[Urbild]] als [[Schlüssel]] aus um ein [[Tupel]] eindeutig zu identifizieren
		- kann als [[Fremdschlüssel]] in die [[Relation]] des [[Urbild|Urbilds]] gepackt werden

- [[Schema einer Relation]]: Das [[Tupel]] der Attributsnamen
	- ist statisch
- [[Instanz einer Relation]]: Eine [[Menge]] an konkreten [[Tupel|Tupeln]]
	- ist dynamisch


### Schlüsselvergabe bei Relationships
[[Relationship als Relation]]
> [!info] Grundprinzip: [[Relation|Relationen]] mit gleichem [[Schlüssel]] können zusammengefasst werden

- [[1-1 Beziehung als Relation]]: [[Min-Max Kardinalität]] ist ausschlaggebend:
	- Schlüsselvergabe so, dass möglichst wenige [[null]] Werte entstehen
	- $(1, 0) \leftrightarrow (1, 1)$: [[Fremdschlüssel]] in die [[Entität]], die **nicht** $0$ werden kann
	- ansonsten: egal lol
- [[Is-a Relationship als Relation]]: mehrere Optionen mit je trivialen vor- und Nachteilen
	1. Eine gigantische [[Relation]] mit allen möglichen [[Attribut|Attributen]] für Spezifikationen
	2. Nur die Spezifikationen als [[Relation]] modellieren, ohne eine gemeinsame 'Super-[[Entität]]'
	3. Alle Spezifikationen _und_ Super-[[Entität]] in [[Relation]] transformieren ([[Schlüssel|Primärschlüssel]] der Spezifikation ist [[Fremdschlüssel]] auf Super-Entität)
- [[Aggregat als Relation]]: einfach als [[1-n Relationship|1-n Beziehung]] modellieren
- [[n-stellige Relationship als Relation]]: 
	- $m:n:p$: ist Alle drei bilden den [[Schlüssel]]
	- $1:n:m$: ist [[Abbildung]] $A \times B \rightarrow C$ ==> $A$ und $B$ bilden [[Schlüssel]]
	- $1:1:n$: auch [[Abbildung]]; aber $C$ muss willkürlich aus beiden $1$-[[Entität|Entitäten]] modelliert werden

> [!hint] wahre $1:1:n$ Identität kann nur in [[DQL]] realisiert werden


### Von Relation zu Tabelle
- yeah I can't really say anything about that but this thing's useful so here you go
![[Pasted image 20241008154624.png]]
