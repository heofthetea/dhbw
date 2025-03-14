Sei $\Sigma$ ein [[Alphabet]] und
- $(G_{0}, G_{1}, G_{2}, ...)$ eine [[Aufzähl-Turing Machine|Aufzählung]] aller [[Monotone Grammatik|monotonen Grammatiken]] über $\Sigma$
- $(w_{0}, w_{1}, w_{2})$ eine Aufzählung aller [[Wort|Wörter]] über $\Sigma$ 
Diese Aufzählungen sind offensichtlich von einer [[Turing Machine]] realisierbar.
Wir bilden die [[Diagonalisierung]] der beiden Folgen:
$$L := \set{w_{i}\ |\ w_{i} \not\in \mathcal{L}(G_{i})}$$

- $L$ ist [[Entscheidbarkeit|entscheidbar]]:
	- Zähle Grammatiken auf
	- Zähle Wörter auf
	- Entscheide [[Wortproblem TM]] $(L(G_{i}), w_{i})$
- $L$ ist nicht [[Kontextsensitive Sprache|kontextsensitiv]]:
	- Sonst gäbe es ein $k$ mit $L = \mathcal{L}(G_{k})$ (weil dann $L$ eine [[Kontextsensitive Sprache]] wäre)
	- $w_{k} \in \mathcal{L}(G_{k})$ gdw.  $w \in L$ gdw. $w_{k} \not\in \mathcal{L}(G_{k})$


