> How _expensive_ is an Algorithm?
> Konkretere Betrachtung für [[Entscheidbarkeit|entscheidbare]] Probleme

- Wie viel Zeit benötigt eine [[Turing Machine]] für die Lösung eines Problems?
- Wie viele Felder des Bandes werden beschrieben?

## Formal
Sei $f: \mathbb{N} \longrightarrow \mathbb{N}$ eine [[Funktion]]. Eine [[Turing Machine]] $M$ mit dem [[Alphabet]] $\Sigma$ heißt **$f$-zeitbeschränkt**, wenn für jede Eingabe $w \in \Sigma^{*}$ jede [[Berechnung]] von $M$ höchstens $f(|w|)$ Schritte hat.

> [!info] In Algorithmik: [[Big O]] Notation
## Criteria
- Performance based on _expected_ input data!
- Performance in [[Worst Case]]
- Demands of the Environment (Real-time? Space limited?)
- provable Correctness

> [!hint] Elegance and Simplicity are difficult to quantify, but nevertheless important!!


==> [[Complexity abstract]]
[[Komplexität und Eingabe]]
[[Komplexität bei großen n]]

expressed in [[Big O]]
