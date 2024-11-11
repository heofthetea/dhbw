[[Hub Systemnahe Programmierung]] (selber Dozent)

in Semester 3: [[Hub Betriebssysteme]]

## Script
[[script_rechnerarchitekturen.pdf]]
(Shit probably have to work with goodnotes again🥲)
[[Thomas Flik - Mikroprozessortechnik und Rechnerstrukturen-Springer (2004).pdf]]
### Notengebung
[[Tipps Klausur Rechnerarchitekturen]]
[[RT1Fragen_2024.pdf]]
## Libraries
[[Library Minimalsystem]]
[[Library CPU Komponenten]]
[[Library Speicher]]
[[Library Interrupts]]
[[Library DMA und Pipelining]]

# Vorlesung
[[Ausblick Rechnerarchitekturen]]


[[Computer]]
- [[EVA Prinzip]]
- [[Anweisungsbasierte Definition]]
[[Historie der Computer]]

[[Microcontroller]]

## Minimalsystem
[[Minimalsystem]]
[[Harvard-Architektur]]
[[Von-Neumann Architektur]]

## CPU
[[CPU]]
- [[Steuerwerk]]
	- [[Steuerwerk mit Mikroprogrammierung]]
		- [[Mikro-Operation]]
		- [[Mikro-Adresse]]
		- [[Mikro-Befehl]]
		- [[Mikro-Programm]]
	- [[Steuerwerk als Automat]]
	- [[Wilkes-Stringer Steuerwerk]]
	- [[Steuersignal]]
		- [[nicht-codiertes Steuersignal]]
		- [[nano-codiertes Steuersignal]]
- [[Operationswerk]]
	- [[Rechenwerk]]
		- [[ALU]]
		- [[Register]]
	- [[Leitwerk]]
- [[BUS-Interface]]
- [[CPU Cache]]

[[Befehlszyklus]]
[[Instruktion]]
[[Instruction Set Architecture]]
- [[i386]]
- [[RISC]]

[[Beispiel CPU]]
### Arithmetisch-logische Einheit
oder: Digitaltechnik 2.0 --> [[Library Rechenschaltungen]]
[[Binärsystem]]
- [[Hexadezimalsystem]]

[[ALU]]
- [[Zweierkomplement]]
- [[Erhöhung der Stellenanzahl]]
- [[Festkommadarstellung]]
- [[Floating Point Darstellung]]
	- [[Flaws von Floating Points]]
- [[Ripple-Carry-Adder]], [[Serial Adder]]
- [[Halbaddierer]], [[Volladdierer]]
- [[Carry-Look-Ahead Adder]]
- [[Addier-Subtrahier-Werk]]
- [[Blockbildung]]
- [[Multiplikation Zweierkomplement]]
- [[Division Zweierkomplement]]
	- [[Multiplikation Division Floating Point]]

## Bussystem
(im Skript Kapitel 6 lol)
[[serielles BUS-System]]
[[BUS-System]]
- [[Adressbus]]
- [[Datenbus]]
- [[Steuerbus]]
- [[Systembus]]
nach Erkennung
[[Handshake]]
[[Bit-Synchronisation]]
[[Bus zum Speicherzugriff]]

[[BUS-Schaltung]]
- [[synchroner BUS]]
- [[asynchroner BUS]]
[[serielle Bus-Schaltung]]
[[Seriell-Parallel Crossover]]
[[RS232 Bus]]
[[PCI Express Bus]]


## Speicher
- [[Memory]]
	- [[Befehlsspeicher]]
	- [[Datenspeicher]]
	- [[IO Speicher]]
	- [[Speicherzelle]]
		- [[Speicherzellenmatrix]]
- [[Adresse]]
- [[Steuerleitung]]
- [[getrennte Leitungen]]
- [[Memory Mapped IO]]
- [[Speicheraufteilung 8051]]
### Adressierung
[[Adresse]]
- [[Adressierung]]
	- [[externe Adressierung]]
	- [[interne Adressierung]]
	- [[Beispiel Adressierung]]
- [[Chip Select]]
- [[Unvollständige Adressierung]]
### physical
- [[RAM]]
	- [[DRAM]]
	- [[SDRAM]]
	- [[DDRRAM]]
- [[PROM]]
	- [[EPROM]]
	- [[EEPROM]]
- [[Flash Speicher]]
- [[Ringkernspeicher]]
- [[NVRAM]]


## Speicherverwaltung
[[Speicherverwaltung]]
- [[Segmentierung]]
	- [[Segment]]
	- [[Zwei-dimensionaler Speicher]]
- [[Segmentverwaltung mit Registern]]
	- [[Bespiel Segmentverwaltung i386]]
	- [[Segmentverwaltung mit Tabellen]]
	- [[Umsetzung Segmentverwaltung mit Tabellen]]
		- [[Descriptor Tables]]
		- [[Descriptor i386]]

## Erweiterung Minimalsystem
[[Minimalsystem]]
### Interrupts
[[Polling vs Interrupt]]
[[Interrupt]]
- [[Interruptlogik direkt an CPU]]
	- [[Interrupt Handling durch Oder]]
	- [[Daisy Chain]]
- [[Interrupt Controller]]
	- [[Kaskade]]
- [[Priorität Interrupt]]
- [[Mögliche Quellen für Interrupt]]
- [[Ablauf Interrupt]]
- [[Interrupt-Typen]]
	- [[Auto-Interrupt]]
	- [[Nummer-Interrupt]]
	- [[Vektor-Interrupt]]

### Direct Memory Access (DMA)
[[Direct Memory Access]]
- [[Datentransfer über CPU]]
- [[Datentransfer mit DMA]]
- [[Aufbau DMA]]
- [[DMA Controller]]
	- [[Modi DMA]]
- [[DMA Kanal]]

### Pipelining
[[Pipelining]]
- [[Beispiel Pipelining]]
	- [[Superpipeline]] (ist Werbung lol)
- [[Ablauf Pipelining]]
- [[Probleme mit Pipelining]]
	- [[Data Hazard]]
	- [[Sprungabhängigkeit]]
		- [[Sprungvorhersage]]

## Cache
(nicht mehr Klausurrelevant für RA, aber für Betriebssysteme)
[[Cache]]
- [[4-way Cache]]