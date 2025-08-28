[[Hard Drive]], [[File|Datei]], [[Filesystem]]

> [!warning] bei [[SSD]] nicht benötigt.
### Problem: Fragmentierung
1. [[File|Dateien]] werden gelöscht -> Es entstehen Löcher
2. Die können mit **Teilen** anderer [[File|Dateien]] gefüllt werden
3. => Je voller die Festplatte, desto mehr Fragmentierung => **arsch langsame** Ladezeiten

> [!hint] alternatives Problem: Eine Datei wird so groß, dass sie an den Anfang eines anderen Blocks "anstößt" -> ein neuer Block muss ganz woanders erstellt werden
## Lösung
- Einzelne Blöcke einer [[File|Datei]] wieder zusammenführen
- Dateien heuristik besser positionieren:
	- [[Betriebssystem|OS]] Daten immer am Anfang
	- selten genutzte Daten weiter hinten

> [!warning] Schreibt komplette [[Hard Drive|Festplatte]] neu => tödlich für [[SSD]]s!!

