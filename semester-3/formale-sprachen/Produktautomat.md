[[Karthesisches Produkt]]

> Erkennt die [[Reguläre Sprache|Sprache]] $\mathcal{L}(A_{1})\cap \mathcal{L}(A_{2})$.
- [[Zustand|Zustandsmenge]]: [[Karthesisches Produkt]] der Zustände von $A_{1}$ und $A_{2}$
- startet in den [[Startzustand|Startzuständen]] von $A_{1}$ und $A_{2}$
- simuliert _parallel_ [[Lauf|Läufe]] von $A_{1}$ in erster Komponente, die von $A_{2}$ in zweiter Komponente
- akzeptiert, wenn _beide_ Automaten akzeptieren

> [!hint] ähnlich wie [[DFA aus NFA]], aber es sind hier immer [[Tupel|Paare]] an Zuständen, nicht Mengen
## Formal
#todo 

## Algorithmus
1. Bilde alle möglichen Paarzustände $(q_{1}, q_{2}) \in Q_{1} \times Q_{2}$
2. Betrachte für jedes Zustandspaar für jede Eingabe, zu welchem Zustandspaar gegangen werden muss
3. repeat until done

## Übung
[[Übung 2.64 Produktautomat]]



