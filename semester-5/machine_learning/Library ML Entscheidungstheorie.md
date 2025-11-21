> Mal schauen, muss rausfinden was da wichtig ist und wie sehr ich mir die Mühe mache die Dinge da nochmal zu verstehen

### Kenngrößen
- [[A-priori Wahrscheinlichkeit]] $P_{i}$: [[Wahrscheinlichkeit]], dass ein [[Merkmal]] $i$ zu $\omega_{i}$ gehört
	- intuitiv: [[Relative Häufigkeit|Anteil]] von $\omega_{i}$ aus einer [[Stichprobe]]
- [[A-posteriori Wahrscheinlichkeit]] $P(\omega_{i}|x)$: [[Wahrscheinlichkeit]], dass $i$ zu $\omega_{i}$ gehört unter der Bedingung, dass $i$ die Ausprägung $x$ besitzt
	- bekannt: $\omega_{i}$ ([[A-priori Wahrscheinlichkeit]] der [[Klasse]] $\omega_{i}$)
	- $x$: [[Merkmal|Merkmalsvektor]] des Objekts $i$
- [[Likelihood]] $p(x|\omega_{i})$: [[Wahrscheinlichkeit]], dass $i$ das [[Merkmal]] $x$ besitzt, wenn $i$ zu [[Klasse]] $\omega_{i}$ gehört
- [[Evidenz]] $p_{x}$: [[Totale Wahrscheinlichkeit]] des [[Merkmal|Merkmals]] $x$ (unabhängig der Klassen)

#### Beispiel
- [[Merkmal|Merkmale]]: Farben (hier grün); [[Klasse|Klassen]]: Obst (hier Apfel)
	- see [[MAP Klassifikator]] (von da ist das Beispiel)
- [[A-priori Wahrscheinlichkeit]]: $P(\omega = \text{"Apfel"}) = 0.6$
- [[Likelihood]]: $p(\text{"grün"}|\text{"Apfel"}) = 0.3$
- [[Evidenz]]: ([[Totale Wahrscheinlichkeit]] von "grün") $p(\text{"grün"}|\text{"Apfel}) \cdot P(\omega = \text{"Apfel"}) + p(\text{"grün"}|\text{"Zitrone"}) \cdot P(\omega = \text{"Zitrone"}) + ... = 0.6 \cdot 0.3 + ... = 0.33$ 
=> jetzt haben wir alles für [[A-posteriori Wahrscheinlichkeit]]: $p(\text{"Apfel"}|\text{"grün"}) = \frac{0.3 \cdot 0.6}{0.33} = 0.545$

### Weitere Größen
- [[Loss]]: Gewichtung für eine Entscheidung
	- Im Prinzip ist $L_{ij}$ eine Zelle einer [[Konfusionsmatrix]]
	- aber: [[Loss]] wächst proportional mit Schwere des [[Statistischer Fehler|Fehlers]]
- [[Bayesian Risk]]: [[Arithmetisches Mittel|Durschschnittlicher]] [[Loss]]
	- Einfach gewichtet die Zellen der [[Konfusionsmatrix|Loss-Matrix]] aufsummieren