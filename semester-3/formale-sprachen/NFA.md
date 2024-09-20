> Non-deterministic Finite Automaton

[[Endlicher Automat]], [[ε-Übergang (epsilon-Übergang)]], [[Übung 2.23 NFA]], [[Graph]], [[DFA]]

- besitzt [[Übergangsrelation]] $\Delta$ anstatt [[Übergangsfunktion]]
- Jeder mögliche [[Lauf]], das Eingabezeichen zu verarbeiten, wird [[asynchronous|parallel]] verarbeitet
	- ist einer der [[Lauf|Läufe]] akzeptierend, wird das Wort akzeptiert
## Definition
Ein [[NFA]] ist ein 5-[[Tupel]] ähnlich dem [[DFA]]:$$A = (Q, \Sigma, \delta, q_{0}, F)$$ mit folgenden Komponenten:
- $Q$ ist _endliche_ Menge an [[Zustand|Zuständen]]
- $\Sigma$ ist ein _endliches_ Eingabe-[[Alphabet]]
- $\delta: Q \times (\Sigma \cup \set{epsilon}) \times Q$: [[Übergangsrelation]]
- $q_{0}\in Q$: [[Startzustand]]
- $F \subset Q$: akzeptierende [[Endzustand]]

### Akzeptanz
Die von einem [[NFA]] $\mathcal{A}$ erkannte Sprache ist:
$$\mathcal{L}(\mathcal{A}) = \set{w \in \Sigma^{*}\ | \exists_{L}:\ akzeptiert(L, w)}$$
$L$ ist hierbei ein [[Lauf]]
## Tabellendarstellung
wie [[Tabellendarstellung DFA]], aber:
- zusätzliche Spalte für $\epsilon$ 
- In Tabellenzellen müssen [[Menge|Mengen]] stehen

![[Pasted image 20240918152204.png]]