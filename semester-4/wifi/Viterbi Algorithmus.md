[[Hamming Distanz]], [[Automat]]

- [[Depunktierung]] fügt $X$se ein
- Ziel: Interpretation, wofür die $X$ stehen -> Ziel: [[Hamming Distanz]] minimieren
- [[Endzustand]] mit geringster [[Hamming Distanz]] ist "Gewinner" -> [[Backtracking]] (immer zum Vorgängerzustand mit der geringsten [[Hamming Distanz]] gehen)

#klausurrelevant

> [!info] Einschwingphase: Zeit, solange noch kein "Trellis Zustand" für jeden [[Zustand|Automatenzustand]] existiert

### Trellis
- [[Baum]]-artige Struktur
- Trellis-[[Knoten]]: Beinhaltet die **kumulative** [[Hamming Distanz]] zwischen den $y \in Y$ des gegangenen [[Pfad|Pfades]] und der eingegangenen [[Nachricht]] $M$
## Algorithmus oder so
1. [[Zustandsdiagramm aus Faltungscodierer]] $A$ aufbauen (wird in Klausur gegeben)
2. Für jedes [[Bit]]-Paar aus der empfangenen [[Nachricht]]:
	1. vom aktuellen Automatenzustand - welche [[Übergangsfunktion|Übergänge]] gibt esin 
	2. Einzeichnen - Als Trellis-Zustand den [[Hamming Distanz|Hamming Abstand]] eintragen
3. Wenn Trellis fertig aufgebaut: Finde [[Blatt]] mit niedrigstem Wert
	1. Backtrace den [[Pfad]] so dass der [[Hamming Distanz|Hamming Abstand]] niedrig bleibt
	2. Die Beschriftungen der [[Übergangsfunktion|Übergänge]] von links aus auslesen -> Das ist die [[Nachricht]]

> [!warning] nicht den Output $y \in Y$ aus dem [[Automat|Automaten]] auslesen, sondern den Input $u_{0}$!!

> [!hint] Für Optimierung: immer nur besten [[Pfad]] weiterverfolgen -> macht das ganze [[lineare Laufzeit|linear]].
### pseudo-code
```python
automaton = Automaton() # s. Zustandsdiagramm
def viterbi(msg):

for (i, j) in msg:
	
```


## Mit [[Punktierung]]

> [!hint] Die $X$-bits werden einfach ignoriert -> keine [[Hamming Distanz]] bilden
