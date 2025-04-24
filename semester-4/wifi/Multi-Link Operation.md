> Ermöglicht [[Wifi 7]], über mehrere [[Frequenzbänder]] gleichzeitig Daten zu schicken

- verbessert Durchsatz, Latency & Robustheit
- ein [[Kanal]] pro [[Frequenzbänder|Frequenzband]]


> [!warning] Alle drei Verbesserungen (Durchsatz, Latenz & Robustheit) gehen auf Kosten der anderen -> Mutual exlusivity.


## Upper Layer [[MAC Adresse]]
- MLD-MAC Addresse (Multi-Link-Device)
- ein Gerät hat mehrere [[MAC Adresse|Adressen]] (eine für jedes [[Frequenzbänder|Band]])
	- [[Access Point]] könnte nicht unterscheiden, ob das ein Gerät, oder 3 verschiedene sind
	- => MLD-MAC löst dieses Problem
	- bisherige [[MAC Adresse]] wird zu "Lower MAC Address"

![[Pasted image 20250410113428.png]]


## Durchsatzverbesserung
- über dem Pfeil: gesendet von [[Access Point]]
- unter dem Pfeil: gesendet von Station
- mögliches Problem: auf jedem [[Kanal]] sind auch noch andere Geräte -> kann durch [[Zugriffsverfahren]] zu Verzögerungen kommen
	- Im schlimmsten Fall: **Überholungen**, da ein Kanal viel besser geht als ein anderer

![[Pasted image 20250417093943.png]]

## Latenzverbesserung
- einer der drei Kanäle wird am schnellsten wieder frei sein => im Schnitt eine Optimierung
![[Pasted image 20250417094155.png]]

## Robustheit
- man kann auf allen drei Kanälen **dieselbe** Daten schicken => geht aber auf Kosten der Datenrate

![[Pasted image 20250417094254.png]]