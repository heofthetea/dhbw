> Controller für [[Direct Memory Access]]

![[Pasted image 20241107100616.png]]

### Bestandteile
- Steuerung
- [[Register]]
	- Adressregister (Quelle + Ziel)
	- Zähler -> wie viele [[Paket|Pakete]] hab ich schon verschickt, wie viele muss noch?
	- Konfigurations-/Statusregister (um [[Modi DMA|Modi]] einzustellen)
	- Daten-/Speicherregister
- Anschlüsse
	- zum [[Systembus]] (bidirektionale Adressleitungen)
	- Datenleitungen
	- [[Steuerleitung|Steuerleitungen]] (nach & von der [[CPU]])
		- insbesondere: [[Bus Request]]
	- Steuerleitungen zum I/O-Interface
- (optional eigener/interner Speicher)