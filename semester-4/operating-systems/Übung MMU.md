[[Paging]], [[Virtual Memory Management]], [[MMU]]

#klausurrelevant 
- Ein neuer [[Prozess]] wird gestartet und es muss der Adressraum reserviert werden
- Programloader legt den Adressraum entsprechend der Tabelle an

#todo screenshot once Folien available
## Annahmen
- Page size: `0x2000`



## Bearbeitung

| Bereich          | Virt. Startadresse | Phy. Startadresse | Größe  | Reservierte Größe | Flags    |
| ---------------- | ------------------ | ----------------- | ------ | ----------------- | -------- |
| Code             | 0x10000            | 0x40000           | 0x1000 | 0x2000            | C, RO    |
| Konstanten       | 0x11000            | 0x42000           | 0x2000 | 0x2000            | D, RO    |
| Statische Daten  | 0x13000            | 0x44000           | 0x1000 | 0x2000            | D, RW    |
| [[Stack]]        | 0xfd000            | 0x46000           | 0x2000 | 0x2000            | D, C, RW |
| [[Program Heap]] | 0x20000            | 0x48000           | 0x4000 | 0x2000            | D, RW    |
|                  | 0x22000            | 0x4a000           |        | 0x2000            | -//-     |

> [!warning] Heap Space muss aufgeeteilt werden, da `0x4000` größer ist als die Page Size


