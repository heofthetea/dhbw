> [[Clustering]] Algorithmus

[[Unüberwachtes Lernverfahren]]

- man sucht wie in [[Nearest-Mean Klassifikator]] den Mittelpunkt von Clustern
- Ziel: Daten in [[Klasse|Klassen]] sortieren
	- iterativ Punkte random Clustern hinzufügen
	- dann Optimierung nach Minimum

> [!hint] Ist nur gut, wenn die Daten linear trennbar sind (aka durch eine $d-1$-[[Dimension|dimensionale]] Ebene beschreibbar)

![[Pasted image 20251124091013.png]]

## Ablauf
1. Wähle zufällige Mittelpunkte
	1. [[Nearest-Mean Klassifikator|nearest-mean]] machen
2. neue Mittelpunkte basierend daraus berechnen
3. repeat bis sich die Mittelpunkte nicht mehr ändern

# k-means++
- Verbesserung -> garantiert optimale Lösung (bzw. macht sie wahrscheinlicher)
- Basically: Anstatt $k$ zufällige Mittelpunkte zu wählen, wähle zuerst einen und wähle die weiteren basierend auf Distanz vom ersten Mittelpunkt
	- => je weiter weg, desto besser
- danach normaler [[k-mean Clustering|k-means]]