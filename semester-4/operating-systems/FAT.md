> File Allocation Table

[[Little Endian]], [[Volume Boot Record]]

- gebaut für kleinere Speichermedien (wie Disketten) => mit FAT32 wurden Festplatten ermöglicht
- Idee: Aufteilung der [[Hard Drive|Festplatte]] in **Cluster** = Block aus zusammenhängenden $512$-[[Byte]] großen Sektoren
	- jedes Cluster ist ca $2-16$ kB groß


| Inhalt                                   | Länge (in Sektoren)                                   | Was macht es                                       |
| ---------------------------------------- | ----------------------------------------------------- | -------------------------------------------------- |
| Bootsektor ([[Volume Boot Record\|VBR]]) | 1                                                     |                                                    |
| infos (FAT32 only)                       | 1                                                     |                                                    |
| (Reserviert)                             |                                                       |                                                    |
| FAT-Tabellen                             | FAT TABLES * Sektoren pro FAT                         | Informationen über Die Daten ~ vgl. [[Superblock]] |
| [[Root Directory]]                       | Root Directories * $\frac{32}{BpS}$ (Byte pro Sektor) |                                                    |
| Datenbereich                             | Cluster * Sektoren por Cluster                        |                                                    |
## File Allocation Table
- der [[Katalog]]
- markiert defekte Cluster
- markiert leere Cluster
- Basically eine [[Liste]]:
	- Für jeden Block wird gespeichert, wo er weiter geht
	- Der Letzte [[FS Cluster|Cluster]] wird mit [[EOF]] markiert

#todo bild 