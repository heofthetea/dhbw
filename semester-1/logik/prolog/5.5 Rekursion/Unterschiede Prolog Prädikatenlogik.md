_Prädikatenlogik_: AND und OR sind kommutativ
_Prolog_: 
- [[Goal|Goals]] auf dem [[Stack]] werden _von oben nach unten_ verarbeitet
- [[Wissensbank]] wird _von oben nach unten_ durchsucht
- child(X, Y), descend(Y, Z) und descend(Y, Z), child(X, Y) sind _logisch_ äquivalent, aber _prozedural_ unterschiedlich


#### Beispiel
![[Pasted image 20240130145252.png]]

##### nicht [[tail-rekursiv]]
![[Pasted image 20240130145444.png]]
