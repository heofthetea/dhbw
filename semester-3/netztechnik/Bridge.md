> [[Repeater]], der [[semester-3/netztechnik/Kollision|Kollisionen]] nicht weiterleitet

[[Layer 2]]

- hat sehr grundlegende Intelligenz
- Limitiert auch die [[Bild einer Funktion|Bildmenge]] der möglichen Empfänger für [[Unicast]]
	- Wenn innerhalb einer gekapselten Leitung ein Unicast bleibt, muss [[Bridge]] das nicht weiterleiten
- [[Broadcast]]/[[Multicast]] wird weitergeleitet --> passiert durch Auswerten der [[MAC Adresse]]
- Führt Tabelle mit allen angeschlossenen [[MAC Adresse|MAC Adressen]]
	- kann entscheiden, ob Ziel für [[Unicast]] in einem gekapselten [[Netzwerk]] ist, oder ob sie Unicast an einen anderen [[Port]] weitergeleiten muss
	- Tabelle wird aufgebaut durch Auswertung von Quell-[[MAC Adresse|MAC Adressen]] --> LERNT MIT DER ZEIT

![[Pasted image 20241023103016.png]]

- überprüft, ob Jam Signal auf der Leitung liegt
- und macht Cyclic [[Redundanz|Redundancy]] check

> [!hint] Wenn Bridge nicht weiß, an welchem [[Port]] Ziel-[[MAC Adresse]] liegt, forwarded sie den [[Unicast]] einfach.

> [!warning] Nach [[IEEE802.1]] dürfen maximal $7$ Bridges in einem [[Netzwerk]] verbaut sein.

> [!hint] Nutzt eine [[CPU]], um Forwarding zu entscheiden.



## Als Ablaufdiagramm
![[Pasted image 20241023105207.png]]