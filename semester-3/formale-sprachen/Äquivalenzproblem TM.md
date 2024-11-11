[[Äquivalenzproblem]], [[Turing Machine]]

Das [[Äquivalenzproblem]] ist die [[Menge]] aller Paare $(M, N)$ von TMs, so dass $M$ und $N$ dieselbe [[Sprache]] erkennen.

# Beweis durch [[Reduktion]] von [[Leerheitsproblem TM|Leerheitsproblem]]
$$SP \leq WP \leq HP \leq LP \leq ÄP$$

gesucht: 

- Sei $M_\varnothing$ die triviale [[Turing Machine]], die die [[Leere Sprache]] erkennt:
$$M_{\varnothing} = (\set{q},\ \Sigma,\ \Sigma \cup \set{\square},\ \varnothing,\ q,\ \varnothing)$$
- Dann sei $f: M \rightarrow (M, N)$ definiert durch: $f = M \mapsto (M, M_\varnothing)$

