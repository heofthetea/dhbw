[[Turing Machine]], [[Unbeschränkte Grammatik]]

> [!hint] Anforderung: [[Grammatik|Grammatiken]] sind konstruktiv, [[Automat|Automaten]] bekommen das Wort am Anfang.

Was Grammatik tun muss:
1. ein zufälliges [[Wort]] $w \in \Sigma^{*}$ erzeugen
2. die Berechnungsschritte der [[Turing Machine]] simulieren
3. falls Berechnung erfolgreich ist, $w$ wiederherstellen

> [!info] Die [[Grammatik]] erzeugt erstmal [[Konfiguration TM|Konfigurationen]]

$$G_{M} = (N, \Sigma, P, S);\ \ N = \set{S, \square} \cup Q;$$
## Zufälliges Wort erzeugen
- erzeuge eine Startkonfiguration $\square...\square q_{0}\ input\square...$ 

## Berechnung Simulieren

1. $(p, a, b, n, q) \leadsto pa \rightarrow qb$
2. $(p, a, b, r, q) \leadsto pa \rightarrow bq$
3. $(p, a, b, l, q) \leadsto dpa \rightarrow qdb\ \ (\forall_{d \in \Gamma})$

> [!hint] Das geht nur, weil die [[Turing Machine]] sich nur _einen_ Schritt bewegen darf

## Wiederherstellen
- Man braucht ein 2-dimensionales [[Alphabet]] (vgl. [[k-Band Turing Machine]])
	- $N' = (N \cup \Sigma)^{2}$
- Simulation geschieht nur in erster Komponente
	- zweite Komponente behält einfach nur das Wort
- Wenn Obere Eingabe ein Endzustand ist, wird Wort in unterer Spur akzeptiert
	- Alle blanks und den Startzustand löschen

![[Pasted image 20241025125227.png]]