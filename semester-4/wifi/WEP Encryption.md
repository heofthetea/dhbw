[[symmetric Encryption]], [[Pseudo-random Function]]

- Auswahl aus einem von 4 Schlüsseln -> wird festgelegt in [[WLAN Frame|Frame Header]], welcher das ist
- IV wird in Kombination mit [[Cryptographic Key|Schlüssel]] als Seed für [[Pseudo-random Function|PRF]] verwendet, um tatsächlichen symmetrischen Schlüssel zu bekommen

> [!warning] Schlüsselströme wiederholen sich -> ermöglicht irgendwann [[Häufigkeitsanalyse]].

> [!warning] Problem: IV ist in Klartext -> Teil des Schlüssels wird veröffentlicht

![[Pasted image 20250424112212.png]]
## Encryption
1. Create a [[Checksum]] (through [[CRC]])
2. Use a [[Cryptographic Key|key]] to [[XOR]]-scramble the [[Nachricht|Message]]

![[Pasted image 20250424112009.png]]