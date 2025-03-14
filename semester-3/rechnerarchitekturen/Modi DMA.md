## direkt
```mermaid
flowchart LR
	Speicher --> Device
```
- Steuern/adressieren von Speicher (über [[Systembus]])
- Steuern/adressieren Device (passiert über orange Zusatzleitung (s. [[Aufbau DMA]]))
- Danach passiert Datentransfer an Controller vorbei

## indirekt

```mermaid
flowchart LR
A[Speicher] --> C((Controller)) --> Speicher
```
1. Steuern/[[Adressierung|adressieren]] von [[Memory|Speicher]] (Quelle)
2. Transfer: Speicher -> [[DMA Controller|Controller]]
3. Steuern/adressieren Speicher (Ziel)
4. Transfer: [[DMA Controller|Controller]] -> Speicher

> [!hint] Hier wird zwar trotzdem zwischengespeichert, aber man muss trotzdem keine Befehle lesen => Immernoch schneller


> [!info] In modernen [[CPU|CPUs]] mit [[CPU Cache|Cache-Speicher]] kann die CPU nebenher weiterarbeiten => optimization weeeeee

# Zugriffsart
## Burst Mode
> Buskontrolle für alle [[Daten]] (bzw. ein Block)
- ➕ hohe Datentransferrate
- ➖ CPU lange abekoppelt
	- z.B. für [[Interrupt|Interruptbehandlung]] problematisch

## Cycle-steal mode
> Buskontrolle nur für ein [[Byte]]/einen Buszykus

- ➖ niedriger Datendurchsatz
- ➕ CPU arbeitet weiter => ist aber netto immernoch effizienter, als wenn sie alles selbst machen würde

