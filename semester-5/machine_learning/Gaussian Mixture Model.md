> [!info]- Motivation: Die meisten naiven Verfahren haben nur _eine_ [[Verteilungsfunktion]] für die [[Likelihood]]
> -> nur ein Maximum pro Klasse (in manchen Fällen eine starke Limitierung)
> Beispiel: Stimmhöhe $\mapsto$ Fröhlichkeit (zwei peaks weil male/female)

- Idee: [[Linearkombination]] aus [[Normalverteilung|Gauss-förmigen]] [[Verteilungsfunktion|PDFs]] pro Klasse nutzen
	- => Pro Klasse: $n$ Modes (~ Subklassen)
	- mit $p_{m}(x_{m}, \nu_{m}) \sim \mathcal{N}(\mu_{m}, C_{m})$
- => $2$-dimensional Labels

> [!hint] der Modus ist für die [[Klassifikation]] irrelevant -> nur für die interne Unterscheidung

![[Pasted image 20251031150558.png]]
## Training
- gegeben: Trainingssamples $x_{i}$ mit Labeln $y_{i}$
- [[Hyperparameter]]: Anzahl Moden $M_{j}$ für die Klasse $\omega_{j}$

### Ablauf
1. Für alle Klassen $\omega_{i}$:
	1. Parameter $\nu_{j}$ für Klasse $\omega_{j}$ [[Schätzer|schätzen]]
	2. $p(x, \nu_{j}) = \sum\limits_{m=1}^{M_{j}}\alpha_{m}p_{m}(x, nu_{m})$
		1. $\alpha_{m}$ ist Gewichtsfaktor, $\sum\limits\alpha_{m} = 1$ muss sein
	3. $\nu_{j} \in \set{\nu_{1}, ..., \nu_{M_{j}}, \alpha_{1}, ..., \alpha_{M_{j}}}$

## Klassifikation
- Die geschätzten GMM-Modelle in [[Bayes Plugin]] integrieren
	- $\omega_{i}$ wird wieder durch einen [[Entscheidungstheoretischer Klassifikator]] schätzen