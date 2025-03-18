> Advanced programmable [[Interrupt Controller]]

- verteilt [[Interrupt]]s in Mehrprozessorsystemen

> [!warning] Muss aber von [[Betriebssystem]] unterstützt werden

## Aufbau
1. Local [[APIC]] an [[CPU]]
2. [[IO]] [[APIC]] (liegt auf [[Motherboard]])

![[Pasted image 20250317101718.png]]


## Funktionsweise
- IO APIC besitzt Redirection Table (wie [[Routing Tabelle]] oder [[NAT]])
	- an welche [[CPU]] muss [[Interrupt]] gesendet werden?
- IO APIC nimmt [[Interrupt]] von Hardware entgegen
- über [[Systembus]] an local [[APIC]]s je nach Info über Redirection Table