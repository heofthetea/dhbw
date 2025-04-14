> Power On Self Test

- initialisiert und Testet Hardware => Stellt Fehlerfreiheit sicher
	- Peripherie wie [[Hard Drive]] etc.
	- [[Memory]] und andere Hardware (z.B. [[USB Host Controller]])
- Ausgelöst durch elektrisches Signal beim [[Physical Startup]]
- Rückmeldung via [[Beep Code|Biep Codes]]

> [!hint] HP und Dell haben die längsten [[Booting|Boot]]-Zeiten, weil sie _alle_ Hardware komplett durchtesten.


## Ablauf
1. [[CPU|Prozessor]] prüft sich selbst (ist das wichtigste)
	1. bin ich am Systembus angeschlossen?
	2. Sind alle [[Register]] funktional?
2. [[CPU|Prozessor]] sendet Signal über [[Systembus]] (prüfen, ob Komponenten funktionieren)
	1. funktionieren die [[Interrupt Controller]]?
3. [[CPU|Prozessor]] prüft Systemuhr
4. [[CPU|Prozessor]] prüft [[GPU]]
5. [[Memory]] test
	1. Sind die Blöcke [[Adresse|adressierbar]]?
6. [[CPU|Prozessor]] prüft Tastatur (nur bei heim-PCs)
7. Falls vorhanden: [[CPU|Prozessor]] prüft vorhandene Laufwerke
8. Falls neue Komponenten gefunden: Konfigurationsroutine starten
9. Komponenten mit eigenem Selbsttest werden einbezogen (z.B. SMART ([[Hard Drive|Festplatte]]-Test))

> [!hint] Nach 4. (GPU-test) kann tatsächlich etwas auf dem Bildschirm angezeigt werden

> [!warning] Was bei 5. Memory Test **nicht** gemacht wird: Jede [[Speicherzelle]] testen, sondern nur Blockweise.
