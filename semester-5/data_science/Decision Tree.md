> finale Entscheidung durch successive binäre Entscheidungen
- [[Klassifikation]] und [[Regression]]
- [[Attribut|Attribute]] werden [[Aufteilen von Attributen|aufgeteilt]] in mögliche [[Merkmal|Merkmale]]
	- Beispiel: "Geschlecht" => "männlich/weiblich"
	- "Qualität" einer Spaltung wird bewertet durch [[Entropie]]/[[Gini Index]]
- Jeder [[Knoten]] stellt eine neue Entscheidung dar
- Jedes [[Blatt]] ist eine [[Klasse]]/Vorhersage
- Für neuen Datenpunkt: [[Baum]] durchlaufen

> [!warning] zentrales Problem: Die meisten [[Attribut|Attribute]] sind nicht gut teilbar

> [!hint]- sind immer ein [[Binary Tree|Binärbaum]]
> - $n$-way Entscheidungen können immer durch [[Associativity|Assoziativität]] auf mehrere $2$-way Entscheidungen zurück geführt werden:
> ![[Pasted image 20251108160342.png]]


![[Pasted image 20251108160004.png|300]]



- [[Hyperparameter]]:
	- Tiefe des Baums
	- Limit der [[Entropie]]
	- etc

## Algorithmus
- wir [[Aufteilen von Attributen|spalten]] so lange Attribute auf, bis wir zufrieden sind oder es nicht mehr geht
- Wir schmeißen einen neuen Datenpunkt rein und traversieren den baum entsprechend

## Beispiel ML
#todo: Aus der Folie mit Grenzen eintragen
- [[Entscheidungsgrenze]] wird gebaut anhand der [[Blatt|Blätter]]
> [!hint] Entscheidungsgrenzen können aufgrund der binärität immer nur orthogonal gebastelt werden!