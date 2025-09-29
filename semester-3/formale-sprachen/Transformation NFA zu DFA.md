## Ansatz
- jeder Zustand des [[DFA]] $det(A)$ repräsentiert eine [[Menge]] $M$ von Zuständen von $A$
- Anstatt von $Q$ zu $Q'$ mehrere übergänge zu haben, hat man verschiedene deterministische Übergänge von $Q$ zu einer _Menge_ an Zuständen


## Algorithmus
### Hilfsfunktionen
1. [[epsilon-Abschluss]]
2. [[mögliche Folgezustände eines einzelnen Zustand]]
3. [[mögliche Folgezustände einer Zustandsmenge]]


### In Praxis
[[NFA zu DFA]]
1. [[epsilon-Abschluss]] von [[Startzustand]] berechnen: $S_{0} = ec(q_{0})$
2. [[mögliche Folgezustände einer Zustandsmenge|mögliche Folgezustände der Menge]] $S_{0}$ für alle Symbole $c \in \Sigma$ berechnen
	1. für jede _neue_ Menge, die entsteht, einen neuen Zustand $S_{i}$ anlegen
3. Alle [[Zustand|Zustandsmengen]], die einen [[Endzustand]] $f \in F$ beinhalten, werden zu einem [[Endzustand]] für $det(A)$

> [!warning]- In Schritt $2.$ den [[epsilon-Abschluss]] der Zielzustände berücksichtigen!!

> [!hint] der Zustand, der durch die [[Leere Menge]] beschrieben wird, wird zum [[Müllzustand]] $S_{j}$

#### Tabelle
- angelehnt an [[Tabellendarstellung DFA]]
	- Mengenklammern werden weggelassen
	- Für jeden generierten [[Zustand]] werden auch die Zustände in seiner [[Menge]] mitgeführt
![[Pasted image 20240926130559.png]]