[[Graph]], [[gerichteter Graph]], [[Gewichteter Graph]]

- Jede [[Kante]] hat zwei Werte:
	- flow value-> Wie viel fließt gerade durch die Kante?
	- capacity -> maximal möglicher flow?
- es muss gelten:
$$flow \leq capacity$$

> [!hint] Notated as `flow value/capacity`

![[Pasted image 20250605194833.png]]


## Maximum Flow
- gegeben: infinite [[Source Node]]
- Wie viel Flow können wir durch den [[Graph]] 'drücken', ohne dass eine [[Kante]] überlastet wird?

> [!info] Der Maximum Flow ist gefunden, wenn es keinen [[Augmenting Path]] mehr gibt.

