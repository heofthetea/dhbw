---
aliases:
  - EDW
  - Enterprise Data Warehouse
---
> Single Point of Truth for all Users regarding [[Daten|Data]]
- collects (and consolidates) [[Daten|Data]]  of [[Operative System|Operative Systems]]
- stores them
	- with Snapshots for years -> long-term analysis
- Automatically generates [[Benutzersicht|Views]] für [[Data Science|Data Scientists]] (für Auswertung)

> [!hint] Effektive Auswertung von Daten ist das zentrale Ziel!!!!

![[Pasted image 20251020225858.png]]

## Characteristics
- **subject-oriented** => Ziel nicht saubere Operation, sondern auf [[Object|Objekte]] (Kunde, Firma, Produkt)
- **Integration** => beschreibt diese [[Sichtenkonsolidierung|Konsolidierung]] der daten aus den Op. Systemen
- **Time-variant** => verschiedene Snapshots (Daten immer mit Timestamp versehen!!)
- **Non-volatile** => [[Immutability]] once written
