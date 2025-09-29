[[Relation]], [[Abbildung]]
$$\sigma_{P}(R): R \rightarrow R';\ \ \ \ \ R' \subset R$$
$$P: [R] \longrightarrow \mathbb{B}$$


Aus der [[Instanz einer Relation]] $R$ wird eine [[Menge]] an [[Tupel|Tupeln]] ausgewählt, die einer bestimmten [[Prädikat]] entsprechen.

> [!hint] $R' \subset R$ => Bei der [[Selektion]] kommen keine neuen [[Tupel]] hinzu.

## Das Prädikat
- Definiert auf dem [[Schema einer Relation|Schema]] von $R$ und ist eine Formel
- Erlaubte Operatoren:
	- [[Attribut|Attributnamen]] der Argumentrelation $R$ oder [[Konstante|Konstanten]]
	- [[Vergleichsprädikate|Vergleichsoperatoren]]
	- [[Operatoren auf Booleans]] 

## Beispiel
$$\sigma_{geschlecht='w' \land skill='pr}(Mitarbeiter)$$

