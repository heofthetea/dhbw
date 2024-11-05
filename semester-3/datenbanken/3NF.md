> Keine [[transitiv|transitiven]] [[Funktionale Abhängigkeit|Abhängigkeiten]] innerhalb einer [[Relation]]

Eine [[Relation]] ist in der [[3NF|3. Normalform]], wenn diese die [[2NF]] erfüllt und keine [[transitiv|transitiven]] [[Funktionale Abhängigkeit|Abhängigkeiten]] zwischen einem Nichtschlüsselattribut und einem [[Schlüsselkandidat|Schlüsselkandidaten]] besteht.

## Formal
Ein [[Schema einer Relation]] $[R]$ ist in [[3NF]], wenn für alle für $[R]$ geltende [[Funktionale Abhängigkeit|funktionale Abhängigkeiten]] der Form
$$\forall_{X \subset [R], a \in [R]}(X \rightarrow a)$$
**mindestens** eine der folgenden drei Bedingungen gilt:
1. $a \in X$ ([[Triviale Funktionale Abhängigkeit]])
2. $a$ ist [[Primattribut|prim]]
3. $X$ ist ein [[Superschlüssel]] von $[R]$ 

> [!hint] Kommt man von einem [[ERM]], sind in der Regel alle [[Relation|Relationen]] in [[3NF]].
## Beispiel
![[Pasted image 20241105150833.png]]
1. ist in [[2NF]]: Weil Primärschlüssel mit Mächtigkeit von $1$
2. [[Funktionale Abhängigkeit|FAs]] aufstellen:[^1]

$$F: \begin{cases}ProjNr \rightarrow [R] \\ PersNr \rightarrow \set{Vorname, Nachname}\end{cases}$$

3. [[Schlüsselkandidat|Schlüsselkandidaten]] definieren: $ProjNr$ (ist logischerweise auch [[Schlüssel]])
4. Prüfen auf [[3NF]]

> [!warning] Auch [[Armstrong Axiome]] mit in Betracht beziehen!!!



#### Prüfen auf 3NF
1. Zerlege $F$ in einzelne [[Funktionale Abhängigkeit|Abhängigkeiten]] (durch [[Armstrong Axiome|Interferenzregel]] 4: Dekomposition)
2. Prüfe ob gilt: $X$ ist [[Superschlüssel]] **oder** $\alpha$ ist [[Primattribut|prim]] (schicke Tabelle) (technically $\alpha \in X$ müsste auch überprüft werden, aber ist hier aufgrund Trivialität weg gelassenzz)

| $X$    | $\alpha$ | $X$ ist Superschlüssel | $\alpha$ ist [[Primattribut\|prim]] |
| ------ | -------- | ---------------------- | ----------------------------------- |
| ProjNr | Bez      | ✅                      | ❌                                   |
|        | Beginn   | ✅                      | ❌                                   |
| PersNr | VN       | ❌                      | ❌                                   |
|        | NN       | ❌                      | ❌                                   |
=> Die zweite [[Funktionale Abhängigkeit|FA]] erfüllt die [[3NF]] **nicht** 



[^1]: In der Klausur muss man hier nur die elementaren [[Menge]] basteln; Die Hülle ist nicht erfordert!