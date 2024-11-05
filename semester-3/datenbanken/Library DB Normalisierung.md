## Projektion
- Eine [[Projektion]] ist basically ein [[SQL select]] statement auf [[Relation|Relationsebene]]:
	- sei $[R'] \subset [R]$ (sprich: $R'$ ist eine Auswahl aus allen [[Attribut|Attributen]] des [[Schema einer Relation|Schemas]] von $R$)
	- Dann liefert $\Pi_{[R']}(R)$ alle Einträge der [[Instanz einer Relation|Instanz]] $R$, betrachtet aber nur die [[Attribut|Attribute]] $[R']$ 

## Funktionale Abhängigkeit
[[Funktionale Abhängigkeit]]
- Es muss eine [[Abbildung]] $f: \Pi_{X}(R) \rightarrow \Pi_{Y}(R)$ geben, die für **[[Allquantor|alle]]** möglichen [[Instanz einer Relation|Instanzen]] von $R$ gültig ist
	- Wörtlich: Die Werte des [[Attribut|Attributs]] $X$ bestimmen die Werte von $Y$
- [[Triviale Funktionale Abhängigkeit]]: Jedes [[Attribut]] ist immer [[Funktionale Abhängigkeit|funktional abhängig]] von
	1. sich selbst ($A \rightarrow A$)
	2. einer [[Obermenge]] von sich selbst ($\set{A, B, C} \rightarrow \set{A, B}$)
- [[Hülle einer funktionalen Abhängigkeit]]: Alle [[Funktionale Abhängigkeit|Funktionalen Abhängigkeiten]] eines Schemas, die sich aus den [[Armstrong Axiome|Interferenzregeln]] herleiten lassen

