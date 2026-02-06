> Idee: Feedback des [[Pfad|Pfades]], welchen das [[Neural Network]] funktioniert, für Verbesserung nutzen



- [[Loss]] wird hinten berechnet
	- wird dann wieder durch die Schichten zurück propagiert
- Für jedes Gewicht:
	- wird angepasst, je nachdem wie stark es zu [[Loss]] beigetragen hat
![[Pasted image 20251205124222.png]]

> [!hint] Note dass zum Input Layer _nicht_ gedingst wird

