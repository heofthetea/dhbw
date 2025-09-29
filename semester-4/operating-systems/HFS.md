---
aliases:
  - HFS+
---
> [[Hierarchical Filesystem]] Plus


- Alle [[Partition|Partitionen]] in Sektoren unterteilt (idR. 512 [[Byte]])
- Mehrere Sektoren zu Blöcken zusammengefasst (ähnlich zu [[FAT]])
- nutzt [[Journaling]]

### Datenstrukturen

| Struktur                  | Was es macht                              |
| ------------------------- | ----------------------------------------- |
| [[Booting\|Boot]] Block   |                                           |
| Volume Header             |                                           |
| Allocation File           | vermerkt freie Blöcke                     |
| [[Katalog\|Catalog]] File | vermerkt Blocke und [[File\|Dateien]]     |
| Attributes File           | speichert Attrigute der [[File\|Dateien]] |


