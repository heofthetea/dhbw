[[Spezielles Wortproblem]], [[Wortproblem]], [[Reduktion]]

- Sei $L_{1}$ die [[Menge]] aller [[Turing Machine|TM]] $M$, die ihre eigene [[Gödelisierung|Codierung]] $g(M)$ **akzeptieren**
	- $L_{1} = \set{M\ |\  M\ accepts\ g(M)}$
- $L_{2} = \set{(M, 2)\ |\ w \in L(M)}$
- Die [[Reduktion|Reduktions]]-[[Abbildung]] $f = M \mapsto (M, g(M))$

Zu Zeigen: [[Bijektive Abbildung|Bijektivität]] von $f$
$$M \in L_{1} \Longleftrightarrow M\ accepts\ g(M) \Longleftrightarrow (M, g(M)) \in L_{2}$$

> [!hint] Wenn das allgemeine WP entscheidbar wäre, wäre das spezielle Wortproblem für TM entscheidbar.

