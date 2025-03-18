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

## 1NF
> [!info] Eine [[Relation]] ist in [[1NF]], wenn jedes [[Attribut]] **atomar** ist und es keine **Mehrfachattribute** gibt.

- **Mehrfachattribut**: Dasselbe Attribut, dass zu Zwecken zusätzlichen Platzes mehrfach existiert
	- Beispiel: Telefonnumer 1, Telefonnumer 2, Telefonnumer ...

> [!warning] Problem: Es gibt Risiko für z.B. Änderungsanomalie.

## 2NF
> [!info] Eine [[Relation]] ist in [[2NF]], wenn sie in [[1NF]] ist und jedes Nichtschlüsselattribut nur [[Funktionale Abhängigkeit|funktional Abhängig]] vom **gesamten** [[Schlüssel|Primärschlüssel]] abhängig sind.

- besteht der [[Schlüssel|Primärschlüssel]] aus nur einem Element, ist die [[Relation]] automatisch in [[2NF]]

## 3NF
> [!info] Eine [[Relation]] ist in [[3NF]], wenn sie in [[2NF]] ist und kein [[Attribut]] [[transitiv]] von einem [[Schlüsselkandidat|Schlüsselkandidaten]] abhängig ist.


### Formal
Für jede [[Funktionale Abhängigkeit]] $X \rightarrow \alpha$ innerhalb der [[Relation]] $R$ muss eine der folgenden Bedingungen gelten gelten:
- $X$ ist [[Superschlüssel]] von $[R]$
- $a$ ist [[Primattribut|prim]]
- $a \in X$ ([[Triviale Funktionale Abhängigkeit]])

