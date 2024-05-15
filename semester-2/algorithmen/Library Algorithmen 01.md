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
- Für Berechnung wird _abstrahiert_:
	- Jede Instruktion ist eine _Zeiteinheit_ ZE
	- Jedes Element (nicht byte!!) im Speicher ist eine _Platzeinheit_ PE
- [[Komplexität]] wird idR dargestellt durch [[Landau Notation]] (Big O)
	- $O(f)$ ist die [[Menge]] aller Funktionen, die langfristig nicht _wesentlich_[^1] schneller wachsen als $f$ 
- [[Rechenregeln Big O]] dienen dazu, Komplexität von verschiedenen Algorithmen zu vergleichen
	- mit wichtigste Regel: [[Grenzwertbetrachtung in Big O]]: $\lim_{n \rightarrow \infty} \frac{g(n)}{f(n)} \in \mathbb{R} \Rightarrow g \in O(f)$
		- $0 \in \mathbb{R}$ 
		- Oft muss [[Regel von L'Hopital]] angewendet werden
> [!hint]- Summenformeln in loops, und [[Summenformel auflösen|diese auflösen]]
> Wenn es passiert, dass ein inner loop mit jeder iteration des äußeren kleiner wird, muss dies mit Summenformel modelliert werden
> $$\sum_{i = 1}^{n} i= \frac{n(n + 1)}{2}$$

[^1]: nicht wesentlich = nur um einen konstanten Faktor