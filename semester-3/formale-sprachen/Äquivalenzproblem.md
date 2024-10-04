> ist für [[Reguläre Sprache|reguläre Sprachen]] entscheidbar, aber [[exponentielle Laufzeit|exponentiell]].

## Frage
Sind zwei gegebene [[Formale Sprache|Sprachen]] $L_{1}$ und $L_{2}$ äquivalent?

## Algorithmus
### Reguläre Sprachen
1. [[Transformation RegEx -> NFA]]
2. [[Transformation NFA -> DFA]]
3. [[Minimierung DFA]]
4. Benenne [[Zustand|Zustände]] von $A_{1}$ und $A_{2}$ systematisch um, dann vergleiche die [[Tupel]] auf Äquivalenz.

> [!hint] Funktioniert, aufgrund der Eindeutigkeit des [[Quotientenautomat]].

#### mit [[Eigenschaften Regulärer Sprachen]]
$L_{1} = L_{2}$ genau dann wenn
$$(L_{1} \cap \overline{L_{2}}) \cup (\overline{L_{1}} \cap L_{2}) = \varnothing$$
## Übung
[[Übung 2.73 Äquivalenzproblem]]