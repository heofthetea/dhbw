> endliche [[Folge]] $w$ von Symbolen über ein [[Alphabet]] $\Sigma$

$$w = c_{1}...c_{n}\ \ \ mit c_{1...n} \in \Sigma, n \in \mathbb{N}$$



[[leeres Wort]]
- $\Sigma^{*}$ bezeichneet die [[Menge]] aller [[Wort|Wörter]] über dem [[Alphabet]] $\Sigma$

> [!warning]- [[Wort]] im Kontext [[Formale Sprache|formaler Sprachen]] ist nicht gleich einem Wort unserer Anschauung!
> Beispiel [[C]]-Programm: Enthält viele "intuitive Wörter", aber das ganze Programm ist ein [[Wort]] der Sprache $L = \set{"Alle\ validen\ C\ Programme"}$ 


## Operationen

[[Übung 1.22 Operationen auf Wörtern]]


- $|w|$ ist die Länge von $w$ --> die Anzahl der [[Symbol|Symbole]] in $w$
	- $|\epsilon| = 0$
- $|w|_{c}$ ist die Anzahl der Vorkommen des Zeichens $c$ in $w$
- $w[i]$ ist das Zeichen an der Stelle $i$
- $w[i, j]$ ist das Teilwort von $w$ von Stelle $i$ bis $j$ - [[Python list splicing]]


> [!warning] Es wird bei $1$ angefangen zu zählen!!
### Konkatenation
$$w_{1} \cdot w_{2} = w_{1}w_{2}$$

- $ab \cdot ba = abba$ 

### Potenzierung von Wörtern
$$w^{0} = \epsilon$$
$$w^{n + 1} = w^{n} \cdot w$$
