[[Karthesisches Produkt]], [[Endlicher Automat]]

> Erkennt die [[Reguläre Sprache|Sprache]] $\mathcal{L}(A_{1})\cap \mathcal{L}(A_{2})$.
- [[Zustand|Zustandsmenge]]: [[Karthesisches Produkt]] der Zustände von $A_{1}$ und $A_{2}$
- startet in den [[Startzustand|Startzuständen]] von $A_{1}$ und $A_{2}$
- simuliert _parallel_ [[Lauf|Läufe]] von $A_{1}$ in erster Komponente, die von $A_{2}$ in zweiter Komponente
- akzeptiert, wenn _beide_ Automaten akzeptieren

> [!hint] ähnlich wie [[DFA aus NFA]], aber es sind hier immer [[Tupel|Paare]] an Zuständen, nicht Mengen
## Formal
$A_{1} = (Q_{1}, \Sigma_{1}, \Delta_{1}, q_{01} ,F_{1})$
$A_{2} = (Q_{2}, \Sigma_{2}, \Delta_{2}, q_{02} ,F_{2})$
dann ist der [[Quotientenautomat]] definiert wie folgt:
$$A_{A_{1}\land A_{2}} = \begin{cases}(Q_{1} \times Q_{2},\\ \Sigma_{1} \cap \Sigma_{2},\\ \set{(q_{1}, q_{1}), c, (q'_{2}, q'_{2})\ |\ (q_{1}, c, q'_{1}) \in \Delta_{1}\ \land\ (q_{2}, c, q'_{2}) \in \Delta_{2}},\\ (q_{01}, q_{02}),\\ F_{1} \times F_{2})\end{cases}$$


## Algorithmus
1. Bilde alle möglichen Paarzustände $(q_{1}, q_{2}) \in Q_{1} \times Q_{2}$
2. Betrachte für jedes Zustandspaar für jede Eingabe, zu welchem Zustandspaar gegangen werden muss
3. repeat until done

## Übung
[[Übung 2.64 Produktautomat]]



