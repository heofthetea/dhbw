> [!warning] [[Regulärer Ausdruck]] und [[Sprache|Mengenschreibweise]] nicht durcheinander mischen!!

## Sprachen allgemein
- [[Alphabet]]: [[Menge]] aus Zeichen
	-  $\Sigma^{*}$ bezeichneet die [[Menge]] aller [[Wort|Wörter]] über dem [[Alphabet]] $\Sigma$
- [[Wort]]: [[Folge]] aus Zeichen über einem [[Alphabet]]
- [[Sprache]]: [[Menge]] aus [[Wort|Wörtern]]
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
	- [[Operationen auf Sprachen#Produkt|Produkt]]: $L_{1} \cdot L_{2}$: Jedes [[Wort]] der beiden [[Sprache|Sprachen]] miteinander [[Konkatenation|konkatenieren]]
	- [[Operationen auf Sprachen#Potenz|Potenz]]: $L^{n}$: Jedes [[Wort]] der Sprache potenzieren
	- [[Klenee-Stern]]: $L^{*}$: _alle_ Möglichkeiten, die [[Wort|Wörter]] einer [[Sprache]] miteinander zu [[Konkatenation|konkatenieren]]

> [!warning] $\epsilon \in L^{*}$!!

## Reguläre Ausdrücke
[[Regulärer Ausdruck]]
- beschreiben [[Reguläre Sprache|Reguläre Sprachen]]

> [!hint] Eine [[Regulärer Ausdruck]] kann mit einer [[Sprache|formalen Sprache]] in Mengenschreibweise äquivalent gesetzt werden!

### Syntax
- $r + s$: [[Operationen auf Mengen#Union|Vereinigung]] von $r$ und $s$ (think: "oder")
- $r \cdot s$: [[Operationen auf Sprachen#Produkt|Produkt]] von $r$ und $s$ (think: "[[Konkatenation]]")
- [[Klenee-Stern]] doing [[Klenee-Stern]] things (think "beliebig oft")

> [!hint] Obwohl über [[Sprache|Sprachen]] definiert, wird in der Praxis mit Symbolen gearbeitet: $e \leadsto \set{e}$ 

## Endliche Automaten
- [[Endlicher Automat]]
	- endliche Anzahl an [[Zustand|Zuständen]]
	- Kann nur einlesen, nicht schreiben
- Erkennen [[Reguläre Sprache|reguläre Sprachen]]

> [!hint] In Praxis werden idR [[DFA|DFAs]] verwendet, da dort die Läufe einfacher zu berechnen sind. [[NFA|NFAs]] dienen nur dem einfacheren Verständnis für Menschen.
### Deterministischer Endlicher Automat ([[DFA]])
- [[Wort]] ist akzeptiert, wenn der [[Lauf]] über dem Wort akzeptierend ist
#### Definiert als 5-[[Tupel]]:
$$\mathcal{A} = (Q, \Sigma, \delta, q_{0}, F)$$
- $Q$ ist _endliche_ Menge an [[Zustand|Zuständen]]
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

## Automatentransformationen
### NFA zu DFA
- [[epsilon-Abschluss]] $ec(q)$: Die [[Menge]] aller von $q$ mit beliebig vielen [[ε-Übergang (epsilon-Übergang)|epsilon-Übergängen]] erreichbaren Zuständen
- $\delta'$: [[Menge]]  [[mögliche Folgezustände eines einzelnen Zustand]] 
- $\hat{\delta}$: [[mögliche Folgezustände einer Zustandsmenge]]
	- für jeden [[Zustand]] der [[Menge|Zustandsmenge]] die jeweiligen $\delta'$ vereinigen
 
#### Algorithmus
[[Transformation NFA zu DFA]]
1. [[epsilon-Abschluss]] von [[Startzustand]] berechnen: $S_{0} = ec(q_{0})$
2. [[mögliche Folgezustände einer Zustandsmenge|mögliche Folgezustände der Menge]] $S_{0}$ für alle Symbole $c \in \Sigma$ berechnen
	1. für jede _neue_ Menge, die entsteht, einen neuen Zustand $S_{i}$ anlegen
3. Alle [[Zustand|Zustandsmengen]], die einen [[Endzustand]] $f \in F$ beinhalten, werden zu einem [[Endzustand]] für $det(A)$

> [!warning]- In Schritt $2.$ den [[epsilon-Abschluss]] der Zielzustände berücksichtigen!!

> [!hint] der Zustand, der durch die [[Leere Menge]] beschrieben wird, wird zum [[Müllzustand]] $S_{j}$

### Regular Expression zu NFA
[[Transformation RegEx zu NFA]]
[[Regulärer Ausdruck|regulären Ausdruck]] von innen nach Außen bearbeiten:
1. Zustände für jeden [[Transformation RegEx zu NFA#1. elementare Ausdrücke|Elementarausdruck]] generieren
2. Elementarzustände richtig mit [[ε-Übergang (epsilon-Übergang)|epsilon-Übergängen]] verbinden:
	- [[NFA für Konkatenation]]
	- [[NFA für Vereinigung]]
	- [[NFA für Klenee-Stern]]

> [!warning]- Kommt ein Elementarsymbol mehrfach im Ausdruck vor, darf der entsprechende Subgraph nicht wiederverwendet werden!!

### DFA zu Regex
[[Transformation DFA zu Regex]]

> [!info] Ansatz: für jeden [[Zustand]] [[Rekurrenzrelation]] aufstellen und mit [[Arden-Lemma]] auflösen

- [[Arden-Lemma]]: $r \equiv sr + t \Leftrightarrow r \equiv s^{*}t$ (if $\epsilon \not\in \mathcal{l}(s)$)
#### Algorithmus
- Beginne mit [[Endzustand|Endzuständen]]
1. [[Regulärer Ausdruck|RegEx]] für jeden Zustand erstellen
	1. Für [[Müllzustand]] wird das direkt eine [[Rekurrenzrelation]] -> [[Leere Sprache]] $\varnothing$
2. nacheinander von hinten nach vorne Gleichungen mit [[Arden-Lemma]] umformen und in frühere Zustandsgleichungen einsetzen
3. wenn bei [[Startzustand]] angekommen: fertig

> [!hint] Ist ziemlich schwer zu beschreiben, s. [[Beispiel 2.40 Transformation DFA zu RegEx]] und [[Übung 2.42 Transformation DFA zu RegEx]]

## Minimierung DFA
- [[Quotientenautomat]]: [[DFA]] mit minimaler Anzahl an [[Zustand|Zuständen]]
	- keine zwei [[Zustand|Zustände]] stellen dasselbe bisher eingelesene [[Wort]] dar

> [!hint] Der [[Quotientenautomat]] ist für jede [[Reguläre Sprache|Sprache]] eindeutig.

#### Algorithmus
[[Minimierung DFA]]
1. Erstelle Tabelle, um jeden [[Zustand]] jedem anderen zuzuordnen
2. Jeder [[Endzustand]] ist von jedem Nicht-Endzustand [[Unterscheidbarer Zustand|unterscheidbar]] --> in diesen Feldern eine $0$ eintragen
3. Für jedes freie Feld:
	1. erreiche ich mit _irgendeinem_ [[Symbol]] ein als [[Unterscheidbarer Zustand|unterscheidbar]] markiertes Zustandspaar?
		1. **ja** --> Iterations-Nr eintragen
		2. **nein** --> Feld leer lassen
4. iterativ wiederholen, bis kein neues [[Unterscheidbarer Zustand|unterscheidbares]] Zustandspaar mehr dazu kommt
	1. alle leeren Felder sind äquivalent --> **können zusammengefasst werden**


> [!hint] Tabelle ist symmetrisch --> Eine Seite der Diagonale kann bei Durchführung ignoriert werden
##### Zusammenfassung
- seien $0$ und $1$ äquivalente Zustände
	1. Führe alle [[Pfad|Pfade]] zu $1$ zu $0$
	2. lösche $1$

## Pumping Lemma
[[Pumping Lemma]]
[[Kontraposition Pumping Lemma]]
Anwendung: [[Irregularität einer Sprache zeigen]]
#todo

## Entscheidungsprobleme

- [[Leerheitsproblem]]: Ist eine [[Sprache]] leer?
	- Schau, ob mindestens ein [[Endzustand]] [[Erreichbarer Zustand|erreichbar]] ist
- [[Wortproblem]]: Ist ein [[Wort]] in einer [[Sprache]]?
	- mach einen [[Lauf]] durch [[Automat|Automaten]]
- [[Äquivalenzproblem]]: Sind zwei [[Sprache|Sprachebn]] äquivalent?
	- überprüfe [[Quotientenautomat|Quotientenautomaten]] der Sprachen auf äquivalenz
- [[Endlichkeitsproblem]]: Enthält eine [[Sprache]] [[endliche Sprachen|endlich]] viele [[Wort|Wörter]]?
	- Bilde [[Automat]], der nur die [[Zustand|Zustände]] enthält, die _erreichbar_ und _terminierend_ sind
	- hat dieser Automat einen [[Zyklus]], ist [[Sprache]] unendlich