> Pre-[[Booting|boot]] eXecution Environment

- Ermöglicht [[Booting]] remotely aus dem [[Netzwerk]]
- Kein lokales Medium ist notwendig
- Netzwerkkonfiguration via [[DHCP]] => wenn [[IP]] Information abgeholt wird, wird auch die [[PXE]] Information abgeholt
- Netzwerkkarte wird als **bootfähiges Medium** von [[BIOS]] erkannt
	- [[BIOS]] weiß noch nicht, ob da tatsächlich eine [[Master Boot Routine|MBR]] hinter steckt (wenn nicht: mach einfach  mit nächstem Medium weiter)


> [!warning] Netzwerkkarte muss [[PXE]]-fähig sein

> [!warning] TFTP ist nicht verschlüsselt => [[PXE]] sollte demnach nur in geschützten Netzwerken passieren.

## Ablauf

![[Pasted image 20250414112144.png]]