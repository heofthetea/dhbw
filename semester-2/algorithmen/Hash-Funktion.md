> Ist eine Einweg-Funktion 
$$h: Object \longrightarrow \mathbb{N}$$

see: [[Modulo]]

[[Abbildung]] von [[semester-2/algorithmen/Schlüssel|Keys]] auf eine [[Teilmenge]] der Natürlichen Zahlen
- Wertebereich von h muss:
	- deutlich größer sein als die tatsächliche Anzahl der [[semester-2/algorithmen/Schlüssel|Keys]]
	- deutlich kleiner als die Zahl der _möglichen_ Keys
> [!info] Muss auch einfach zu berechnen sein!! -> $O(1)$

- sollte möglichst gut streuen --> [[Kollision]] unlikely
- Clustering sollte vermieden werden (wäre dann gleich scheiße wie sortiertes [[Array]])