[[Zugriffsverfahren]]

> [!info] Wird benötigt, sobald mehr als zwei Teilnehmer an einem [[Shared Medium]] hängen

### Verschiedene Ansätze
1. **zentral**: Ein zentraler Rechner ([[Main Frame]] regelt zugriff
	1. ist ziemlich umständlich und scaled kacke
2. **dezenral**: Teilnehmer müssen untereinander entscheiden
	1. [[Determinismus|deterministisch]]: Es kann immer eindeutig festgelegt werden, wer die [[Leitung]] bekommt
		1. Beispiel: [[Token Ring]]
	2. **stochastisch**/random-access: [[Nichtdeterminismus|nichtdeterministisch]]
		1. Beispiel: [[CSMA]]

### Definition: [[semester-3/netztechnik/Kollision]]
> [!info] Zwei Geräte senden gleichzeitig auf der [[Leitung]] => Es entsteht Gibberish.

> [!hint] Eine Kollision wird vom Receiver durch ein Fehlschlagen der [[CRC]] [[Checksum]] erkannt.

> [!warning] Selbst eine ein-Bit Überlappung an Ende/Anfang eines [[Frame|Frames]] führt zu einer [[semester-3/netztechnik/Kollision|Kollision]]

## ALOHA
> [!info] Eines der ersten Zugriffsverfahren -> mittlerweile obsolet

- Sobald Sender ein [[Frame]] zum Senden hat -> abfeuern
- Sender wartet einen timer ab; wenn innerhalb der Zeit kein Acknowledgement vom Receiver zurück kommt, wird von [[semester-3/netztechnik/Kollision|Kollision]] ausgegangen
	- Sender wartet zufällig generierte Zeit; dann wird Paket erneut versendet
## CSMA - Carrier Sense Multiple Access

> [!info] **Idee**: Erkennen ob gerade etwas auf der [[Leitung]] liegt (= Sense). Wenn ja -> nicht senden

- [[1-persistentes CSMA]]: 
	- Jedes Gerät wird mit einer Wahrscheinlichkeit von $1$ ($\approx 100\%$) senden => **sobald** die Leitung frei ist
- p-persistentes [[CSMA CD|CSMA]]: 
	- In Zeitslots unterteilt
	- Jedes Gerät sendet mit einer Wahrscheinlichkeit $p$ - wartet ansonsten auf den nächsten Slot
- nicht-persistentes CSMA: 
	- es wird immer ein Timer generiert
	- wenn Timer abgelaufen und Leitung frei => senden
	- ansonsten: neuen Timer generieren

