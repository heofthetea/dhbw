> Definiert die Garantie, wie oft eine [[Nachricht|Message]] konsumiert werden soll



| Level | Wie oft        | Analogie                 |
| ----- | -------------- | ------------------------ |
| 0     | At most once   | [[UDP\|Fire and Forget]] |
| 1     | At leaast once |                          |
| 2     | Exactly once   |                          |

## At most once
- minimaler load für Netzwerk
- [[UDP|Fire and Forget]] -> gibt keine [[ACK|Acknowledges]] 

> [!hint] [[TCP]] garantiert, dass die [[Nachricht|Message]] beim [[Message Broker|Broker]] ankommt -> ob es den Subscriber erreicht, ist unklar.

> [!hint] In dem meisten Fällen machen wir in [[IoT]] QoS 0.

![[Pasted image 20251022090431.png]]
## At least once
- garantiert, dass jeder Subscriber die [[Nachricht|Message]] mindestens einmal bekommt
- Sender [[Prozess Blocking|blockt]], bis er [[ACK]] erhält
	- [[Nachricht]] wird nach einer gewissen Zeit versucht, nochmal zu senden wenn kein ACK kommt ([[Backwards Error Correction]])
![[Pasted image 20251022090854.png]]


## Exactly Once
- zusätzliche [[Nachricht]] vom Receiver

![[Pasted image 20251022091550.png]]