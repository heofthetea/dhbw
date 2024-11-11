Informelle Vorstellung: "Es gibt einen [[Algorithmus|Algorithmus]]"

## Formal
Eine [[Menge]] $S$ heißt [[Entscheidbarkeit|entscheidbar]], wenn es eine [[Determinismus|deterministische]] [[Turing Machine]] $M$ existiert, die die Eingabe $w$ 
- akzeptiert, wenn $w \in S$ gilt,
- verwirft, wenn $w \not\in S$ gilt.

> [!info] Die Menge $S$ wird oft als "Problem" bezeichnet.

> [!info] Die [[Menge]] der [[Entscheidbarkeit|entscheidbaren]] [[Sprache|Sprachen]] ist abgeschlossen unter dem [[Komplement]].

> [!hint] $M$ muss **immer** [[Haltekonfiguration|terminieren]].

> [!warning] Obwohl NTMs und DTMs sprachlich äquivalent sind, ist bei NTM nicht sicher gestellt, dass alle Läufe terminieren -> Für die [[Entscheidbarkeit]] sind die beiden nicht äquivalent.

