---
aliases:
  - Cross Industry Standard Process for Data Mining
---
> [[006 Phasenmodelle|Phasenmodell]] für Projekte in [[Data Science]]

> [!hint] Im prinzip genau die gleichen Phasen wie das [[Wasserfallmodell]]


![[Pasted image 20250929104801.png]]
### Business Understanding
>  Anforderung der Analyse
- Was ist das Ziel auf Problemdomäne?
- Was sind Anforderungen an Ergebnis?
- Welche offenen Fragen sollen beantwortet werden?
- Wie könnten <span style="color:rgb(245, 154, 35)">beispielhafte</span> Antworten auf die Fragen aussehen ([[MVP]]-mäßig)?

### Data Understanding
> Welche Daten liegen vor?

- "so lange ich die Daten nicht _sicher_ auf meinem Rechner (mit Backup)" habe, habe ich sie nicht"
- Passen die Daten überhaupt zum gestellten Problem?

> [!hint] [[Statistische Maßzahlen]] gehören hier schon dazu!!!

### Data Preparation
> Können die Daten in der _vorliegenden_ Form verwendet werden?

> [!hint] Meistens: nein lol

> [!warning] Braucht am meisten Zeit -> Fehler finden & beheben etc.

#### Beispiel
- Automarken - Monika hat 500 gefunden, es gibt aber nur 100 weltweit
- trick: die letzten 5% einfach unter "sonstiges" lol
### Modelling
> Welche Verfahren lösen mein Problem?
- see: [[Hub Machine Learning]]

- Alternativen/mögliche Verbesserungen
- tatsächlich Methoden ([[Neural Network]], etc.)

### Evaluation
> Welches Verfahren ist am Besten?

- wie gut ist mein Model?

### Deployment
> Bereitstellung

- Ergebnisse zum Fragesteller präsentieren?
- Ergebnisse in Software integrieren