## DMA
[[Direct Memory Access]]
- ermöglicht Kommunikation zwischen [[Memory]] und anderen Komponenten an der [[CPU]] vorbei
	- Vorteil: [[CPU]] muss sich nicht um das _verschieben_ von Daten kümmern => weniger Lesen
	- Eine [[CPU]] mit [[Cache]] kann sogar nebenher weiterarbeiten
- [[DMA Controller]]: 
	- [[Register]] für Quell/Ziel-[[Adresse]]
	- Counter
	- Konfigurations-[[Register]] für Einstellen von [[Modi DMA|Modi]]
	- Daten/Zwischenspeicher (?) 
	- Anschlüsse an [[Systembus]], Daten&[[Steuerleitung|Steuerleitungen]]; **Direktverbindung zu I/O Gerät**
- [[DMA Kanal]]: Tupel $(Quelle,\ Ziel,\ Anzahl,\ Modi)$ 

### Ablauf
[[Datentransfer mit DMA]]
0. Ausgelöst durch Nachricht von Device
1. Fragt [[CPU]] nach Buszugriff an ("darf ich den Bus haben?")
2. Bei Freigabe: [[CPU]] koppelt sich von [[Systembus]] ab
3. Datentransfer (gesteuert durch [[Modi DMA]])

### Modi
[[Modi DMA]]

- **direkt**: [[DMA Controller]] stellt Verbindung zwischen Geräten her; danach läuft Transfer an [[DMA Controller|Controller]] vorbei
- **indirekt**: [[DMA Controller]] sitzt _immer_ zwischen kommunizierenden Geräten -> trotzdem schneller, weil keine Befehle geladen werden müssen
- **Burst Mode**: [[CPU]] bleibt die ganze Zeit abgekoppelt -> führt eventuell irgendwann zu Unterbrechungen
- **Cycle Steal**: [[CPU]] und [[DMA Controller]] wechseln sich mit Buszugriff Buszyklenweise ab

## Pipelining
[[Pipelining]]
- Idee: [[Befehlszyklus|Befehlszyklen]] verschiedener Befehle ineinander verschachteln
	- Ziel: In jedem Takt einen [[Instruktion|Befehl]] fertig arbeiten
- [[Ablauf]]: kann man halt in ner Tabelle darstellen -> darstellung trivial

### Herausforderungen
- [[Data Hazard]] (Datenabhängigkeit): $P$ generiert [[Daten]], die von $P + 1$ benötigt werden
	1. Feed-Forward: Daten werden an [[Register|Registern]] vorbei an $P + 1$ weitergereicht
