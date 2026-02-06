> [[Support Vector Machine|SVM]] für $c$-[[Klasse|Klassen]] Probleme

> [!info] Motivation: [[Support Vector Machine|SVM]] ist eigentlch ein Verfahren für binäre Probleme

- wir machen einfach Ensemble Learning
## One-vs-One
- Einfach für jede mögliche [[Permutation]] eine eigene [[Support Vector Machine|SVM]] trainieren
- werden $\frac{c(c-1)}{2}$ SVMs
- Dann machen wir Demokratie

> [!hint] Ist teilweise bisschen besser als one-vs-all

## One-vs-All
- trainiere $c$ [[Support Vector Machine|SVMs]]
- Jede unterscheided eine [[Klasse]] von allen anderen -> [[One-Class Classification]]
- Bestimme Wert $f_{k}(x)$ der [[Diskriminanzfunktion]] jeder [[Support Vector Machine|SVM]]
- Nimm dass $k$, wo der Wert am höchsten ist

> [!hint] Skaliert echt besser -> macht man lieber

