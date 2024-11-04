[[Kontextsensitive Grammatik]]

- die [[Kontextsensitive Sprache|Kontextsensitiven Sprachen]] ist abgeschlossen unter:
	- [[Operationen auf Mengen#Union|Vereinigung]]
	- [[Operationen auf Sprachen#Produkt|Konkatenation]]
	- [[Klenee-Stern]]
	- [[Operationen auf Mengen#Intersection|Schnitt]]
	- [[Komplement]].

> [!hint] Das sind literally alle möglichen Abschlussoperationen.
## Vereinigung
$$ P = \set{S \rightarrow S_{1}, S \rightarrow S_{2}} \cup P_{1} \cup P_{2}$$

## Klenee-Stern
1. erzeuge künstliche eine zweite [[Grammatik]] $G'$ mit Hilfssymbolen
2. behandele $G$ und $G'$ wie bei [[#Konkatenation]]

$$P = \set{S \rightarrow \epsilon|S_{0},\ S_{0} \rightarrow S_{1}\ |\ S_{1}S_{1}'\ |\ S_{1}S_{1}'S_{0}} \cup P \cup P'$$

## Konkatenation
$$P = \set{S \rightarrow S_{1}S_{2}} \cup P_{1} \cup P_{2}$$

### Problem
- Durch Regelanwendungen von $L_{1}$ kann [[Kontext]] für [[Startsymbol]] von $L_{2}$ erzeugt werden

![[Pasted image 20241025131706.png]]

==> Abhilfe:
- ersetze [[Terminalsymbol]] durch [[Nichtterminalsymbol]] (analog zu [[Transformation in CNF]])
- benenne diese [[Nichtterminalsymbol|NTS]] disjunkt um ($X_{a1}; X_{a2}; ...$) 

## Schnitt
- Konstruktion über 2-Band [[Linear beschränkter Automat|LBA]], der jeweils den LBA für $L_{1}$ und $L_{2}$ auf einem eigenen Band simuliert

> [!hint] Terminiert der Automat nicht, gehört das Wort nicht zur Sprache.


## Komplement
- sehr neue Erkenntnis lol (weil man dachte, sie seien nicht abgeschlossen)
- Beweis wieder über Konstruktion eines  [[Linear beschränkter Automat|LBA]] $\overline{A}$
	1. Zähle $a$: alle möglichen [[Konfiguration TM|Konfigurationen]] von $A$ mit Eingabe $w$
		1. $a$ ist [[Beschränktheit|beschränkt]] durch $2^{|w|}$
		2. $a$ kann [[Binärsystem|binär]] codiert werden --> Platzbedarf [[lineare Laufzeit|linear]] in $|w|$
	2. Zähle $b$: alle **verwerfenden** [[Konfiguration TM|Konfigurationen]] von $A$ mit Eingabe $w$
	3. wenn $a = b$: akzeptiere; sonst verwerfe