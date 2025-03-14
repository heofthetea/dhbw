> Memory Management Unit

[[Virtual Memory Management]]

- fancy für [[Leitwerk]] (kann prolly bisschen mehr)
-  Aufteilung des [[Memory|Speichers]] in  mehrere Blöcke
- übersetzt **virtuaelle** [[Adresse|Adressen]] in physikalische
- kontrolliert Zugriff auf Speicher


## Translation Table
- [[Lookup Table]] im Hauptspeicher
- Speichert diverse Infos:
	- Modify Bit (wurde Page verändert?)
	- Reference Bit (wurde Page angefragt?)
	- Protection Bits (Welche Aktionen - rwe - sind erlaubt?) (s. [[Linux file permissions]])
	- [[Page Frame Number]]

## Translation Lookaside Buffer TLB
- [[Cache]] für MMU