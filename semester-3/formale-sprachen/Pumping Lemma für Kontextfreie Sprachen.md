[[Kontextfreie Sprache]], [[Pumping Lemma]]


Sei $L$ eine [[Kontextfreie Sprache]]. Dann gibt es ein $k \in \mathbb{N}^{\geq 1}$, sodass gilt:
1. $vx \neq \epsilon$
2. $|vwx| \leq k$
3. $u \cdot v^{h}\cdot w \cdot x^{h} \cdot y \in L$ für alle $h \in \mathbb{N}$

> [!hint] Die Teil[[wort]] $v^{h}\cdot w \cdot x^{h}$ wird durch ein [[Produktionsregel|Regelpaar]] $S \rightarrow vSx | w$ realisiert

## Intuitiv
- Angenommen, $G$ kann unendlich lange Wörter erzeugen
- Es muss ein [[Nichtterminalsymbol]] geben, dass _sich selbst_ und einen _nicht leeren_ [[Terminalsymbol|Kontext]] erzeugt
	- Beispiel: [[Übung Palindrom|Palindromsprache]] $S \rightarrow aSa$
	- $S \rightarrow Sa$ ist auch ein nicht-leerer Kontext lol
- da $G$ [[Kontextfreie Sprache|kontextfrei]] ist, kann dieser Teil wiederholt (= "aufgepumpt") werden


## Beispiel
> [!hint] Hier gibt es sogar zwei Pumping-[[Produktionsregel|regeln]]

![[Pasted image 20241016153352.png]]

# Anwendung
to disprove:
1. Definiere ein $k \in \mathbb{N}^{\geq 1}$
2. definiere [[Wort]] $s \in L$ mit $|s| \geq k$
3. Zerlege $s$ in $5$ Teile $s = uvwxy$
	1. $vx \neq \epsilon$
	2. $|vwx| \leq k$
	3. 