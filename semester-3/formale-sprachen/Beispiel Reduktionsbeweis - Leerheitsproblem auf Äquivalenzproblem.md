
> Reduktion des [[Leerheitsproblem]]s auf das [[Äquivalenzproblem]] der regulären Sprachen

- $L_{1}$: [[Menge]] aller [[DFA]] $A$, die die [[Leere Sprache]] erkennen
- $L_{2}$: [[Menu]] aller Paare $(A_{1}, A_{2})$ von [[DFA]]s, die diselbe [[Sprache]] erkennen (äquivalente Automaten)
- $A_{\varnothing}$: Trivialer [[DFA]] für [[Leere Sprache]]
- $f = A \mapsto (A, A_{\varnothing})$ 

Da ein [[Algorithmus]] existiert, der entscheided, ob $A$ und $A_\varnothing$ äquivalent sind, haben wir jetzt einen [[Algorithmus]], der entscheiden kann, ob $A$ die [[Leere Sprache]] erkennt.


> [!hint] Kurz: $L_{1} = \varnothing \Leftrightarrow A \equiv A_\varnothing$ 

