> Bottom-up Verfahren

1. Nimm die zwei Punkte, die am nächsten liegen
	1. mach das für $k$ Cluster
2. Füge iterativ immer einen weiteren nächsten Punkt hinzu
3. Optional: Stoppe Ausbreitung eines Clusters, wenn eine gewisse Distanz zu einem Cluster überschritten ist (dann gehören manche Punkte zu keinem Cluster)

> [!hint] Tendiert dazu, Ketten zu bilden.

> [!hint] Wenn der nächste Punkt zu einem anderen Clsuter gehört, werden die Cluster zusammengefasst.

## Erweiterungen
- [[Wahrscheinlichkeit]], dass ein Punkt zu welchem Cluster gehört
	- Für Punkte zwischen Clustern sinnvoll