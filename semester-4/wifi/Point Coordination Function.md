> [[Zugriffsverfahren]] realisiert mit [[Access Point]] als Zentraler Koordinator

- [[Access Point]] drängt sich mit einem PIFS (PCF Inter-Frame Space) und [[Broadcast|broadcastet]] einen Beacon-Frame
- [[Polling]]: [[Access Point]] fragt nach und nach alle Stationen, ob sie was senden wollen
	- während dem [[Polling]] kann [[Access Point]] bereits Daten oder [[ACK|Quittierungen]] schicken

> [!hint] Kann abgewechselt werden mit [[Distributed Coordination Function|DCF]], für Stationen, die kein [[Point Coordination Function|PCF]] können.
 
- Beacon-[[Frame]]: Ankündigung "wir machen jetzt [[Point Coordination Function|PCF]]"
- **CF**: Contention-free period

![[Pasted image 20250403102934.png]]


> [!question]- Warum der [[Access Point]], und niemand anders?
> Weil die [[Funkzelle]] durch den [[Access Point]] definiert ist -> nur er erreicht garantiert alle Teilnehmer des [[WLAN|Netzwerkes]].