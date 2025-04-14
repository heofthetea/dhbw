

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

#todo 