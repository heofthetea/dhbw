---
aliases:
  - CPU Jump Prediction
---
> [[CPU]] rät, ob der [[8051 JZ|Jump]] ausgeführt wird oder nicht


[[Sprungabhängigkeit]]
- passiert in der Hardware
	- wenn richtig geraten: yaayyyyyyyy 🥳
	- wenn falsch geraten: [[Instruktion|Befehle]] werden verworfen  => Ziel: minimieren

> [!info] Notationen
> 1. Sprung ausgeführt: "Branch Taken"
> 2. Sprung nicht ausgeführt: "Branch not taken"

> [!hint] Bei unbedingten Sprüngen will man natürlich möglichst früh im Ablauf die Ziel-Adresse berechnen.
> [[Adressierung|Adressberechnung]] schon in `Decode` phase, oder in einer [[Pipelining|Pipeline]]-externen Logik

## Vorhersagetaktiken
### Statisch
- Compiler wählt aus bzw. gibt vor (über ein eigenes Status-[[Bit]])
	- [[Bit]] gesetzt: branch taken
	- [[Bit]] **nicht** gesetzt: branch not taken
- Fest an [[Instruktion|Befehl]] verknüpft
	- `JB`: branch taken
	- `JNB`: branch not taken
- Compiler wählt [[Adresse|Adressen]]:
	- Vorwärtssprung: branch taken
	- Rückwärtssprung: branch not taken

> [!hint] Bei einer Schleife wird z.B. immer davon ausgegangen, dass zurück an den Anfang gesprungen wird.


### Dynamisch
> Entscheidung at Runtime durch [[Steuerwerk]]
- Hardware macht Rückschlüsse aus der Vergangenheit
- Läuft unabhängig von dem Compiler, sondern nur in der [[CPU]]

> [!note] Beispiel: "Wenn der Chef die letzten drei mal Kaffee bestellt hat, wird er nächstes mal wohl kaum Tee bestellen"

#### Als Automat
[[Automat]]
![[Pasted image 20241107090025.png]]

- "strong": lol ich war richtig
- "weakly": lol ich war falsch

#### Mit History Tablefc
BTB Table = Branch Target Buffer
![[Pasted image 20241107090632.png]]

| Adresse des Sprung befehls | Sprung Ziel [[Adresse]] | SN, WN, WT, ST |
| -------------------------- | ----------------------- | -------------- |
- Prozessor kann nachschauen: "Der Jump, den ich geladen hab, liegt an Adresse 42 - was sagt denn meine Tabelle, wo der letztes mal hingesprungen ist?"

> [!hint] Ein [[Instruktion|Befehl]] ohne Historie wird statisch entschieden.

