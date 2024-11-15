> [!info] Jede nicht-triviale [[Semantik|semantische]] Eigenschaft von [[Turing Machine|Turingmaschinen]] ist [[Unentscheidbarkeit|unentscheidbar]].


- **nicht-trivial**: trifft auf **einige** [[Turing Machine|TM]] zu, aber **nicht** auf alle.
- [[Semantik|semantisch]]: Eigenschaft bezieht sich auf nur die erkannte [[Sprache]], nicht die [[Turing Machine]] selbst.

### Gegenbeispiele
- **trivial**: Die von der TM erkannte Sprache besteht aus Wörtern über dem Eingabealphabet.
- syntaktisch: Die TM hat 42 Zustände.

# Beweis durch [[Reduktion]] auf das Halteproblem

![[Pasted image 20241106141837.png]]


- Abstrakte Eigenschaft $E$
- [[Reduktion|Reduziere]] das [[Halteproblem]] auf $E$
	- $L_{1} = \set{(M_{H},w_{H})\ |\ M_{H}\ hält\ auf\ w_{H}}$ (= [[Halteproblem]])
	- $L_{2} = \set{M_{E}\ |\ M_{E}\ hat\ Eigenschaft\ E}$
	- $f = (M_{H}, w_{H}) \mapsto M'_{E}$
- Definition von $M'_{E}$:
	1. Führe Berechnung von $M_{H} auf w_{H}$ durch
		1. [[Haltekonfiguration|hält]] nach endlich vielen Schritten, wenn $M_{H}$ auf $w_{H}$ hält
		2. [[Endlosschleife]], wenn $M_{H}$ auf $w_{H}$ hält
	2. führe Berechnung von $M_{E}$ auf $w_{E}$ durch
		1. akzeptiert, wenn $M_{E}$ die Eigenschaft $w_{E}$ hat