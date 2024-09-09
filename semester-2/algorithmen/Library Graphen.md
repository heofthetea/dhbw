ein [[Graph]] ist eine Sammlung aus [[Knoten]] (Datensätzen) und deren [[Relation|Beziehungen]] zueinander ([[Kante|Kanten]])
- [[gerichteter Graph]]: [[Kante|Kanten]] habein eine Richtung
- [[ungerichteter Graph]]: [[Kante|Kanten]] haben keine Richtungen
	- Besonderheit: [[Adjazenzmatrix]] ist symmetrisch along the diagonal
- [[beschrifteter Graph]]: [[Knoten]] und/oder [[Kante|Kanten]] sind beschriftet
	- bei Knoten: Knote hat Namen
	- häufigster Fall: [[Gewichteter Graph]]: [[Kante|Kanten]]beschriftung ist numerisch --> jede Kante hat ein <span style="color:rgb(245, 154, 35)">Gewicht</span> 
- [[verbundener Graph]]: Jeder [[Knoten]] $A \in G$ ist von jedem anderen Knoten $A \in G\textbackslash \set{A}$ erreichbar

> [!warning] Ein Knoten $K$ ist nur von sich selbst erreichbar, wenn auch eine [[Kante]] $(K, K)$  existiert!

### Darstellung 
- [[Graph]] wird definiert durch zwei [[Menge|Mengen]]:
	- $V$ - die [[Menge]] an [[Knoten]]
	- $E$ - die [[Menge]] der [[Kante|Kanten]] (Edges)
		- jede [[Kante]] wird als [[Tupel]] `(from, to)`  dargestellt
- [[Adjazenzmatrix]]:
	- [[Knoten]] werden der Reihe nach in Titel-Reihe und -Spalte geschrieben
		==> Größe der [[Adjazenzmatrix|Matrix]] immer $V^{2}$
	- [[Konstante Laufzeit|sofortiger]] Zugriff, da 2-dimensionales [[Array]]
	- Sehr schlechte Speicherkapazität (meiste Einträge sind $0$)
- [[Adjazenzliste]]:
	- Für jeden [[Knoten]] wird eine [[Liste]] $L_{K}$ erstellt
		- $L_{K}$ enthält alle von $K$ ausgehenden [[Kante|Kanten]]
	- effizienter Speicher, da nur [[Kante|Kanten]] gespeichert werden, die es tatsächlich gibt
	- schlechtere Zugriffszeiten (s. [[Vor- und Nachteile von Listen]])

> [!hint] [[Adjazenzmatrix|Matrizen]] sind bei **dichten** [[Graph|Graphen]] (= viele [[Kante|Kanten]]) besser; [[Adjazenzliste|Listen]] hingegen, wenn es signifikant mehr [[Knoten]] als [[Kante|Kanten]] gibt


## Operationen
> [!hint] Beide dieser Operationen sind nur auf [[Gewichteter Graph|gewichteten Graphen]] sinnvoll lol
### [[Minimaler Spannbaum]]
- Aufgabe: Finde einen [[Baum]], der alle [[Knoten]] aus $G$ beinhaltet, und dabei die **Summe der Kantengewichte** kleinstmöglich ist
- [[Prim Algorithmus]]: Textbook [[Greedy Algorithm]]
	1. Wähle beliebigen Startknoten
	2. füge [[Iteration|iterativ]] die ausgehende [[Kante]] mit dem kleinsten Gewicht (und ihren Zielknoten) zu der [[Menge]] an besuchten Knoten/Kanten hinzu
		1. Dabei **darf** der Zielknoten noch nicht besucht sein! (sonst: [[Zyklus]])

### [[kürzester Pfad]]
- ein [[Pfad]] ist eine [[Folge]] an [[Knoten]], bei der für jeden [[Knoten]] eine [[Kante]] zu seinem Nachfolger existiert
- [[Dijkstras Algorithm]] findet kürzeste Pfade von einem Startknoten zu jedem anderen Knoten im Graph --> [[Breadth-First Traversion]] 
	1. Setze <span style="color:rgb(245, 154, 35)">aktuellen Knoten</span> $v_{c}$ auf denjenigen, der am <span style="color:rgb(245, 154, 35)">kürzesten</span> von <span style="color:rgb(245, 154, 35)">Startknoten</span> weg ist
		1. Speichere aktuelle Distanz und Vorgängerknoten auf diesem [[kürzester Pfad|kürzesten Pfad]] 
	2. <span style="color:rgb(245, 154, 35)">Update</span> die Distanzen für jeden Nachbarn von $v_{c}$ 
	

 