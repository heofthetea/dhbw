[[Coupling]]

- hängt an [[OOP]] und [[Stateful|statefullness]]



#todo bild

- hängt B von A ab?
	- ja, obviously ([[Methode]] von $A$ wird aufgerufen)
- hängt A von B ab?
	- im ersten Blick nicht, weil: keine direkte Referenz
	- ABER: es gibt [[Shared State]] (person):
		- B kann Person [[Object]], die in A gespeichert ist, verändern

> [!hint] Dieses Problem kann ini [[Functional Programming]] nicht auftreten, weil es diese Form von [[Shared State]] nicht gibt.