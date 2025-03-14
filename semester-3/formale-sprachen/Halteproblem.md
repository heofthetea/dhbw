[[Turing Machine]]

Das [[Halteproblem]] ist die [[Menge]] aller [[Tupel|Paare]] $(M, w)$ von [[Turing Machine|Turing Maschinen]] $M$ und [[Wort|Wörtern]] $w$, so dass $M$ mit der Eingabe $w$ [[Haltekonfiguration|hält]].

> [!info] [[Spezielles Wortproblem]] ohne die Bedingung, dass $M$ akzeptieren muss.

# Beweis durch [[Reduktion]] von [[Wortproblem TM]]
$$f = (M, w) \mapsto (M', w)$$
- $M'$ verhält sich zunächst genau so wie $M$, mit folgenden Unterschieden:
	- Erreicht $M$ eine **akzeptierende** [[Haltekonfiguration]], stoppt auch $M'$.
	- Erreicht $M$ eine **nicht akzeptierende** [[Haltekonfiguration]], geht $M'$ in eine [[Endlosschleife]].

$(M, w) \in WP$
gdw. $M$ akzeptiert $w$
gdw. $M$ erreicht mit Eingabe $w$ eine akzeptierende [[Haltekonfiguration]]
gdw. $M'$ [[Haltekonfiguration|hält]] mit Eingabe $w$
gdw. $(M', w) \in HP$

