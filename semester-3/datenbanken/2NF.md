> Alle [[Attribut|Attribute]] sind **nur** vom **gesamten** (zusammengesetzten) [[Schlüssel|Primärschlüssel]] [[Funktionale Abhängigkeit|funktional abhängig]].

> [!def] Ein **Nichtschlüsselattribut** ist ein [[Attribut]], das _kein_ [[Schlüsselkandidat]] ist.

Eine [[Relation]] erfüllt die [[2NF|zweite Normalform]], wenn diese sich in der [[1NF|1NF]] befindet und alle Nichtschlüsselattribute nur durch den **gesamten**[^1] [[Schlüssel|Primärschlüssel]] festgelegt werden. Sie sind **vollfunktional** vom gesamten [[Schlüssel|Primärschlüssel]] abhängig.

> [!hint] Jede [[Relation]], bei der der [[Schlüssel|Primärschlüssel]] aus nur **einem** [[Attribut]] besteht, ist automatisch in [[2NF]].

## Beispiel
![[Pasted image 20241105144348.png]]

- **Nichtschlüsselattribute**: Vorname, Nachname, Bezeichnung, Stunden

> [!warning] Hier sind **nur** die `Geleistente_Std` vom gesamten Schlüssel abhängig => Vor-/Nachname sind nur vom Teilschlüssel `Pers-Nr` abhängig.



[^1]: Dies setzt vorraus, dass der [[Schlüssel|Primärschlüssel]] sich aus mehreren [[Attribut|Attributen]] zusammensetzt.