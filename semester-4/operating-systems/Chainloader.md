> Mehrere eigenständige [[Bootloader]] laden sich nacheinander

- Vorgang: "Chainloading"
- [[Bootloader]] können auf verschiedenen [[Partition|Partitionen]]/Mediel liegen
- Beispiel: [[GRUB]]:
	- 1. [[Bootloader]] = Zeigt Bootmenu
	- 2. [[Bootloader]] = ausgewählter Booteintrag wird ausgeführt

> [!warning] [[Bootloader]] an sich müssen an bestimmten Stellen stehen => _kann_ von einem [[Boot Virus]] überschrieben werden!