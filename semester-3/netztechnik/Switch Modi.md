[[Switch]]
## Store & Forward
- DFefault Zustand
- [[Frame]] wird _komplett_ gespeichert und untersucht

> [!hint] Kann [[CRC]] betrachten und entscheiden, ob er Schrott empfangen hat

## Cut through
- Sobald ich Ziel [[MAC Adresse]] habe -> Weiterleiten
- fucking fast
- leitet aber auch [[semester-3/netztechnik/Kollision|Schrott]] weiter

## Cut Through Collision Free
[[CSMA]]
- Wartet, bis $64$ Byte empfangen wurden
- wenn ich da kein Jam Signal finde, kann ich davon ausgehen, dass die [[Paket|Pakete]] in Ordnung sind
	- man kann auch davon ausgehen, dass nicht mehr unterbrochen wird, weil jetzt alle Teilnehmer wissen, dass jemand sendet