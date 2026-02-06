- Krankenhaus
- neues System eingeführt, mithilfe von KI-basierter Computer-Aided Diagnostic (CAD)
- Radiologie
- Radiologen betrachten spezielle medizinische Fragestellungen
- CAD-System erkennt automatisch Anomalien

## Was muss bei der Entwicklung und dem Training eines solchen Systems bedacht werden
### a) verwendete Trainingsdaten?
- wie viele Daten?
- Gesunde und kranke Befunde
- Datenschutz
- viele sachen _ohne_ Anomalie
- Daten _nicht_ homogen bzgl. z.B. Alter/Geschlecht
- Verschiedene Hersteller der MRTs verwenden etc.

### b) Definition der Aufgabenstellung für das CAD System
- [[One-Class Classification]] (wir wollen nur "nicht normal")
- nur wichtig krank/nicht krank (nicht: was genau ist krank?)

### c) Evaluation des ML-Modells
- FN (= Anomalie nicht erkannt) ist schlechter als FP
- umfangreiche evaluation 
> [!hint] ist bei medizinischen Sachen besonders wichtig -> weil die Ärzte dem sonst einfach nicht vertrauen lel

### d) praktischer Einsatz
- weiterhin evaluieren (macht es das in der Praxis tatsächlich richtig?)
- Usability von dem ding
- Explainability? (i.e. Grob: warum hat das Modell das entschieden)
	- Visualisierungen können ausgespuckt werden
	- 