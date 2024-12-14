## Definitionen

$$DFA = (Q, \Sigma, \delta, q_{0}, F)$$
$$TM = (Q, \Sigma, \Gamma, \Delta, q_{0}, F)$$
$$G = (N, \Sigma, P, S)$$


## Chomsky Hierarchie

| Typ | [[Grammatik]]               | [[Sprache]]                      | [[Automat]]                                            | Besondere Regel                                                       | Struktur                |
| --- | --------------------------- | -------------------------------- | ------------------------------------------------------ | --------------------------------------------------------------------- | ----------------------- |
| 0   | [[Unbeschränkte Grammatik]] | [[Rekursiv aufzählbare Sprache]] | [[Turing Machine]]; [[Aufzähl-Turing Machine]]         | -                                                                     |                         |
| 1   | [[Monotone Grammatik]]      | [[Kontextsensitive Sprache]]     | nichtdeterministischer [[Linear beschränkter Automat]] | Ein Wort kann nicht kürzer werden                                     | Kreuz<br>$abab$         |
| 2   | [[Kontextfreie Grammatik]]  | [[Kontextfreie Sprache]]         | nichtdeterministischer [[Kellerautomat]]               | auf der linken Seite darf nur ein [[Nichtterminalsymbol\|NTS]] stehen | verschachtelt<br>$abba$ |
| 3   | [[Rechtslineare Grammatik]] | [[Reguläre Sprache]]             | [[Endlicher Automat]]                                  | Alle Regeln dürfen maximal die Form $A \rightarrow cB$ besitzen       | seriell<br>$aab$        |


> [!hint] Je _höher_ der _Typ_, desto _restriktiver_ die [[Grammatik]] und _weniger mächtig_ die [[Sprachklasse]]


## Regex

> [!warning] Junk State wird zu $\varnothing$ ($(a + b)J + \varnothing = (a+b)^{*}\varnothing = \varnothing$)

> [!warning] Zu jedem Endzustand muss noch ein $+ \epsilon$ ans Ende


## Eigenschaften

| Operation                                           | [[Abgschlusseigenschaften Regulärer Sprachen\|Reguläre Sprache]] | [[Abschlusseigenschaften Kontextfreie Sprachen\|Kontextfreie Sprache]] | [[Abschlusseigenschaften Kontextsensitive Sprachen\|Kontextsensitive Sprache]] | Turing Machine                           |
| --------------------------------------------------- | ---------------------------------------------------------------- | ---------------------------------------------------------------------- | ------------------------------------------------------------------------------ | ---------------------------------------- |
| [[Operationen auf Mengen#Union\|Vereinigung]]       | ✅ -> [[NFA für Vereinigung]]                                     | ✅                                                                      | ✅                                                                              | ✅                                        |
| [[Komplement]]                                      | ✅ -> [[EA zu Komplement]]                                        | ❌                                                                      | ✅                                                                              | ❌ -> Redukton [[Spezielles Wortproblem]] |
| [[Operationen auf Mengen#Intersection\|Schnitt]]    | ✅ -> [[Produktautomat]]                                          | ❌                                                                      | ✅                                                                              | ✅                                        |
| [[Operationen auf Sprachen#Produkt\|Konkatenation]] | ✅ -> [[NFA für Konkatenation]]                                   | ✅                                                                      | ✅                                                                              | ✅                                        |
| [[Klenee-Stern]]                                    | ✅ -> [[NFA für Klenee-Stern]]                                    | ✅                                                                      | ✅                                                                              | ✅                                        |

## Entscheidungsprobleme

| Problem                 | Reguläre Sprache                           | Kontextfreie Sprache          | [[Entscheidungsprobleme Kontextsensitive Sprachen\|Kontextsensitive Sprache]] | Turing Machines               |
| ----------------------- | ------------------------------------------ | ----------------------------- | ----------------------------------------------------------------------------- | ----------------------------- |
| [[Wortproblem]]         | ✅ -> [[Endlicher Automat]]                 | ✅ -> [[CYK Algorithmus]]      | ✅                                                                             | ❔ -> [[Wortproblem TM]]       |
| [[Leerheitsproblem]]    | ✅ -> [[Leerheitsproblem Reguläre Sprache]] | ✅ -> [[Reduzierte Grammatik]] | ❌                                                                             | ❌ -> [[Leerheitsproblem TM]]  |
| [[Endlichkeitsproblem]] | ✅ -> [[endliche Sprachen]]                 | -                             | -                                                                             | -                             |
| [[Äquivalenzproblem]]   | ✅ -> [[Äquivalenz Reguläre Sprachen]]      | ❌                             | ❌                                                                             | ❌ -> [[Äquivalenzproblem TM]] |
Notation: 
- ✅ -> [[Entscheidbarkeit|entscheidbar]]
- ❌ -> [[Unentscheidbarkeit|unentscheidbar]] 
- ❔ -> [[Semi-Entscheidbarkeit|semi-entscheidbar]]

## TRANSFORMATION IN CNF
1. $L := \set{A \in N\ |\ A \rightarrow \epsilon \in P}$
	1. Entferne nur jede Regel in L; lass Vorkommen aber noch stehen
2. [[Entfernen von Kettenregeln]]
	1. Für jedes $A \in N$ berechne $K(A) = \set{B \in N\ |\ A \Rightarrow^{*}B}$ ([[Iteration|iterativ]] von hinten)
	2. $P_{K} := \set{A \rightarrow \beta\ |\ \exists_{B \in K(A)}\ B \rightarrow \beta \in P}$ (alle rechten Regelseiten von $K(A)$)
	3. Entferne aus $P_{K}$ alle Kettenregeln
3. Entferne nicht-**terminierenden** NTS $\overline{\set{A \in N\ |\ A \rightarrow w \in P \land w \in \Sigma^{*}}}$ 
4. Entferne alle nicht **erreichbaren** NTS
5. Hilfssymbole

> [!warning] Die restlichen Regeln für 1. und 2. werden auch erst in 3 oder 4 entfernt!!!!
## Reduktionen
![[Reduktion]]

# Algorithms
## Minimierung
![[Minimierung DFA]]

## KA zu KFG
![[Zustandsmenge eliminieren#In Praxis]]

> [!info] Danach umgekehrt wie KFG -> KA
## KFG -> KA
![[Transformation KFG zu Kellerautomat#In Praxis]]

