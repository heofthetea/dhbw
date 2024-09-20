[[Regulärer Ausdruck]], [[NFA]]

[[Übung 2.39 NFA aus Regex]]

Bottom up:
1. Erzeuge [[NFA]] für elementare [[Regulärer Ausdruck|reguläre Ausdrücke]] $\varnothing, \epsilon, c\in \Sigma$
2. Kombinier [[NFA]] für Teilausdrücke, um [[NFA]] für komplexe Ausdrücke zu erhalten


## Algorithmus
1. Bilde Automaten für ElementarAusdrücke (= alle Symbole und $\epsilon$)
2. Verbinde Elementarautomaten nach [[#2. komplexe Ausdrücke]] _von innen heraus_ zu [[NFA]]

> [!hint] Es wird scheiße viele [[ε-Übergang (epsilon-Übergang)|epsilon-Übergänge]] geben lol

## 1. elementare Ausdrücke
- $\mathcal{A(\varnothing)} = (\set{0}, \Sigma, \varnothing ,0, \varnothing)$
- (intuitiv)

## 2. komplexe Ausdrücke
### NFA für [[Konkatenation]]
- $\mathcal{A}(r_{1})$ wird dargestellt als Black Box mit Anschlüssen:
	- Startzustand ist sichtbar
	- Endzustände sind sichtbar
	- alles dazwischen kann beliebig kompliziert sein
![[Pasted image 20240920125907.png]]
> [!hint] Basically alle [[Endzustand|Endzustände]] von $A(r_{1})$ werden per [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] mit [[Startzustand]] von $A(r_{2})$ verbunden

$$A(r_{1} \cdot r_{2}) = (Q_{1} \cup Q_{2}, \Sigma, \Delta_{1} \cup \Delta_{2} \cup \set{(f_{1}, \epsilon, 2)\ |\ f_{1} \in F_{1}}, 1, F_{2} )$$


### NFA für Vereinigung
- Startzustände $1$ und $2$ sind keine Startzustände mehr 
	- Stattdessen wird neuer Startzustand $0$ eingeführt, mit [[ε-Übergang (epsilon-Übergang)|epsilon-Übergängen]] zu bisherigen Startzuständen
![[Pasted image 20240920130541.png]]

$$A(r_{1} + r_{2}) = Q_{1} \cup Q_{2} \cup \set{0}, \Sigma, \Delta_{1} \cup \Delta_{2} \cup \set{(0, \epsilon, 1), (0, \epsilon, 2)}, F_{1} \cup F_{2}$$

### NFA für [[Klenee-Stern]]
- man muss [[leeres Wort]] akzeptieren
	- neuer [[Startzustand]], der gleichzeitig [[Endzustand]] ist
- man muss [[Automat|Automaten]] beliebig oft durchlaufen können
	- [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] von _ehemealigen_ endzuständen zu Startzustand

![[Pasted image 20240920130824.png]]
$$\mathcal{A}(r_{1}^{*}) = (Q_{1} \cup \set{0}, \Sigma, \Delta_{1}\cup \set{(f_{1}, \epsilon, 0)\ |\ f_{1} \in F_{1}}, 0, \set{0})$$

> [!warning] Neuer [[Startzustand]] wird benötigt, weil Black Box nicht ausschließt, dass es Backlinks zu [[Startzustand]] $1$ gibt