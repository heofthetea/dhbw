> Wie der Descriptor für [[i386]] aufgebaut ist

[[Segmentverwaltung mit Tabellen]]
- Eintrag in der [[Lookup Table]] für [[Segmentierung]]

![[Pasted image 20241024103310.png]]


- Länge: $8$ [[Byte]] ????????
- Segment Limit: 20 bit
	- max. Größe: (byte granular $0$) -> $1M$ Byte
	- Page granular: ($1$) -> [[Page]] $4KB$ 
	- gesamt: $4\ GB$
- Status/Rechte:
	- $p = 1$: Segment im [[Memory|Speicher]]

## Realisierung
- für jede [[Adresse|Adressumsetzung]] -> [[Lookup Table|Tabelleneintrag]] mit Speicherzugriffen lesen ($8$ Byte)
	- Problem: ist langsam (weil Tabelle im Hauptspeicher)
- Abhilfe: "Tabelle" mit Zuordnung in [[CPU]] [[Register|Registern]] 



![[Pasted image 20241024104649.png]]
- Bei [[Adressierung|Adressumsetzung]]: Wert aus pseudo-Tabelle wird genommen
- Bei Änderung im Selector: pseudo-Tabelle wird aktualisiert