> [!warning] [[Regulärer Ausdruck]] und [[Formale Sprache|Mengenschreibweise]] nicht durcheinander mischen!!


## Sprachen allgemein
- [[Alphabet]]: [[Menge]] aus Zeichen
	-  $\Sigma^{*}$ bezeichneet die [[Menge]] aller [[Wort|Wörter]] über dem [[Alphabet]] $\Sigma$
- [[Wort]]: [[Folge]] aus Zeichen über einem [[Alphabet]]
- [[Formale Sprache]]: [[Menge]] aus [[Wort|Wörtern]]
### Operationen
- [[Operationen auf Wörtern]]:
	- [[Konkatenation]]: $w\cdot v = wv$
		- Potenzierung: n-Fache [[Konkatenation]] eines Wortes mit sich selbst
		- **NOTE**: $w^{0} = \epsilon$ ([[leeres Wort]])
	- Betrag: $|w|$ - Anzahl der Zeichen
	- Vorkommen von Symbol $z$: $|w|_{z}$
	- Teilwort: $w[i, j]$
		- Zeichen an Position: $w[i]$
- [[Operationen auf Sprachen]]:
	- [[Operationen auf Sprachen#Produkt|Produkt]]: $L_{1} \cdot L_{2}$: Jedes [[Wort]] der beiden [[Formale Sprache|Sprachen]] miteinander [[Konkatenation|konkatenieren]]
	- [[Operationen auf Sprachen#Potenz|Potenz]]: $L^{n}$: Jedes [[Wort]] der Sprache potenzieren
	- [[Klenee-Stern]]: $L^{*}$: _alle_ Möglichkeiten, die [[Wort|Wörter]] einer [[Formale Sprache|Sprache]] miteinander zu [[Konkatenation|konkatenieren]]

> [!warning] $\epsilon \in L^{*}$!!

## Reguläre Ausdrücke
[[Regulärer Ausdruck]]
- beschreiben [[Reguläre Sprache|Reguläre Sprachen]]

> [!hint] Eine [[Regulärer Ausdruck]] kann mit einer [[Formale Sprache|formalen Sprache]] in Mengenschreibweise äquivalent gesetzt werden!

### Syntax
- $r + s$: [[Operationen auf Mengen#Union|Vereinigung]] von $r$ und $s$ (think: "oder")
- $r \cdot s$: [[Operationen auf Sprachen#Produkt|Produkt]] von $r$ und $s$ (think: "[[Konkatenation]]")
- [[Klenee-Stern]] doing [[Klenee-Stern]] things (think "beliebig oft")

> [!hint] Obwohl über [[Formale Sprache|Sprachen]] definiert, wird in der Praxis mit Symbolen gearbeitet: $e \leadsto \set{e}$ 

## Endliche Automaten
- [[Endlicher Automat]]
	- endliche Anzahl an [[Zustand|Zuständen]]
	- Kann nur einlesen, nicht schreiben
- Erkennen [[Reguläre Sprache|reguläre Sprachen]]
### Deterministischer Endlicher Automat ([[DFA]])
- [[Wort]] ist akzeptiert, wenn der [[Lauf]] über dem Wort akzeptierend ist
#### Definiert als 5-[[Tupel]]:
$$\mathcal{A} = (Q, \Sigma, \delta, q_{0}, F)$$-  $Q$ ist _endliche_ Menge an [[Zustand|Zuständen]]
- $\Sigma$ ist ein _endliches_ Eingabe-[[Alphabet]]
- $\delta: Q \times \Sigma \rightarrow Q$: [[Übergangsfunktion]] für jeden Zustand
- $q_{0}\in Q$: [[Startzustand]]
- $F \subset Q$: akzeptierende [[Endzustand|Endzustände]]

### Nicht-Deterministischer Endlicher Automat ([[NFA]])
- [[Wort]] ist akzeptiert, wenn **einer** aller möglichen [[Lauf|Läufe]] über dem Wort akzeptierend ist
- Definition als [[Tupel]] gleich wie [[DFA]], außer:
	- [[Übergangsrelation]] ist 3-[[Tupel]]: $\Delta \in Q \times \Sigma \times Q$ 
> [!warning] [[leeres Wort]] kann auch in Übergängen verwendet werden --> $\Sigma = \Sigma \cup \set{\epsilon}$ 

- ist einfacher verständlich und übersichtlicher
- [[Äquivalenz DFA und NFA]] - erkennen beide dieselbe [[Sprachklasse]]