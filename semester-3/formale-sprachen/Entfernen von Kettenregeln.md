
1. Für jedes $A \in N$ berechne $K(A) = \set{B \in N\ |\ A \Rightarrow^{*}B}$ ([[Iteration|iterativ]] von hinten)
2. $P_{K} := \set{A \rightarrow \beta\ |\ \exists_{B \in K(A)}\ B \rightarrow \beta \in P}$ (alle rechten Regelseiten von $K(A)$)
3. Entferne aus $P_{K}$ alle Kettenregeln

> [!warning] $K(N)$ ist eine _seperate_ [[Menge]] für jedes [[Nichtterminalsymbol]]!!
> 

 > [!warning] **zuerst** neue Regeln hinzufügen, **danach** Kettenregeln entfernen!

> [!hint] Es gilt immer $A \in K(A)$, auch wenn keine explizite [[Produktionsregel]] $A \rightarrow A$ existiert


## Beispiel
![[Pasted image 20241009150743.png]]
