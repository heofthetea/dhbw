> Darstellung der Funktionsweise eines [[Flipflops]] als Aussagenlogische Formel

## Vorgehen
1) Bilde [[Erweiterte Warheitstabelle]] (mit Variablen ist Gleichung nicht möglich)
2) Bilde [[DNF]] (entry doesn't exist yet xd)
3) Vereinfachen der Gleichung mit KV-Diagramm

[[Verbotener Fall|Verbotene Fälle]] im Ausgang sind hierbei egal, da diese per Verschaltung nicht eintreten sollten
==> sog. _"Don't Care"_ Fälle:
- Behandele Fall als _1_, wenn es der Vereinfachung dient
- sonst behandele Fall als _0_

_!!ACHTUNG:_ Immer den Taktzeitpunkt angeben!! 

## Liste an Charakteristischen Gleichungen
###### JK-Flipflop
[[JK-Flipflop]]
$Q_{1(n+1)} = [(\lnot Q_{1}\land J) \lor (Q_{1} \land \lnot K)]_n$

###### SR-Flipflop
[[SR-Flipflop]]
$Q_{1(n + 1)} = [\lnot R(S \lor Q_{1})]_{n}$
