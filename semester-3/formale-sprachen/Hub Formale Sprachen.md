[[Mermaid State Diagram]]
[[Template Mermaid State Diagram]]

### sources
[[FSA_Handout.pdf]]

#### Altklausuren
### Prüfungsleistung
- Klausur 90 min
- 10 pages Cheat Sheet
## GoodNotes


## Libraries
[[Library Reguläre Sprachen]]
[[Library Kontextfreie Grammatiken]]

# Vorlesungen
## 1. Basics
[[Alphabet]]
[[Wort]]
- [[Operationen auf Wörtern]]
[[Sprache]]
- [[Operationen auf Sprachen]]
- [[Potenz einer Sprache]]
- [[Klenee-Stern]]
[[Sprachklasse]]
- [[Reguläre Sprache]]
- [[Kontextfreie Sprache]]
- [[Kontextsensitive Sprache]]
- [[Rekursiv aufzählbare Sprache]]

---
[[Automat]]
[[Satz - Korrespondenz von Sprachklassen und Maschinenmodellen]]

[[Endlicher Automat]]
[[Reguläre Sprache]]
[[Grammatik]]
- [[Terminalsymbol]]
- [[Nichtterminalsymbol]]
- [[Produktionsregel]]
- [[Übung 1.32 Binärwörter]]
## 2. Reguläre Sprachen
- [[Regulärer Ausdruck]]
	- [[Regular Expression Beispiele]]
	- [[Rechenregeln Reguläre Ausdrücke]]
	- [[Übung 2.7 Regular Expressions]]
- [[Eigenschaften Regulärer Sprachen]]
	- [[endliche Sprachen]]
### Endliche Automaten
[[Endlicher Automat]]
[[Lauf]]
[[DFA]]
- [[Zustand]]
- [[Übergangsfunktion]]
- [[Startzustand]]
- [[Endzustand]]
- [[Müllzustand]]
[[NFA]]
- [[ε-Übergang (epsilon-Übergang)]]

[[Nachteil DFA]]
[[Äquivalenz DFA und NFA]]
[[Transformation NFA -> DFA]]
- [[epsilon-Abschluss]]
- [[mögliche Folgezustände eines einzelnen Zustand]]
- [[mögliche Folgezustände einer Zustandsmenge]]
[[Produktautomat]]
[[Automat zu Komplement]]

### Automatentransformartionen

[[Transformation RegEx -> NFA]]
- [[NFA für Konkatenation]]
- [[NFA für Vereinigung]]
- [[NFA für Klenee-Stern]]
[[Transformation DFA -> Regex]]
- [[Arden-Lemma]]
[[Quotientenautomat]]
- [[Erreichbarer Zustand]]
- [[Unterscheidbarer Zustand]]
- [[Minimierung DFA]]
[[Transformataion DFA -> Grammatik]]
[[Transformation rechtslineare Grammatik -> DFA]]
### Pumping Lemma
[[Grenzen Regulärer Sprachen]]
[[Pumping Lemma]]
- [[Kontraposition Pumping Lemma]]
- [[Irregularität einer Sprache zeigen]]

### Entscheidungsprobleme
- [[Leerheitsproblem]]
- [[Wortproblem]]
- [[Äquivalenzproblem]]
- [[Endlichkeitsproblem]]


## 3. Chomsky-Grammatiken
[[Grammatik]]
- [[Terminalsymbol]]
- [[Nichtterminalsymbol]]
- [[Startsymbol]]
- [[Produktionsregel]]
[[Ableitung (Sprache)]]
[[Ableitungsbaum]]

[[Chomsky Hierarchie]]
- [[Unbeschränkte Grammatik]]
- [[Monotone Grammatik]]
	- [[Kontextsensitive Grammatik]]
- [[Kontextfreie Grammatik]]
- [[Rechtslineare Grammatik]]

### Kontextfreie Sprachen
[[Kontextfreie Grammatik]]
[[Kontextfreie Sprache]]
[[BNF]]
[[Chomsky-Normalform]]
- [[Transformation in CNF]]
	- [[Entfernen von Epsilon-Regeln]]
	- [[Entfernen von Kettenregeln]]
	- [[Reduzierte Grammatik]]

#### Entscheidungsprobleme
- [[Wortproblem]]: [[CYK Algorithmus]]
- [[Leerheitsproblem]]: Ist [[Startsymbol]] terminierend?
- [[Endlichkeitsproblem]]: nur [[Reguläre Sprache|reguläre Sprachen]] sind [[endliche Sprachen|endlich]] 
- [[Äquivalenzproblem]]: nicht entscheidbar für [[Kontextfreie Sprache]]

#### Kellerautomaten
- [[Kellerautomat]]
	- [[Konfiguration KA]]
	- [[Beispiel Kellerautomat]]
- [[Transformation KFG -> Kellerautomat]]
- [[Transformation Kellerautomat -> KFG]]
	- [[Zustandsmenge eliminieren]]

#### Eigenschaften/Grenzen
- [[Pumping Lemma für Kontextfreie Sprachen]]
	- [[Ableitungsbaum]]
- [[Abschlusseigenschaften Kontextfreie Sprachen]]

### Kontextsensitive Sprachen
[[Kontextsensitive Sprache]]
[[Kontextsensitive Grammatik]]
[[Linear beschränkter Automat]]
[[Abschlusseigenschaften Kontextsensitive Sprachen]]

## 4. Turing Maschinen
[[Turing Machine]]
- [[Bildliche Definition Turing Machine]]
- [[Konfiguration TM]]
	- [[Haltekonfiguration]]
	- [[Folgekonfiguration]]
	- [[erkannte Sprache von TM]]
- [[Äquivalenz 2-Stack KA und TM]]

### Varianten der TM
- [[k-Band Turing Machine]]
	- [[Übung 4.16 2-band Turing Machine]]
- [[Simulation k-Band durch 1-Band TM]]
- [[Simulation NTM durch DTM]]
- [[Linear beschränkter Automat]]

### Unbeschränkte Grammatiken
[[Unbeschränkte Grammatik]]
- [[Transformation Unbeschränkte Grammatik -> TM]]
- [[Transformation TM -> Typ 0 Grammatik]]
	- [[Beispiel 4.20 Turing Machine]]

## 5. Entscheidbarkeit

## 6. Berechenbarkeit

## (7. Komplexitätsklassen)
P = NP PROBLEMM WHUIIEOIEUOIVJOEIRJASLERKJVOIEJS
