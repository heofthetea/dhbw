## Ansatz
- jeder Zustand des [[DFA]] $det(A)$ repräsentiert eine [[Menge]] $M$ von Zuständen von $A$


## Algorithmus
### Hilfsfunktion
1. $ec$ $\epsilon$-Abschluss: mit $\epsilon$ erreichbare [[Zustand|Zustände]]
	1. $ec: Q \rightarrow 2^{Q}$ [[Potenzmenge]]
		1. Man geht so weit, wie man mit $\epsilon$ kommt --> [[rekursiv]]
2. $\delta'$ mögliche Folgezustände eines _einzelnen_ Zustands von $A$