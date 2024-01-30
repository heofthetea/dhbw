> Prädikatenlogische Formeln in Form $R_{1}\land R_{2} \land ... \land R_{n} \rightarrow K$ 

- erlauben _effiziente_ Schlussfolgerungsverfahren
	- In AL: _P-vollständig_ statt _NP-vollständig_
		- P = polynomiell
		- NP = nicht-polynomiell (= exponentiell)
		- --> s. [[Semester 3]]
	- In Prädikatenlogik: _weniger_ Verzweigungen
		==> in Praxis schneller
### Allgemeine Form
[[#Body]] --> [[#Head]]
Eine _Horn-Klausel_ ist eine in [[Konjunktive Normalform|KNF]] transformierte Horn-Formel.
als Klausel: $\{\lnot R_{1},\ \lnot R_{2},\ ... ,\ \lnot R_{n},\ H\}$ 
- Elemente sind per $\lor$ miteinander verbunden
##### Head
ist Atom, oder die Konstante 0
$H$
##### Body
eine Konjunktion von Atomen, oder 1
$R_{1}\land R_{2} \land ... \land R_{n}$


### Arten von Hornklauseln
![[arten_von_hornklauseln.png]]

- Horn-Klauseln haben _höchstens ein positives_ Literal.
- Resolution von zwei [[Definite Klausel|definiten Klauseln]]erzeugt eine [[Definite Klausel]]
- Resolution einer _Anfrage-_ mit einer [[Definite Klausel|definiten Klausel]] erzeugt eine [[Zielklausel]].
- Resolution von zwei [[Zielklausel|Zielklauseln]] ist nicht möglich. (keine positiven Literale.)


## Anwendung in [[Prolog Interpreter]]
- Gesuchte Antwort: Folgt [[Anfrage]] $Q$ aus der [[Wissensbank]] $Q$?
	- teste mittels Resolution die Erfüllbarkeit von $K \land \lnot Q$
	- im Beispiel: $\forall_{x}\lnot W(x)$ 
- Negation wird in Prolog nicht explizit angegeben
	- Regelköpfe (einschließlich Fakten) sind _positiv_
	- [[#Body]] und [[Anfrage|Anfragen]] sind _negativ_.