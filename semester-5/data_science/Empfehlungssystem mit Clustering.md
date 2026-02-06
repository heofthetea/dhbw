


## Problemstellung
- So eine matrix:
	- Buchstaben sind Nutzen
	- Zahlen sind Künstler
	- hier: binär (entweder hört, oder hört nicht)
- => Wie ähnlich sind sich Nutzer? (basiert darauf, welche Künstler sie hören)
- => Wie ähnlich sind sich Artists? (basiert darauf, wie viele Nutzer die Artists gleichzeitig hören)

![[Pasted image 20251124100818.png]]


## Machen
1. Interaktionsmatrix erstellen (die von oben)
	1. => hat viele Nullen
2. [[k-mean Clustering]] aus einem _gesampleten_ Data Set (ca. 20% der Daten)
	1. => [[Kreuzvalidierung]], um zu schauen wie gut das [[Clustering]] ist
3. Validierung
4. (more stuff)