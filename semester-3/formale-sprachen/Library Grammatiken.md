
## Abschlusseigenschaften

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
# Reguläre Sprachen
s. [[Library Reguläre Sprachen]]

# Kontextfreie Sprachen
[[Kontextfreie Grammatik]]
- beschreiben [[Kontextfreie Sprache]]
- Bedingung: Jede [[Produktionsregel|Regel]] muss **genau** ein [[Nichtterminalsymbol]] auf der linken Seite stehen haben

## CNF
- [[Chomsky-Normalform]]
- Im Prinzip sind [[Kontextfreie Grammatik|Kontextfreie Grammatiken]] nur in dieser Form handhabbar
- _einzige_ Erlaubte Regeln (ähnlich zu [[Rechtslineare Grammatik|rechtslinear]]):
	1. $N \rightarrow AB$ ([[Nichtterminalsymbol|NTS]] zu $2$ [[Nichtterminalsymbol|NTS]])
	2. $N \rightarrow \alpha$ ([[Nichtterminalsymbol|NTS]] zu [[Terminalsymbol|TS]])

> [!hint] $S \rightarrow \epsilon$ ist erlaubt, solange $S$ das [[Startsymbol]] ist und auf keiner rechten Regelseite vorkommt.


### Transformation
> [!info] Jede [[Kontextfreie Grammatik]] kann zu [[Chomsky-Normalform]] normiert werden. 

[[Transformation in CNF]]
1. [[Entfernen von Epsilon-Regeln]]
	1. Finde alle [[Produktionsregel|Regeln]] der Form $N \rightarrow \epsilon$
	2. Füge jeder rechten Regelseite, auf der $N$ vorkommt, eine neue Regel hinzu, in der $N$ entfernt wurde (also mit [[leeres Wort|leerem Wort]] belegt wurde)
	3. entferne die Regel
	4. (repeat für alle Regeln der Form)
2. [[Entfernen von Kettenregeln]]
	1. Finde alle [[Produktionsregel|Regeln]] der Form $A \rightarrow B$
	2. Für jede rechte Regelseite der Regel $B \rightarrow ...|...|...$ : Füge diese Regel zu $A$ hinzu
	3. entferne $B$ 

> [!warning] Achte auf [[transitiv|Transitivität]] $A \Rightarrow C \Rightarrow B$ muss auch berücksichtigt werden!

3. [[Reduzierte Grammatik|reduziere Grammatik]]
	1. entferne alle nicht terminierenden [[Nichtterminalsymbol|NTS]]
	2. entferne alle nicht _erreichbaren_ [[Nichtterminalsymbol|NTS]]
4. Umformen der überbleibenden [[Produktionsregel|Regeln]] in [[Chomsky-Normalform|CNF]]
	1. 1. $A \rightarrow ab \leadsto \set{A \rightarrow aX_{b}, X_{b} \rightarrow b}$
	2. $A \rightarrow aB \leadsto \set{A \rightarrow X_{a}B, X_{a} \rightarrow a}$
	3. $A \rightarrow BCD \leadsto \set{A \rightarrow BX_{CD}, X_{CD} \rightarrow CD}$

## Kellerautomaten
- [[Kellerautomat]] ist [[NFA]] mit [[Stack]]
	- ist immer nichtdeterministisch (wenn er das nicht wäre, wäre er echt schwächer)
	- Ein [[Lauf]] akzeptiert wenn [[Stack]] leer ist --> Es gibt keinen [[Endzustand]]
- Bei jedem Übergang wird _oberstes_ [[Symbol]] von [[Stack]] gelesen, und beliebig viel geschrieben
- [[Konfiguration KA]]: $(q, w, \gamma)$ (Zustand, noch zu lesende Eingabe, [[Stack]] (von oben nach unten))

> [!hint] [[Kellerautomat]] braucht eigentlich keine [[Zustand|Zustände]] - der [[Stack]] alleine ist mächtig genug.

### Transformation Grammatik -> Kellerautomat
[[Transformation KFG zu Kellerautomat]]
- Im Prinzip simuliert der [[Stack]] eine [[Ableitung (Sprache)|Ableitung]] eines [[Wort|Wortes]]
- Dabei wird mit [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] eine [[Produktionsregel|Regel]] angewendet, wenn ein [[Nichtterminalsymbol|NTS]] vom [[Stack]] gelesen wird
	- wenn [[Terminalsymbol]] gelesen wird und dem eingelesenen [[Symbol]] entspricht, wird [[Stack]] kleiner

### Transformation Kellerautomat -> Grammatik
[[Transformation Kellerautomat zu KFG]]
1. [[Zustandsmenge eliminieren]] (das ist fucking Arsch und unübersichtlich)
2. Analog zu [[Transformation KFG zu Kellerautomat]] zurück übersetzen

#### Zustandsmenge eliminieren
[[Zustandsmenge eliminieren]]
1. Gehe durch jede einzelne existierende [[Übergangsrelation]] durch
2. Kategorisiere die [[Übergangsrelation]] anhand von [[Zustandsmenge eliminieren#Bild|Bild]] (wie viele Symbole werden von [[Stack]] gelesen?)
3. Für jede freie [[Zustand|Zustands]]-Variable $q_{i}$:
	1. Alle [[Permutation|Permutationen]] durchgehen und generierte [[Übergangsrelation]] hinzufügen
4. Umgang mit  [[Stack]]-[[Startsymbol]]: [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] $(q', \epsilon, Z', [q_{0}\ Z_{0}\ q], q')$ für jeden [[Zustand]] $q$ hinzufügen

## Pumping Lemma
[[Pumping Lemma für Kontextfreie Sprachen]]
- Funktioniert genauso wie [[Pumping Lemma|Pumping Lemma für Reguläre Sprachen]]
- aber: Wortaufteilung nun als $uv^{h}wx^{h}y$ 
