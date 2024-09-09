```mermaid
	flowchart LR
	Befehlsspeicher <--"Bus ro"--> CPU <--"Bus rw"---> Datenspeicher
	CPU <--> I/O
```

[[CPU (Central Processing Unit)]]

- Getrennte Adressen für Code und Data:
	- Adresse $C:\set{0, 1, 2, 3,...}$ und $D:\set{0, 1, 2, 3,...}$ 
- zwei verschiedene [[BUS-System|Bus Systeme]] 

### Eigenschaften
- Kompiliertes Programm landet im Datenspeicher --> ist nicht ausführbar
	- Prozess: Compiler ist code, kompilierter Code landet im Datenspeicher
	- Bonus-Effekt: nicht anfällig gegenüber Viren lol
> [!warning] Alles, was _ausgeführt_ werden soll, _muss_ im Befehlsspeicher liegen!!

- (meist) gleichzeitige Kommunikation der Speicher mit [[CPU (Central Processing Unit)]], da beide Busse getrennt voneinander arbeiten
		==> hohe Leistungsfähigkeit, aber mehr Aufwand (z.B. [[DSP]])

![[Pasted image 20240909112527.png]]
## Beispiel mit einem Bussystem
![[Pasted image 20240909112400.png]]

Address-Dekodierer: [[Multiplexer]] 
Latch: [[D-Flipflop (Delay-FF)]]