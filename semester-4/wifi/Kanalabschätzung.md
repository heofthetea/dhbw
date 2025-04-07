---
aliases:
  - Trainingssequenz
---

[[Mehrwegeausbreitung]], [[WLAN Präambel]] 

- Versuch, herauszufinden, was Sender geschickt hat????
- **Trainingssequenz**: 
	- erste 5 bits hinten anhängen, letzte 5 bits vorne anhängen - why? BRO IDFK

### Vorgehen
- ankommendes Signal wird mit der Trainingsfrequenz verglichen
	- Multiplizieren - Ergebnis der 16 bits aufaddieren -> ist immer 0, wenn Frequenzen nicht übereinstimmen
-  Wenn Ergebnis $=16$: abgeglichene Frequenz und Trainingsfrequenz sind gleich

> [!hint] Kann passieren aufgrund der [[Multiplikationsschaltung|Multiplikationsregeln]].

### Bilder
![[Pasted image 20250327092138.png]]
- Abgleichen:
![[Pasted image 20250327092151.png]]
