#library 
### Algorithmen Allgemein
- [[Definition Algorithmus]]
	- Transformiert *Input* in *Output*, in *wohl-definierten* und _endlich_ vielen Schritten
	- [[Computers are idiots]] and [[Speech is unprecise]] - Ein Algorithmus muss von jedem Idioten durchgeführt werden können

### Komplexität
- [[Komplexität]] beschreibt wie viel _Zeit_ oder _Speicher_ ein Algorithmus braucht
	- Ist immer als [[Funktion]] [[Komplexität und Eingabe|abhängig von der Größe der Eingabe]] dargestellt
	- Betrachtet wird der [[Worst Case]] oder der [[Average Case]], je nach Anwendungskontext
	- [[Komplexität bei großen n]]: Je größer $n$ wird, desto weniger ausschlaggebend sind niederwertige Terme
		--> bei [[Polynom|Polynomen]] wird immer nur das _höchststellige_ Polynom betrachtet
	- _Konstante Faktoren_ können je nach Kontext ignoriert werden
- Für Berechnung wird [[Complexity abstract|abstrahiert]]:
	- Jede Instruktion ist eine _Zeiteinheit_ ZE
	- Jedes Element (nicht byte!!) im Speicher ist eine _Platzeinheit_ PE
	- Nested for loops have $n \cdot n \cdot n$ Complexity

> [!hint]- Summenformeln in loops, und [[Summenformel auflösen|diese auflösen]]
> Wenn es passiert, dass ein inner loop mit jeder iteration des äußeren kleiner wird, muss dies mit Summenformel modelliert werden
> $$\sum_{i = 1}^{n} i= \frac{n(n + 1)}{2}$$


- [[Komplexität]] wird idR dargestellt durch [[Landau Notation]] (Big O)
	- $O(f)$ ist die [[Menge]] aller Funktionen, die langfristig nicht _wesentlich_[^1] schneller wachsen als $f$ 
	- Mathematisch: 
		- $k, n \in \mathbb{N}, \ \ \ c \in \mathbb{R}$ 
		- $\forall_{n \gt k}\ g(n) \leq c * f(n) \Longleftrightarrow g \in O(f)$ 
- [[Rechenregeln Big O]] dienen dazu, Komplexität von verschiedenen Algorithmen zu vergleichen
	- mit wichtigste Regel: [[Grenzwertbetrachtung in Big O]]: $\lim_{n \rightarrow \infty} \frac{g(n)}{f(n)} \in \mathbb{R} \Rightarrow g \in O(f)$

> [!warning] zu beachten bei Grenzwertbetrachtung 
> - $0 \in \mathbb{R}$ 
> - "oben muss in Unten drin sein"
> - Oft muss [[Regel von L'Hopital]] angewendet werden

#### Logarithmen
[[Logarithmus]] ist die [[Umkehrfunktion]] zum Exponenten.
- wichtige Basen:
	- [[Logarithmus Dualis]] (Basis $2$): Wichtigste in Informatik (weil Binärsystem und so)
		- ist idR gemeint, wenn _nur_ $log\, x$ irgendwo steht
	- **natürlicher Logarithmus**: Logarithmus zur Basis [[Eulersche Zahl|e]]
> [!warning]- Basis ist für [[Komplexität]] irrelevant
> [[Basen ineinander überführen]]: Unterschiedliche Basen sind lediglich ein konstanter Faktor

- [[Rechenregeln Logarithmus]]
	- Elementare Rechenregeln ergeben sich durch die _Identität_ des [[Logarithmus]] als [[Umkehrfunktion]] zur Potenz
	- Wichtig: [[Basen ineinander überführen]]
		- jeder [[Logarithmus]] kann durch $c \cdot ln\, x$ ausgedrückt werden
		- $log_{a}\, x = \frac{log_{b}\, x}{log_{b}\, a}$
		- Anwendungsfall: _"Transformiere Logarithmus von Basis $b$ in Basis $a$_
- [[Ableitung von Logarithmen]]:
$$log_{a}(x)'= \frac{1}{ln(a) \cdot x}$$

#### Komplexitätsklassen
Bekannte/Häufige Laufzeiten von Algorithmen kategorisiert
[[Komplexitätsklassen verschiedener Funktionen]]:
- $O(c)$ < $O(log\, x)$ < $\sqrt{x}$ < $O(n^{c})$ < $O(c^{n})$ < $O(n!)$ < $O(n^{n})$
- konstant < logarithmisch < polynomiell < exponentiell < faktoriell

> [!info] Modern hardware is kinda trash
> [[Fähigkeiten moderner Hardware]] - ein Algorithmus mit [[Komplexität]] $O(n^{2})$ kann an einem Tag nur $29$ MB an Daten verarbeiten!! 



[^1]: nicht wesentlich = nur um einen konstanten Faktor