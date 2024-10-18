> Everything which can be done in finite time, can be done by a [[Turing Machine]]

[[Bildliche Definition Turing Machine]]
[[Endlicher Automat]]

- introduced $1936$
- Sind [[Automat|Maschinenmodell]] für [[Rekursiv aufzählbare Sprache|Typ 0]] und [[Kontextsensitive Sprache|Typ 1]] [[Sprache|Sprachen]]
- besitzt wieder [[Endzustand]]

## Formal
Eine [[Turing Machine]] (TM) ist ein 6-Tupel $(Q, \Sigma, \Gamma, \Delta, q_{0}, F)$, wobei
- $Q, \Sigma, q_{0}, F$ definiert wie für [[Endlicher Automat]]
- $\Gamma \supset \Sigma \cup \set{\square}$ das Band-[[Alphabet]] und mindestens $\Sigma$ und das [[Blanksymbol]] enthält
- $\Delta \subset Q \times \Gamma \times \Gamma \times \set{l, r, n} \times Q$ die [[Übergangsrelation]]

Wenn $\Delta$ höchstens einen Übergang $(p, c, c', d, q)$ für jedes Paar $(p ,c) \in Q \times \Sigma$ enthält, heißt die TM [[Deterministische Turing Machine]]. Die [[Übergangsfunktion]] wird dann mit $\delta$ bezeichnet.

> [!hint] Hier **muss** die Zustandsmenge und das Bandalphabet disjunkt sein.
## Fähigkeiten
- Knan alles berechnen, was ein _realer_ [[Computer|Computer]] berechnen kann
- Kann alles berechnen, was ein _idealer_ [[Computer]] berechnen kann
- (Frage): Kann eine [[Turing Machine]] alles berechnen, was ein Mensch berechnen kann?

