- Wenn mehrere [[DEE|DEEs]] ein shared Medium benutzen, muss geregelt werden, wie die Geräte darauf zugreifen



## Übersicht
![[Pasted image 20241009093546.png]]

> [!hint] Durchgesetzt hat sich **stochastischer** Zugriff

- **zentral**:
	- [[Main Frame]] (Zentralrechner) dafür zuständig, dass alle kommunizieren
- **dezentral**: Jeder Teilnehmer muss entscheiden können, ob er gerade zugreifen darf oder nicht
	- deterministisch: durch tokens; Ich kann vorhersagen, wann [[Paket]] ankommt
- **stochastisch**: 
	- [[CSMA]]: jeder teilnehmer muss hören, ob [[Leitung]] frei ist
		- **CD** (Collision Detection): wenn Leitung frei, dürfen alle gleichzeitig drauf zugreifen - [[Kollision (Zugriffsverfahren)|Kollision]] beim Senden muss erkannt werden
		- **CA** (Collision Avoidance): Standard für WLAN
			- Versucht, [[Kollision (Zugriffsverfahren)|Kollisionen]] zu outright zu vermeiden