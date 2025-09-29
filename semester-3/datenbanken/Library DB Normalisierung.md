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

### [[Armstrong Axiome|Interferenzregeln]]
1. $AB \rightarrow A$ ([[Triviale Funktionale Abhängigkeit]])
2. 
#todo
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

### Prüfung auf [[3NF]]
1. Zerlege [[Funktionale Abhängigkeit|FAs]] in einzelne Abhängigkeiten der Form $X \rightarrow \alpha$

## BCNF
- [[BCNF]]
- [[3NF]], bei der jedes $X$ jeder [[Funktionale Abhängigkeit|FA]] $X \rightarrow \alpha$ ein [[Superschlüssel]] ist
- oder: es gibt keine überlappende [[Schlüsselkandidat|Schlüsselkandidaten]]: $\forall_{m, n}k_{m} \cap k_{n} =\varnothing$ 

=> Bedingung $\alpha$ ist [[Primattribut|prim]] ist nicht mehr ausreichend

> [!hint] Ist die erste Normalform, die [[Anomalie|Anomalien]] theoretisch ausschließt.


## Zerlegungen
- Aufteilen einer [[Relation]] in mehrere neue [[Relation|Relationen]], um [[Normalisierung]] eines gewissen Grades sicherzustellen
### Gültigkeit
- Eine Zerlegung ist [[Gültige Zerlegung|gültig]], wenn bei der Zerlegung keine neuen [[Attribut|Attribute]] hinzukommen, oder verloren gehen.

$$[R] = [R_{1}] \cup [R_{2}]$$

### [[Verlustlose Zerlegung]]
- [[Verlustlose Zerlegung]]
- Für jede [[Instanz einer Relation|Instanz]] der ursprünglichen [[Relation]] $R$ muss gelten, dass ein [[Natural Join]] von $R_{1}$ und $R_{2}$ genau diese Instanz liefern:
$$R = R_{1} \Join R_{2}$$
#### Prüfung
- Der [[Fremdschlüssel]] (= [[Operationen auf Mengen#Intersection|Durchschnitt]] der Schemata) muss auf eine der beiden Relationen [[Abbildung|abbilden]]:


$$[R_{1}] \cap [R_{2}] \rightarrow [R_{1}] \in F^{+}$$
$$\lor\quad [R_{1}] \cap [R_{2}] \rightarrow [R_{2}] \in F^{+}$$

### Abhängigkeitsbewahrende/[[Hüllentreue Zerlegung]]
- Eine Zerlegung ist [[Hüllentreue Zerlegung|hüllentreu]], wenn alle [[Funktionale Abhängigkeit|funktionalen Abhängigkeiten]] bewahrt werden


#### Prüfung
- jede [[Funktionale Abhängigkeit]] in $R$ muss in mindestens einer der neuen [[Relation|Relationen]] existieren
$$\left(\bigcup\limits_{i=0}^{n}[R_{i}]\right)^{+} = F+ $$
