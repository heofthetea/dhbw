> [[CSMA]] mit [[Kollision (Zugriffsverfahren)|Collision]] Detection
> Basiert auf Kupfer-[[Leitung]], also für [[Ethernet]]

[[1-persistentes CSMA]]

- max Segmentlänge: $500m$
	- maximal $5$ Segmente pro [[Netzwerk]] --> max $2500m$ Netzwerklänge
	- maximale Laufzeit: $25\mu$-Sekunden (one way)  
		- minimalgröße einer [[Nachricht]]: $64$ [[Byte]] 
- Signallaufzeit -> Wenn Signal von $A$ bei $B$ noch nicht angekommen ist, denkt $B$ es kann senden

> [!warning] **Minimalgröße** einer Nachricht kommt daher, dass $64$ Byte zu senden _länger_ benötigt, als die both-way Signallaufzeit --> ermöglicht [[#Jam-Signal]]

- sobald die ersten $64$ Byte gesendet wurden, kann Sender ohne auf [[Kollision (Zugriffsverfahren)|Kollisionen]] zu überprüfen

### Jam-Signal
> Wird verwendet, um eine [[Kollision (Zugriffsverfahren)]] auf der Leitung zu indicaten

- wird gesendet, sobald ein [[DEE]] erkennt, dass eine Kollision vorliegt
	- Gerät setzt gleichzeitig seine Wartezeit

### Late Collision
- [[Kollision (Zugriffsverfahren)]], die erst erkannt werden würde, nachdem $A$ fertig ist mit senden (i.e. das [[Netzwerk]] ist länger als Maximallänge)
## Grafik
![[Pasted image 20241009101937.png]]