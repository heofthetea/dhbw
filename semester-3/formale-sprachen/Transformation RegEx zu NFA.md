[[Regulärer Ausdruck]], [[NFA]]

[[Übung 2.39 NFA aus Regex]]

Bottom up:
1. Erzeuge [[NFA]] für elementare [[Regulärer Ausdruck|reguläre Ausdrücke]] $\varnothing, \epsilon, c\in \Sigma$
2. Kombiniere elementare [[NFA]] nach [[#2. komplexe Ausdrücke]], um [[NFA]] für den Regulären Ausdruck zu erhalten

> [!hint] Es wird scheiße viele [[ε-Übergang (epsilon-Übergang)|epsilon-Übergänge]] geben lol

## 1. elementare Ausdrücke
- $\mathcal{A(\varnothing)} = (\set{0}, \Sigma, \varnothing ,0, \varnothing)$
![[Pasted image 20240926130752.png]]

## 2. komplexe Ausdrücke
- [[NFA für Konkatenation]]
- [[NFA für Vereinigung]]
- [[NFA für Klenee-Stern]]
