[[Interrupt]]: Ermöglicht System, auf äußere Einflüsse zu reagieren, ohne [[Polling|pollen]] zu müssen
[[Priorität Interrupt|Priorität]]: je höher, desto wichitiger

## Schaltungen
- Die [[CPU]] hat zwei Pins für das abhandeln von [[Interrupt|Interrupts]]:
	- [[INTR]]: Interrupt Request Eingang
	- [[INTA]]: Interrupt Acknowledge Ausgang
### Direkt an CPU
[[Interruptlogik direkt an CPU]]
- [[Interrupt Handling durch Oder]]: Es gibt einen [[BUS-System|Bus]] für [[INTA]] und [[INTR]], an den sich alle Geräte anhängen

> [!error]- Es gibt kein [[Zugriffsverfahren]], aber trotzdem Risiko für [[Kollision (Zugriffsverfahren)|Kollisionen]] => Das ganze geht ziemlich schnell den Bach runter lol

- [[Daisy Chain]]
	- Geräte sind in Reihe Geschaltet
	- Jedes Gerät gibt [[INTR|INTRs]] oder [[INTA|INTAs]] einfach weiter
	- Je näher Gerät an [[CPU]] sitzt, desto höher ist seine [[Priorität Interrupt|Priorität]]

> [!info] Behebt Problem der Kollisionen, aber ist fucking teuer


### Dedizierte Logik
- [[Interrupt Controller|Programmable Interrupt Controller]]: Seperate Einheit, die sich um Koordination von [[Interrupt|Interrupts]] kümmert
	- agiert als [[Proxy]] zwischen [[CPU]] und Geräten
	- vergibt [[Priorität Interrupt|Prioritäten]] und Vektornummern
- [[Kaskade]] - Löst Problem, dass ein [[Interrupt Controller|PIC]] nur 8 Eingänge hat
	- mehrere [[Interrupt Controller]] aneinander hängen
	- Master weiß, dass an Pin $x$ ein [[Interrupt|PIC]] hängt (damit er ihn besonders behandeln kann)
	- Slave weiß genau, an welchem [[Interrupt Controller|PIC]] er an welchem Pin hängt
	- <span style="color:rgb(126, 198, 54)">Sonderleitung zwischen zwei PICs</span>: ermöglicht besondere Kommunikation

## Grundlegender Ablauf
[[Ablauf Interrupt]]
1. Überprüfe [[INTR]] - Gibt es eine [[Interrupt]] [[Flag]]? Wenn ja - was ist die [[Mögliche Quellen für Interrupt|Quelle?]] 
2. Entscheide anhand Priorität, ob nachgegeben wird oder nicht
3. Finde die Zieladresse ([[Vektornummer|Interrupt-Vektor]]) der Interrupt-Routine (hängt von [[Interrupt-Typen|Typ]] ab)
4. Führe Interrupt-Routine als [[Unterprogramm Assembler|Unterprogramm]] aus
5. revert back to pre-interrupt Zustand

> [!hint] In der Regel: [[Flag]] set by hardware, cleared by software.

### Verschiedene Arten
- [[Auto-Interrupt]]
	- Zieladresse für Interrupt-Routine wird hängt **fest** von der [[Mögliche Quellen für Interrupt|Quelle]] ab
	- **EAL** (Enable All Interrupt) Gate: Wenn $0$, werden _alle_ [[Interrupt|Interrupts]] abgelehnt (kann von Programmierer festgelegt werden)
	- [[Flag]] wird automatisch zurückgesetzt; Routine muss durch [[RETI]] beendet werden

> [!hint] Hier sind INTR und INTA irrelevant for some reason.

- [[Nummer-Interrupt]]
	- Zieladresse wird aus [[Vektornummer]] **errechnet** (ist hier aber nicht ganzes Bitmuster, sondern $11nn\, n111$)
	- [[Interrupt]] muss freigegeben werden -> Ermöglicht Entscheidung auf Entwicklerseite, ob ein Interrupt von einem anderen Interrupt unterbrochen werden kann
	- kann entweder en- oder disabled werden (`EI`/`DI` instruktion respectively)
- [[Vektor-Interrupt]]
	- Wird _immer_ stattgegeben - Beispiel: Div by $0$; [[RuntimeException]]
	- [[Interrupt-Typen|Typ]] wird durch eine [[Lookup Table]] festgelegt
		- !! ist Aufgabe des [[Betriebssystem|Betriebssystems]], die Tabelle aufzubauen
	- [[Interrupt]] wird **zwei** mal über [[INTA]] acknowledged, bevor Bitmuster aufgelegt wird
	- [[Vektornummer]] ist das ganze $8$-Bit Muster