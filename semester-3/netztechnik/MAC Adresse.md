> Media Access Control


- identifiziert die Hardware eines Gerätes eindeutig
- $6$ [[Byte|Bytes]]: `[ I/G | U/L | OUI | LEDNR ]`
	- $48$ Bits

> [!warning] MAC Adressen nie bearbeiten!!
> Man kann beliebig viel Chaos damit anstellen (doppelte Adressen)

## Ersten beiden Bits
1. Individual/Group
	1. $0$: Individualadresse
	2. $1$: [[Multicast]] bzw. [[Broadcast]] Adresse
2. Universal/Local
	1. 0: von [[IEEE]] verwaltete universaladresse
	2. 1: von Software administriet

## OUI
- $22$ Bit lang
- Organizational Unique Identifier - _weltweit eindeutig!_

## LEDNR
- Fortlaufende Nummer - muss wieder eindeutig sein für jede Gruppe der OUI