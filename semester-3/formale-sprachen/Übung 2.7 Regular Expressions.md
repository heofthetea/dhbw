[[Regulärer Ausdruck]], [[Formale Sprache]]
[[FSA_Handout.pdf#page=47]]

1. $r_{1} = ((b + c)^{*}a(b + c)^{*}) + ((a + c)^{*}b(a + c)^{*})$ 
2. $\mathcal{L}(r_{1}) = \set{w \in \Sigma\ |\ |w|_{a} = 1 \lor |w|_{b} = 1}$
3. 
$r_{2} = ((a + b + c)^{*}\cdot a \cdot (a + b + c)^{*} \cdot b \cdot (a + b + c)^{*}) + ((a + b + c)^{*}\cdot b \cdot (a + b + c)^{*} \cdot a \cdot (a + b + c)^{*})$  
	1. $r_{3.1} = c^{*} a (a + c)^{*} b (a + b + c)^{*}$ 
4. $r_{4} = (a + b)^{*} \cdot b \cdot (a + b)(a + b)$ 
5. Alle [[Wort|Wörter]], wo nicht ein Symbol zweimal hintereinander vorkommt.
6. Alle [[Wort|Wörter]], die nicht den Substring 'bb' enthalten
7. $r_{7} = (a^{*}(ba)^{*})^{*} \cdot b^{*} = a^{*}(baa^{*})^{*}b^*$  
