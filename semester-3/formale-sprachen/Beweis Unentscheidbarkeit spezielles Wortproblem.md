[[Spezielles Wortproblem]], [[Unentscheidbarkeit]], [[Russellsche Antinomie]]

[[FSA_Handout.pdf#page=319]]

> [!info] Reminder: $W = \set{w\ |\ w \in L(M_{w})}$ ist die Menge aller Turing Maschinen, die sich selbst akzeptieren.

Die [[Entscheidbarkeit]] ist abgeschlossen unter dem Komplement => Beweis der Unentscheidbarkeit von $\overline{W}$ durch Widerspruch:
Angenommen, es gibt eine [[Turing Machine]] $M_{\overline{W}}$, die $\overline{W}$ erkennt, und die die Codierung $w_\overline{W}$ hat. 
Dann gilt:
$$w_{\overline{W}} \in L(M_{\overline{W}}) \Longleftrightarrow M_{\overline{W}}\ \ accepts\ \ w_{\overline{W}} \Longleftrightarrow w_{\overline{W}} \not\in L(M_{\overline{W}})$$

## Intuitiv
- $M_{\overline{W}}$ akzeptiert alle Turing Machinen, die sich selbst _nicht_ akzeptieren.
- Übergebe $M_{\overline{W}}$ sich selbst. Was macht $M_{\overline{W}}$?
	1. Akzeptiert: Da $M_{\overline{W}}$ sich selbst akzeptiert, darf $M_{\overline{W}}$ sich selbst nicht akzeptieren.
	2. Akzeptiert nicht: Da $M_{\overline{W}}$ sich selbst nicht akzeptiert, muss $M_{\overline{W}}$ sich selbst akzeptieren.
