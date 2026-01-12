> Network mentioned??


## Argumentationskette
### Business-Anforderungen
> Was soll ein [[Netzwerk]] haben? (fucking buzzwords)

1. [[Redundanz]] des Netzwerks? + Availability
2. Performance (Latenz, Bandbreite)
3. Skalierbarkeit
4. Preis/Leistung
5. Security: Multi-Tenancy Fähigkeit

### Nur [[Layer 2]]
- [[Switch]]
- [[Layer 2 Network]]

![[Pasted image 20251125164647.png]]
#### Anforderungen
1. ganz gut redundant
2. bgut performant
3. skalierbarkeit so meh
4. Sicherheit: durch [[VLAN]] (aber: durch größe limitiert -> max. 4096 VLANS)

> [!error] Limitiert inherently durch [[Layer 2]] -> wir brauchen [[Layer 3]]

### Mit Layer 3
- untere Schicht: Geht nur darum, [[Paket|Pakete]] redundant und effizient weiterzuleiten
	- -> we don't care about security
- obere Schicht: macht  [[Routing]] auf [[Layer 3]] (VXLAN) (ne art [[VPN]])
	- Enkapsulierung eines [[Paket]] in ein [[UDP]] paket
	- => ermöglicht Abkapselung von Netzwerken

## Externer Zugriff
- einfach mehrstufiges [[NAT]]
- Zwiscen Availability Zones muss man das dann bisschen rumprobieren