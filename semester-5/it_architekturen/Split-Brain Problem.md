> Problem in [[HA Cluster]] - Was mach ich, wenn ich nicht 100% sicher bin, ob die eine Hälfte kaputt ist?
#### 1. Isolieren
- Man macht trotzdem failover
- Problem: man muss den primären irgendwie isolieren (dass er sich nicht nach kurzer Zeit wieder zurück meldet)
	- Durch [[SAN]] Zoning - dieser Server darf nicht mehr auf den storage zugreifen
		- ganauso zwischen [[Gateway]] und primärserver
	- => Failover muss in den [[SAN]] eingreifen können

#### 2. STNITH (shoot the other node in the head)
- Dem alten einfach den Strom abschießen
- => Dann ist sicher, dass der aus ist

> [!hint] Enterprise Server haben idR einen kleinen Raspi-esque Management-Server mit dabei, der für genau solche Sachen da ist.

