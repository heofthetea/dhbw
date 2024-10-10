 > Für Zugriff auf [[Memory]] können [[Steuerleitung]] und Datenleitung verschieden getrennt werden
 

> [!hint] vollständig getrennte Leitungen werden nicht zum programmieren angeboten

- kann alles getrennt sein
	- seperate Leitung für [[Befehlsspeicher]] und [[Datenspeicher]]
		- [[Adressbus]], [[Datenbus]]
- [[Daten]] und [[Instruktion|Befehle]] zusammen
	- s. [[Von-Neumann Architektur]]
	- Programmierer kann nicht mehr unterscheiden, was er anspricht
		- muss aufpassen, was er wo hin schreibt
- [[Memory Mapped IO]]

## Beispiel
alles zusammen:
```asm
MOV x,y /MEMR, /MEMW
IN X; OUT y
```

getrennt: 
```asm
MOVX, y
INX
OUTY
```