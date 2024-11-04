[[Spezielles Wortproblem]], [[Unentscheidbarkeit]], [[Russellsche Antinomie]]

[[FSA_Handout.pdf#page=319]]

Beweis durch Widerspruch:
Angenommen, es gibt eine [[Turing Machine]] $M_{\overline{W}}$, die $\overline{W}$ entscheidet, und die die Codierung $w_\overline{W}$ hat. 
Dann gilt:
$$w_{\overline{W}} \in L(M_{\overline{W}}) \Longrightarrow M_{\overline{W}}\ \ accepts\ \ w_{\overline{W}} \Longrightarrow w_{\overline{W}} \not\in L(M_{\overline{W}})$$

## Intuitiv
- $M_{\overline{W}}$ akzeptiert alle Turing Machinen, die sich selbst _nicht_ akzeptieren.
- Übergebe $M_{\overline{W}}$ sich selbst. Was macht $M_{\overline{W}}$?
	1. Akzeptiert: Da $M_{\overline{W}}$ sich selbst akzeptiert, darf $M_{\overline{W}}$ sich selbst nicht akzeptieren.
	2. Akzeptiert nicht: Da $M_{\overline{W}}$ sich selbst nicht akzeptiert, muss $M_{\overline{W}}$ sich selbst akzeptieren.
