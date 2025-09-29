- während der Ausfürhung eines [[Kritischer Abschnitt|kritischen Abschnitts]] eines [[Prozess|Prozesses]] werden alle [[Interrupt|Interrupts]] maskiert
- Auch das [[Betriebssystem]] kann den [[Prozess]] nicht unterbrechen

> [!hint] acquire/release Mechanismus

> [!hint] Ist eines der ältesten Mechanismen

### Vorteile
- einfach
### Nachteile
- ggf. wird `release` vergessen
- Die Zeit läuft asynchron ([[Clock]] kann keinen [[Interrupt]] auslösen)
- ggf. hoche Reaktionszeiten bei [[IO]] [[Interrupt]]
- Nicht für Mehrprozessorbetrieb nutzbar