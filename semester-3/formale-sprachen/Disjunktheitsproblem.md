[[Kontextfreie Grammatik]]
Die [[Menge]] aller Paare $(G_{1}, G_{2})$, für die gilt:
$$L(G_{1}) \cap L(G_{2}) = \varnothing$$


> [!hint] Ist unentscheidbar durch [[Reduktion]] des [[PKP]].


## Reduktion
- $G_{l} = (\set{S_{l}}, \Sigma_{G}, P_{l}, S_{l})$
	- $P_{l} = \set{S_{l} \rightarrow iS_{l}l_{i}\ |\ il_{i}\ \ |\ 1 \leq i \leq n}$
- $G_{r} = (\set{S_{r}}, \Sigma_{G}, P_{r}, S_{r})$
	- $P_{r} = \set{S_{r} \rightarrow iS_{r}r_{i}\ |\ ir_{i}\ \ |\ 1 \leq i \leq n}$
- es gilt:
	- $L_{G_{l}} = \set{i_{m}...i_{1} \cdot l_{i1}...l_{im}\ |\ ij \in \set{1, ... n}}$ => auf der rechten Seite steht [[Wort]], auf der linken seite steht die _umgekehrte_ Indexfolge, die **eine Seite der Lösung** des [[PKP]] darstellt

> [!info] Wenn es eine Lösung für das codierte [[PKP]] gibt, können die Grammatiken dasselbe [[Wort]] erzeugen.
### Beispiel
![[Pasted image 20241108130451.png]]