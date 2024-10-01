> [[Relationship]] zwischen mehr als zwei [[Entität|Entitäten]]

- [[Abbildung]] von zwei Entitäten `Projektleiter` und `Projekt` auf `Kunde`
![[Pasted image 20241001143433.png]]
$$R: E_{1} \times E_{2} \rightarrow E_{3}$$
- hier fungiert ein [[Tupel]] als Element der [[Karthesisches Produkt|Produktmenge]] als[[Schlüsselattribut]]
- Wenn es _drei_ $N$-[[Kardinalität|Kardinalitäten]] sind:
	- Keine [[Abbildung]] mehr, sondern [[Relation]]!!

--> Leserichtung: immer von _zwei_ auf eins
## Allgemein
$$R: E_{1} \times E_{2} \times ... \times E_{n} \rightarrow E_{m}$$

## Beispiel
[[Übung ERM]]
[[Übung ternäre Relation]]

# In [[Min-Max Kardinalität]]
gelesen: "wie oft kann $E_{x}$" an der Beziehung teilnehmen?

![[Pasted image 20241001144435.png]]


- Ein Projektleiter kann in beliebig vielen Relationen stehen
- Ein Kunde kann in beliebig vielen Relationen stehen
- Ein Projekt kann nur in _einer_ Relation stehen

> [!warning] Man liest "in die Beiehung rein", ausgehend von der Kardinalität