[[Kreuzvalidierung]]


- Daten in $k$ Töpfe aufteilen
- immer einmal eins als Testdatensatz verwenden, die anderen als training (????)
- **Cross-Validation-Score** -> [[Arithmetisches Mittel|Mittelwert]] der [[Bewertungsmetriken für Regression|Bewertungsmetriken]] 
	- Zeigt wie "gut" die Kreuzvalidierung ist
	- Sollte immer [[Beschränktheit|untere Schranke]] sein für das Testset

> [!hint] Irgendwer hat gezeigt dass $k \in \set{5, 10}$ idR ganz gute Ergebnisse lliefert
## Beispiel für k = 5

![[Pasted image 20251103091954.png]]

> [!question]- Was ist die [[Varianz]] von dem Ding hier?
> - Verzerrung ist $0.88$ -> gefühlt ganz gut => sprich man bildet das Problem ganz gut ab
> - Wenn Trainingsset minimal verändert wird (Veränderung des $k$) => es verändert sich nicht viel (sprich: [[Varianz]] der Vorhersage ist gering)

