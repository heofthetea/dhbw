[[Pumping Lemma für Kontextfreie Sprachen]]

![[Pasted image 20241018111223.png]]

### 1. Versuch
- Wort wird so klein wie möglich gewählt
- fails miserably lol
	- weil: 1. $h$-Segment ist im $a$-Block, und 2. Segment ist im _zweiten_ $a$-Block
	- man pumpt immer nur $a$'s auf lol

### 2. Versuch
1. Fall: wenn man $a^{k}b^{k}$ nach Zerlegung aufpumpt, rutschen $b$s in die zweite Worthälfte (man macht die erste Hälfte länger)
2. analog ($a$s rutschen in erste Worthälfte)
3. $i + j \geq 1$ durch Bedingung $|vx| \neq \epsilon$ und $i + j \leq k$ durch andere Bedingung
