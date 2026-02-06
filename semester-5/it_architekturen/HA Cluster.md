---
aliases:
  - High Availability Cluster
---

> [!hint] Nutzt [[Speicherbasierte Prozesskommunikation|Speicherbasierte Kommunikation]] mit shared Storage.

- Alle [[Knoten]] im Cluster können gleichberechtigt auf Storage zugreifen

## Failover
- Switchen auf ein redundantes System
- geregelt auf [[Betriebssystem]]-Ebene (damit man's nicht auf Anwendungsebene duplizieren muss)
- **Hot Standby**: Laufender Server, der aber nicht primär genutzt wird (nicht VIP)
- **gegenseitige** Überwachung
- Wenn VIP-Server tot ist:
	- Der Hot Standby fährt sich selbst hoch, gibt sich die richtige IP Adresse, etc.
![[Pasted image 20251121084842.png]]

