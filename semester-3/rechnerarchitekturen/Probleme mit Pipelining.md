
## Hardware
[[Pipelining]]
### Gleichtakt
```mermaid
flowchart LR
A[ ] --> b[ ] --> c[ ] --> d[ ] --> e[ ]
```
- sind die einzelnen Komponenten ungleich schnell => andere müssen warten (= stall)
- Abhilfe: die (langsamen) Prozesse beschleunigen
	- Turch Teilen -> Einen langsamen Prozess in zwei Aufteilen

### allgemeine Zugriff auf Resource ([[Memory|Speicher]])
- OF, W -> [[Datenspeicher]]
	- Problem mit [[Harvard-Architektur]]
	- verschiedene Stufen müssen auf Ressource zugreifen (i guess)
- Abhilfe: Dual Ported [[RAM]]

### Bandbreite
- [[Byte]] pro Sekunde
- Abhilfe: schneller Speicher (-> [[CPU Cache|Cache]])

### Parameterübergabe
(wird oft weggelassen bei der Aufzählung lol)
- Daten aus einer Stufe müssen an eine andere Stufe weitergegeben werden => wo werden die zwischengespeichert?

```mermaid
flowchart LR
a[ ] --a--> b[ ] --b--> c[ ]
```


## Software

- [[Data Hazard]] - Befehl braucht Daten, die von vorherigem Befehl berechnet wurden
- [[Sprungabhängigkeit]] - Nach einem Jump dürfen die bereits geladenen Befehle nicht mehr ausgeführt werden