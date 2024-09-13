> Steuert die Abläufe einer [[CPU]]


- Input: **Statusmeldung** (engl.: "Conditioning Code"), **Instruktionen**
	- "Rechnung erfolgreich"
	- "Ergebnis negativ" ...
- Output: **Steuersignal** (engl.: "Gating Signal") --> [[Operationswerk]]


```mermaid
flowchart LR
	A[Komponent] --"Conditioning Code"--> Steuerwerk((Steuerwerk))
	Steuerwerk --"Gating Signal"--> O[Operationswerk]
	
```





