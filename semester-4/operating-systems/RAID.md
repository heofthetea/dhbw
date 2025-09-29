---
aliases:
  - Redundant Array of Independent Disks
---
[[Parity]]

- Ziel: [[Redundanz]] von [[Hard Drive|Festplatten]] zur Absicherung gegen Ausfall
- Fällt eine Disk aus, können Informationen wiederhergestellt werden
- [[Parity]] Disks -> z.B.: Auf einer Platte wird [[Redundanz]] als [[XOR]] zweier anderen Platten gespeichert

> [!warning]- [[RAID]] ist **kein Backup**!
> **Wird eine [[File|Datei]] gelöscht, ist sie auf _allen_ Platten weg**
> In einem Backup wäre sie nach wie vor vorhanden

- RAID 5: verteilt [[Parity]] über alle Platten (wird idR bei NAS systemen benutzt)

![[Pasted image 20250428103612.png]]
