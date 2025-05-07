[[MMU]]

> [!warning] **Keine** [[Speicherverwaltung]]

> [!info] **gelöstes Problem**: Programme laufen auf dem selben physischen [[RAM]], aber sollten nicht auf [[Daten]] von anderen [[Prozess|Prozessen]] zugreifen

### fixe Partitionierung
- Aufteilung in fix große Blöcke
- Problem: **interne Fragmentierung** - dead space am Ende von [[Segment|Segmenten]]
	- $P$ braucht nur $1kb$ - bekommt aber $2kb$ allocated, weil dass die Segmentgröße ist
	- => $1kb$ des allocated Space ist reserviert, kann aber nie genutzt werden

### variable Partitionierung
- [[Memory]] wird dynamisch in _unterschiedlich_ große Blöcke unterteilt
-  $phy\ = virt + base \leq base + limit$ 
- Problem: **Externe Fragmentierung**
	- [[Prozess]] $P_1$ braucht $2kb$ [[Memory]]
	- $P_{2}$ bekommt [[Memory]] danach allocated 
	- $P_{1}$ wird fertig => $P_{3}$ braucht nur $1kb$, wird also dahin geschoben, wo $P_{1}$ war
	- jetzt gibt es ein **Loch** zwischen dem Ende von $P_{3}$ und dem Anfang von $P_{4}$


