

## Begriffe
- [[Qualitativmerkmal]]: [[Attribut]] das nicht quantifizierbar ist
	- [[Nominales Skalenniveau]]: Alle [[Attribut|Attribute]] sind nominal
- [[Quantitativmerkmal]]: quantifizierbares [[Attribut]]
	- [[Ordinales Skalenniveau]]: Es existiert eine [[Ordnungsrelation|Ordnung]] zwischen den Merkmalen
	- [[Metrisches Skalenniveau]]: Die [[Ordnungsrelation|Ordnung]] ist quantifizierbar -> "x ist 2 mal so groß wie y"
		- <span style="color:rgb(245, 154, 35)">Intervallskala</span>: Nur **Differenz** kann interpretiert werden - es gibt keine [[Semantik|semantische]] [[Zero|Null]]
		- <span style="color:rgb(245, 154, 35)">Verhältnisskala</span>: Es existiert eine **multiplikative** Skala - die [[Zero|Null]] hat [[Semantik|semantischen]] Wert

> [!hint] Auch ein [[Qualitativmerkmal]] kann [[Ordinales Skalenniveau|ordinal]] sein.

## Standardabweichung/[[Varianz]]
1. Berechne [[Arithmetisches Mittel]] $\overline{x}$ 
2. berechne $x^{2}_{i}$ für jedes $x_{i} \in X$
3. berechne [[Arithmetisches Mittel]] $\overline{x^{2}}$
4. $s_{x}^{2} = \overline{x^{2}} - \overline{x}^{2}$

## Korrelation
1. Berechne [[Arithmetisches Mittel|Mittelwerte]] $\overline{x}$ und $\overline{y}$
2. Berechne [[Standardabweichung|Standardabweichungen]] $s_{x}$ und $s_{y}$
3. Berechne $x_{i} \cdot y_{i}$ für jedes Tupel $(x_{i}, y_{i})$ => "Ausprägung"/neue Spalte $xy$ 
4. Berechne [[Arithmetisches Mittel|Mittelwert]] von $xy$; $\overline{xy}$
5. Berechne [[Kovarianz]]: $cov(x,y) := \overline{xy} - \overline{x}\cdot\overline{y}$
6. Berechne [[Korrelationskoeffizient]] (Normierung): $r_{xy} := \frac{cov(x,y)}{s_{x}s_{y}}$ 
## Linearregression
1. Wähle $X$ und $Y$ aus [[Semantik]], so dass $X \rightarrow Y$
2. Berechne [[Kovarianz]]
3. Berechne $s^{2}_{x}$
4. Use [[Formelsammlung Dr. Giles-A Nzouankeu Nana.pdf|Formelsammlung]]



# Stochastik
## Grundlagen
- $\Omega$: Ergebnisraum -> [[Menge]] der möglichen [[Elementarereignis|Elementarereignisse]] eines [[Zufallsvorgang|Zufallsexperiment|Zufallsexperimentes]]
- Jedes [[Ereignis]] $A \subset \Omega$ ist eine [[Teilmenge]] des Ergebnisraums

> [!hint] [[Operationen auf Ereignissen]] sind äquivalent zu [[Operationen auf Mengen]].

### Kombinatorik
- [[Kombinatorik]] - "Wissenschaft des Zählens" (still use your brain tho)
- Urnenmodell:
	- [[Ziehen mit Zurücklegen]] -> jedes mal sind Bedingungen identisch; $n^{k}$
	- [[Ziehen ohne Zurücklegen]] -> jedes Mal eine Option weniger, verschiedene [[Permutation|Permutationen]] sind seperat zu behandeln => $\frac{n!}{(n-k)!}$ 
	- [[Binomialkoeffizient|Gleichzeitig Ziehen]] -> [[Permutation|Permutationen]] irrelevant, demnach Korrektur um $\frac{1}{k!}$ => [[Binomialkoeffizient]]

## Diskrete Verteilungen
- [[Laplace Experiment]] (Diskrete Gleichverteilung):
	1. Jedes [[Elementarereignis]] hat dieselbe [[Wahrscheinlichkeit]] $\frac{1}{|\Omega|}$
	2. $\Omega$ ist [[endliche Sprachen|endlich]] 
	- [[Wahrscheinlichkeit]] eines [[Ereignis]]: $P(A) = \frac{|A|}{|\Omega|}$
- [[Bernoulli-Verteilung]]: $X \sim B(1, p)$
	- Bei jedem [[Zufallsvorgang|Zufallsereignis]] gibt es <span style="color:rgb(245, 154, 35)">genau zwei</span> [[Ereignis|Ereignisse]]: $A$ und $\overline{A}$
	- Wahrscheinlichkeit für Erfolg $P(A) = p$ ist gegeben
- [[Binomialverteilung]]: $X \sim B(n, p)$
	- Ein [[Bernoulli-Verteilung|Bernoulli-Experiment]] $B(1, p)$ wird $n$ mal wiederholt
	- Wie [[Wahrscheinlichkeit|wahrscheinlich]] ist es, dass $A$ genau $k$ mal eintrifft?
		- $P(X = k) = {n \choose k} p^{k}(1-p)^{n-k}$ ([[Binomialkoeffizient]])
- [[Poisson-Verteilung]]: $X \sim P(\lambda)$
	- [[Binomialverteilung]], die **nicht** durch ein $n$ beschränkt ist, also aus unendlich vielen Versuchen bestehen kann
	- $\lambda = E(X) = Var(X)$
	- [[Wahrscheinlichkeit]], dass Erfolg $A$ genau $k$ mal eintrifft:
		- $P(X = k) = \frac{\lambda^{x}}{x!}\cdot exp(-\lambda)$
- [[Geometrische Verteilung]]: $X \sim G(p)$
	- Wie lange dauert es, bis bei einer [[Folge]] aus [[Bernoulli-Verteilung|Bernoulli-Experimenten]] der erste Erfolg $A$ nach $k$ Versuchen eintritt?
	- $P(X = k) = p \cdot (1-p)^{k-1}$ 
