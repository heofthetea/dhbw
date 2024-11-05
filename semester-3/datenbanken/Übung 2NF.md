[[2NF]] 

$$R: \set{[A, B, C, D]}$$
$$F: \begin{cases}AB \rightarrow C \\ AB \rightarrow D \\ A \rightarrow E \\ CD \rightarrow A \\ CD \rightarrow B\end{cases}$$

1. Gibt es Wiederholgruppen?
	1. nein -> ist in [[1NF]]
2. [[Schlüsselkandidat|Schlüsselkandidaten]] bestimmen
	1.  $K_{1} = \set{C, D}$  ($E$ wird durch [[transitiv|Transitivität]])
	2. $K_{2} = \set{A, B}$
3. nur zusammengesetzte [[Schlüsselkandidat|Kandidaten]] => Auf Teilabhängigkeiten überprüfen
4. $E$ ist [[Funktionale Abhängigkeit|funktional abhängig]] von $A$
	1. wenn $\set{A, B}$ als [[Schlüssel]] gewählt wird, ist $R$ nicht in [[2NF]]; für $\set{C, D}$ aber schon
		1. man müsste eine neue [[Relation]] $\set{[A, E]}$ aufmachen