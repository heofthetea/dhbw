[[Cliquenproblem]], [[NP-Vollständigkeit]], [[3-SAT]]

> [!info] Folgt aus [[Polnomialzeit-Reduktion]] des [[3-SAT]] Problems.

- Eine Instanz von CLIQUE $(G, k)$ wird definiert wie folgt:
	- $V = \set{L_{i,j}\ |\ L_{i,j} \ kommt\ in\ \varphi\ vor}$
	- $E = \set{(L_{i,j}, L_{i',j'})\ |\ i \neq i' \land L_{i,j} \neq \overline{L_{i',j'}}}$ => Alle Paare von Literalen aus **unterschiedlichen** Klauseln, die **nicht komplementär** sind.
- $k = m$, also die Größe der Clique ist gleich der Anzahl der Klauseln.

![[Pasted image 20241120155627.png]]


> [!hint] Könnte ich das [[Cliquenproblem]] effizient lösen, könnte ich [[3-SAT]] effizient lösen, wodurch $P = NP$ gülte.

[[Übung 7.36 Clique NP]]
## Beispiel
- 1. Klausel: oben
- 2. Klausel: links
- 3. Klausel: rechts
- 4. Klausel: unten
![[Pasted image 20241120155646.png]]


1. Für jedes Literal: Kanten zu allen anderen Literalen aus anderen Klauseln, die sich nicht _widersprechen_
2. Schauen: gibt es eine 4-Clique? (gesucht 4, weil 4 Literale)
	1. Aus dieser Clique ergibt sich das Modell