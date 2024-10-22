
> Deterministic Finite Automaton
> de.: Deterministischer Endlicher Automat (**DEA**)

[[Endlicher Automat]], [[Tabellendarstellung DFA]], [[Lauf]], [[Determinismus]]

## Definition
Ein [[DFA]] ist ein 5-[[Tupel]] $$A = (Q, \Sigma, \delta, q_{0}, F)$$ mit folgenden Komponenten:
- $Q$ ist _endliche_ Menge an [[Zustand|Zuständen]]
- $\Sigma$ ist ein _endliches_ Eingabe-[[Alphabet]]
- $\delta: Q \times \Sigma \rightarrow Q$: [[Übergangsfunktion]] für jeden Zustand
- $q_{0}\in Q$: [[Startzustand]]
- $F \subset Q$: akzeptierende [[Endzustand|Endzustände]]

> [!warning] Die [[Übergangsfunktion]] $\delta$ ist **total**
> Es gibt von jedem [[Zustand]] für _jedes_ Symbol einen Übergang.


## Übung
[[Übung 2.14 DFA]]