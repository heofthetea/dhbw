> [[Definition Algorithmus|Algorithmus]] zur Entscheidung des [[Wortproblem|Wortproblems]] für [[Kontextsensitive Grammatik|Kontextsensitive Grammatiken]] in [[Chomsky-Normalform]]

#klausurrelevant

[[Dijkstras Algorithm]]
- uses [[Dynamic Programming]]
- Datenstruktur: $n \times n$-[[Matrix|Tabelle]] mit $n = |w|$
	- Feld $(i, j)$ enthält [[Nichtterminalsymbol|NTS]], die $w[i]\cdot ...\cdot w[j]$ erzeugen
		- Feld $(1, n)$: Gesamtes [[Wort]] $w$ --> wenn $S \in (1, n)$: $w \in \mathcal{L}(G)$

## Algorithmus
0. Hilfsschritt: Drehe [[Produktionsregel|Regeln um]]
	1. Wenn $S \rightarrow AB, C \rightarrow AB \in P$ gilt: $AB\leftarrow S, P$ 
1. Fülle Hauptdiagonale 
	1. Für jedes [[Symbol]] $w[i]$: trage $A$ ein, wenn [[Produktionsregel|Regel]] $A \rightarrow w[i]$ existiert 
2. Fülle nach und nach Nebendiagonalen
	1. Überprüfe immer Paare an Feldern (s. [[#vergleiche|Bild]])
	2. Wenn eine Kombination $AB$ durch eine Regel $C \rightarrow AB$ gebildet werden kann, trage $C$ ein
	3. ist ein Feld im Paar leer, kann die Kombination nicht gebildet werden
3. Wenn $S$ in $(1, n)$ steht: [[Wort]] ist Element der [[Sprache]] 

> [!hint] Algorithmus muss immer bis ganz zum Ende durchgeführt werden!

### vergleiche
![[Pasted image 20241011123404.png]]


## Komplexität
[[Polynomielle Laufzeit|kubische Laufzeit]]
$$|w^{3}| \cdot |P|$$

## Beispiel 
[[Beispiel CYK Algorithmus]]
[[Übung 3.30 CYK Algorithmus]]