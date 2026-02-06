Eine [[Abbildung|Funktion]] $f: (\Sigma^{*})^{n} \longrightarrow \Sigma$ heißt [[Turing-Berechenbarkeit|turing-berechenbar]], wenn es eine [[Determinismus|deterministische]] [[Turing Machine]] $M$ gibt, so dass für jedes [[Tupel]] $(w_{1}, w_{2}, ..., w_{n}) \in dim(f)$ mit $f(w_{1}, ...,w_{n}) = x$ gilt:

- $M$ [[Haltekonfiguration|terminiert]] ausgehend von Startkonfiguration $q_{0}w_{1}\square w_{2} \square ... \square w_{n}$
- Die [[Haltekonfiguration]] hat die Form $uqxvy$ mit
  - $u, y, \in \Gamma^{*}$
  - $v \in \Gamma\ \textbackslash \ \Sigma$

> [!hint] Mathematische [[Abbildung|Funktion]] wird durch [[Unärsystem|unäre Darstellung]] umgesetzt

## Verhalten der Turing Machine

Motivation: [[Turing Machine]] kann nicht nur Wörter akzeptieren/verwerfen, sondern auch [[Abbildung|Funktionen]] **berechnen**

- verechnende [[Turing Machine]] ist immer [[Determinismus|deterministisch]]
- **Eingabe**: Auf (erstem) Band, getrennt durch [[Blanksymbol|Blanks]]
- **Ausgabe**: Inhalt des (ersten) Bandes, wenn die [[Turing Machine]] [[Haltekonfiguration|hält]]
  - Start: Kopfposition
  - Ende: Erstes [[Symbol]] $\in \Gamma \ \textbackslash \ \Sigma$

> [!hint] [[Endzustand|Endzustandsmenge]] ist irrelevant

> [!info] Eine [[Endlosschleife|Unendliche Berechnung]] entspricht einem **nicht definierten** Funktionswert => erlaubt partielle Funktionen
