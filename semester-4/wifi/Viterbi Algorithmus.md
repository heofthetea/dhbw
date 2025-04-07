[[Hamming Distanz]], [[Automat]]

- [[Depunktierung]] fügt $X$se ein
- Ziel: Interpretation, wofür die $X$ stehen -> Ziel: [[Hamming Distanz]] minimieren
- [[Endzustand]] mit geringster [[Hamming Distanz]] ist "Gewinner" -> [[Backtracking]] (immer zum Vorgängerzustand mit der geringsten [[Hamming Distanz]] gehen)

#klausurrelevant

> [!info] Einschwingphase: Zeit, solange noch kein "Trellis Zustand" für jeden [[Zustand|Automatenzustand]] existiert


## Algorithmus oder so
1. [[Zustandsdiagramm]] für [[Faltungscodierer]] aufbauen/irgendwo her holen/idfk
2. Für jedes [[Bit]]-Paar aus dem Input:
	1. vom aktuellen Automatenzustand - welche [[Übergangsfunktion|Übergänge]] gibt es?
	2. Einzeichnen - Als Trellis-Zustand den [[Hamming Distanz|Hamming Abstand]] eintragen

#todo: Pseudo-Code


## Mit [[Punktierung]]

> [!hint] Die $X$-bits werden einfach ignoriert -> keine [[Hamming Distanz]] bilden
