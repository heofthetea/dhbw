[[Stirling Formula]]
- _Generisches_ Sortieren (ohne extra Annahmen) ist nach _unten_ beschränkt durch $n\ log\, n$ 

- untere Schranke für Vergleiche: $\frac{n}{2}$
- Es gibt $n!$ Permutationen einer Folge
- mit $m$ Vergleichen kann man $2^{m}$ Ergebnisse
==> um mit $m$ Vergleichen alle falschen Permutationen auszuschließen:

$$
2^{m} \geq n!\Longrightarrow m \geq log(n!)$$
Nach [[Stirling Formula]] folgt:
$$m \geq n\ log\, n$$
==> man braucht mindestens $n\ log\, n$ Vergleiche!!