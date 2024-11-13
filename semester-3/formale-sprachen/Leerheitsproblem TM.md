[[Leerheitsproblem]], [[Turing Machine]]

> [!info] Ist [[Unentscheidbarkeit|unentscheidbar]]. Das Komplement des [[Leerheitsproblem TM|Leerheitsproblems]] ist aber semi-entscheidbar.

# Beweis Unentscheidbarkeit durch [[Reduktion]] von [[Halteproblem]]

$$f = (M, w) \mapsto M'$$
- $M'$ ersetzt ihre eigene Eingabe durch das [[Wort]] $w$
	- danach verhält sich $M'$ genau so wie $M$
		- $M'$ erzeugt das gleiche Resultat für alle Eingaben
		- Wenn $M$ in eine [[Endlosschleife]] geht, macht $M'$ das auch
	- Wenn eine [[Haltekonfiguration]] erreicht wird, akzeptiert $M'$.

$M$ hält nicht auf $w$
$\Longleftrightarrow$ $M'$ geht mit _jeder_ Eingabe in Endlosschleife
$\Longleftrightarrow$ $M'$ erkennt die [[Leere Sprache]]