>Critical Path Measured

Graphstruktur

Jeder [[Knoten]] enthält:
- Ereignisnummer: = [[Arbeitspaket]]
- Kennzahlen: Frühester und Spätester erlaubter Termin
Jede [[Kante]] enthält:
- Kennbuchstabe
- Gewicht: Eingeplante Zeit

==> endet in [[gerichteter Graph|gerichtetem]] und [[Gewichteter Graph|gewichtetem]] [[semester-2/algorithmen/Graph|Graphen]]

![[cpm_plan.png]]
_Achtung_: Bei parallelen Pfaden, die wieder mergen, wird längste Summe gewertet
--> Bsp: 2 -> 4 || 2 -> 3 -> 6 -> 4

Längster [[Pfad]] ergibt Endzeitpunkg
--> Längster Pfad ist $\{A, D, F, H\}$ mit Summe der Gewichten $17$ 
--> Somit ist dieser [[Pfad]] _kritischer Pfad_

- Frühester und Spätester Anfangszeitpunkt fallen auf den gleichen Punkt --> kein Puffer
- Puffer kann erzeugt werden durch _Parallelisierung_
- Längster (= kritischer) [[Pfad]] dient als "Maßstab" --> muss immer gut im Auge behalten werden !!