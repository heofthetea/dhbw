> Extended Filesystem

[[Everything is a file]], [[Little Endian]], [[Journaling]]

- [[Baum|Baumstruktur]] aus [[Inode|Inodes]]
- Basiert auf [[Everything is a file|UNiX Filesystem]]
- Ermöglicht Versionierung -> Backwards Compatibility
- Ermöglicht:
	- $32\,000$ [[Directory|Directories]]
	- maximale Filesize = Größe des [[Filesystem]]
	- **Trim**-Funktion (freie Blöcke werden an Speichermedium weitergereicht) für [[Virtual Filesystem|Virtualisierung]]
	- Online Größenänderung des [[Filesystem|Filesystems]]

![[Pasted image 20250428112546.png]]


## Funktionsweise
- [[Hard Drive]] wird in Blöcke zerlegt
- Alle Infos über [[Filesystem]] steht im [[Superblock]]
- Für jede [[File|Datei]] zeigt eine [[Inode]] auf einen Block


