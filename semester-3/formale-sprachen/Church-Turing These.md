 - A function is <span style="color:rgb(245, 154, 35)">effectively calculable</span> if its values can be found by some purely mechanical process.[^1]
 - A <span style="color:rgb(245, 154, 35)">computable function</span> is a [[Function|function]] calculable by a [[Turing Machine|Machine]].
 - The classes of effectively calculable functions and computable functions are identical.


> [!warning] Konsequenz aus [[Satz von Rice|Rice]] und [[Halteproblem]]: 
> - Keine interessante Eigenschaft von Programmen in irgendeiner Hochsprache ist entscheidbar.[^2]
> - Zahlreiche wichtige Probleme außerhalb der Informatik sind unentscheidbar.

## Erweiterung
Für jedes realistische (effectively calculable) Berechnungsmodell $B$ gibt es ein [[Polynom]] $p: \mathbb{N} \longrightarrow \mathbb{N}$ so dass jeder $f$-zeitbeschränkte [[Algorithmus]] in $B$ übersetzt werden kann in ein $p(f)$-zeitbeschränkte (computable) [[Turing Machine]] und umgekehrt.

> [!hint] Es gilt ungefähr: $p \textasciitilde n^{6}$

[^1]: s. [[Algorithmus]]; calculable ohne tieferes Verständnis
[^2]: Testing Problem -> Ich kann nicht algorithmisch entscheiden, ob mein Programm alle Testfälle abgedeckt hat