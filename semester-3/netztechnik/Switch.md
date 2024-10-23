> ermöglicht **logisch** einer [[Punkt-zu-Punkt Topologie]]

> [!info] Eine [[Bridge]] mit mehreren [[Port|Ports]]

![[Pasted image 20241023115453.png]]

- entscheidet immer anhand der [[MAC Adresse]], an welchem [[Port]] die [[Nachricht]] weiter geleitet werden muss
	- sieht für receiving [[DEE|Endgerät]] so aus, als wäre es _direkt_ in einer [[1-1 Relation|1:1]] Verbindung
- kann [[Paket|Datenpakete]] cachen -> Erst ganzes [[Paket]] speichern und analysieren, _dann_ forwarden wenn alles okay
- Forwarding wird durch [[IC]] geregelt, nicht wie bei [[Bridge]] durch eine CPU
	- ist effizienter

> [!warning] Muss auch Cyclic Redundancy Check überprüfen, damit er keinen Schrott weiterleitet

> [!hint] ermöglicht [[Duplex-Verbindung|Voll-Duplex-Betrieb]] und benötigt _kein_ Zugriffsverfahren


## Modi
- Cut Through
	- Sobald ich Ziel [[MAC Adresse]] habe -> Weiterleiten
	- fucking fast
	- leitet aber auch [[Kollision (Zugriffsverfahren)|Schrott]] weiter
- Cut Through Collision Free
	- Wartet, bis $64$ Byte empfangen wurden
	- wenn ich da kein Jam Signal finde, kann ich davon ausgehen, dass die [[Paket|Pakete]] in Ordnung sind
