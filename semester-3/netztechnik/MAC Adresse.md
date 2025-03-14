> Media Access Control

- identifiziert die Hardware eines Gerätes eindeutig
- $6$ [[Byte|Bytes]]: `[ I/G | U/L | OUI | LEDNR ]`
	- $48$ Bits

> [!warning] MAC Adressen nie bearbeiten!!
> Man kann beliebig viel Chaos damit anstellen (doppelte Adressen)


> [!hint]- Wenn auf Leitung übertragen, wird _byteweise_ punktgespiegelt
> $0000\ 1100 \leadsto 0011\ 0000$ ; `0C ~> 30`
## Ersten beiden Bits
1. Individual/Group
	1. $0$: Individualadresse --> [[Unicast]]
	2. $1$: [[Multicast]] bzw. [[Broadcast]] Adresse
2. Universal/Local
	1. $0$: von [[IEEE]] verwaltete universaladresse -> wurde mir gegeben
	2. $1$: von Software administriet -> hat Admin von der Hand vergeben

## OUI
- $22$ Bit lang
- Organizational Unique Identifier - _weltweit eindeutig!_

## LFDNR
- Fortlaufende Nummer - muss wieder eindeutig sein für jede Gruppe der OUI