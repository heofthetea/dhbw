> New Technology [[Filesystem]]

- Nachvolger von [[FAT]] ab Windows NT
	- Proprietary von Microsoft
- Nutzt [[Binary Tree]] Struktur zum Protokollieren von [[File|Dateien]]
- Metadaten jeder [[File|Datei]] steht _in_ der [[File|Datei]], und nicht in Tabelle
- [[Pfad|Pfade]] dürfen $2^{16}$ [[Symbol|Zeichen]] lang sein, und Dateinamen können lang sein (nicht $8.3$-Filenames lol)

## Funktion
- Master File Table ersetzt File Allocation Table
	- Welcher Block gehört zu welcher [[File|Datei]]?
	- Welcher Speicherplatz ist frei?
	- hat fest reservierten Bereich auf der Festplate
- [[Journaling]]
	- Alle geplanten Aktionen stehen im Journal
	- kann rückgängig gemacht werden bei Fehlern