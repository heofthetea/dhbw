[[Transformation DFA zu Regex]]

![[FSA_Handout.pdf#page=98]]

- $r_{2}$ erkennt eben auch [[leeres Wort]], da [[Endzustand]]

- mit [[Arden-Lemma]] und [[Rechenregeln Reguläre Ausdrücke]]

![[Pasted image 20240927111950.png]]


Einsetzen in $r_{0}$:
![[Pasted image 20240927112538.png]]

==> Ergebnis: $$\mathcal{L}(\mathcal{A}) = \mathcal{L}((ab + ba^{*}bb)^{*}(a + ba^{*}b))$$
