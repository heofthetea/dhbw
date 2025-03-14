[[TCP]]

![[Pasted image 20241114144624.png]]

- Sequence Number: geht voran
- Acknowledgment Number: quittiert die vorne übertragene Geschichten -> [[Windowing|Go-Back-n]]
- Flags zwischendrin:
	- SYN: Synchronisierung ([[Handshake]])
	- PSH (push): Hier werden Daten übertragen
	- ACK: Daten werdne quittiert
	- RST: Reset -> komplette Verbindung neu aufgebaut
- Urgent Pointer (URGP): Indikator, wie hoch die priorität des Pakets ist