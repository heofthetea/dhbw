> Der minimale Abstand aller möglichen Codewörter eines Codes.

Zum Auffinden von $d$ Fehlern benötigt man eine [[Hamming Distanz]] von $d + 1$.
Zum _Korrigieren_ von $d$ Fehlern benötigt man $2d + 1$.



## Formal
Seien $w$ und $v$ [[Wort|Wörter]] über dem [[Alphabet]] $\Sigma$. Dann ist die [[Hamming Distanz]] $D(w, v)$ definiert als:
$$D(w, v) = |\set{i \in \mathbb{N}\ |\ w[i] \neq v[i]}|$$
