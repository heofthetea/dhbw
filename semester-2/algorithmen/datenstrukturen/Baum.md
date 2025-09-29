---
aliases:
  - Tree
---
[[Wurzel]], [[Blatt]]

- ist ein [[verbundener Graph|verbundener]], [[Zyklus|zyklenfreier]] [[Graph]]
- Die Anzahl der [[Kante|Knanten]] des längsten [[Pfad|Pfades]] ist die <span style="color:rgb(245, 154, 35)">Tiefe</span> des Baums
> [!hint] Ein [[Baum]], der nur aus einer [[Wurzel]] besteht, hat die Tiefe $0$.

![[Pasted image 20250414165905.png]]
## Rekursive Definition (witziger)
1. Ein [[Baum]] ist entweder [[Leere Menge|leer]] oder besteht aus einer [[Wurzel]] mit $0$ oder mehr Teilbäumen
2. Jeder Teilbaum ist ein [[Baum]].
3. Die [[Wurzel]] jedes Teilbaums ist mit einer [[Kante]] mit der [[Wurzel]] des übergeordneten [[Baum|Baums]] verbunden.


