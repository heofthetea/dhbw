- zweite [[Hash-Funktion]] $r(x)$ bestimmt die <span style="color:rgb(245, 154, 35)">Sprungweite</span> für [[Linear Probing]]
	- versucht, Clustering zu verhindern


#### Anforderungen an $r(x)$ 
- Darf nie $0$ werden (sonst gibt es keine Sprungweite)
- Wertebereich muss kleiner als Länge $N$ der Hash Table sein
	- Alle Werte müssen [[teilerfremd]] zu $N$ sein --> [[Linear Probing]]