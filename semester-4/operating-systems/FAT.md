> File Allocation Table

[[Little Endian]], [[Volume Boot Record]]


- gebaut für kleinere Speichermedien (wie Disketten) => mit FAT32 wurden Festplatten ermöglicht
- Idee: Aufteilung der [[Hard Drive|Festplatte]] in **Cluster** = Block aus zusammenhängenden $512$-[[Byte]] großen Sektoren
	- jedes Cluster ist ca $2-16$ kB groß


| Inhalt                                   | Länge (in Sektoren)                                   | Was macht es                                            |
| ---------------------------------------- | ----------------------------------------------------- | ------------------------------------------------------- |
| Bootsektor ([[Volume Boot Record\|VBR]]) | 1                                                     |                                                         |
| infos (FAT32 only)                       | 1                                                     |                                                         |
| (Reserviert)                             |                                                       |                                                         |
| FAT-Tabellen                             | FAT TABLES * Sektoren pro FAT                         | Informationen über alle [[File\|Dateien]] im Filesystem |
| [[Root Directory]]                       | Root Directories * $\frac{32}{BpS}$ (Byte pro Sektor) |                                                         |
| Datenbereich                             | Cluster * Sektoren por Cluster                        |                                                         |
