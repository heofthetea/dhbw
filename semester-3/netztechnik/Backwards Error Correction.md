> Error Correction mit [[ACK|Quittungen]]

> [!hint] Invalide Daten werden erkannt durch z.B. [[CRC]]

- Sender schickt Nachricht, Empfänger schickt Acknowledgement, wenn er Daten empfangen hat
- Timer wird gesetzt - innerhalb der Timerzeit muss ein Acknowledgement zurück kommen
	- ist Timer ohne Quittung abgelaufen => nochmal schicken

![[Pasted image 20241106101336.png]]