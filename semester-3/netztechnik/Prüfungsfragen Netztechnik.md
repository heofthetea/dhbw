## Was ist bei RFC zu beachten?
[[RFC]]
- Dieses scheiß Standardsystem
- Mann muss sich um den RFC-Index bemühen

## Worin unterscheiden sich Satelliten?
[[Satellitenkommunikation]]
- LEO, MEO, GEO
- wie weit sind sie weg von der Erdoberfläche

## Was ist eine Mac Adresse?
[[MAC Adresse]]
- 6 Bytes
- Die ersten 3 Bytes beinhalten OUI (Hersteller)
	- dahinter laufende Nummer
- Die ersten 2 Bit:
	- individual/global
	- von IEEE

## Wie weit geht ein [[Broadcast]]?
- nur innerhalb des aktuellen Netzes --> stoppt am [[Router]]
- "Router begrenzen Broadcast-Domains"
- wenn's nicht so wäre, könnte ein Broadcast "im ganzen Internet rumgeistern"

## Unterschied Permanent Link und Channel Link?
[[Leitung]]
- **Permanent**: Fest eingebaut (in Gebäuden etc)
	- max. 90m
- **Channel**: PermanePnt Link + bis zu 5m Patch Leitung pro Seite
	- max. 100m

## Welche wichtigen Kenngrößen gibt es in der Leitungsmessung?
- Dämpfung
	- [[NEXT]] (Near End Cross Talk): an nahem Ende messen
	- FEXT: an fernem Ende messen
	- Man setzt an einem Ende eine Spannung an, und misst die Spannung am anderen Ende
- Signallaufzeit + [[Propagation Delay]]
	- Misst sich genauso wie Dämpfung - nur halt die Zeit

> [!warning] Muss an allen [[Twisted Pair Leitung|Paar]] gemessen werden, weil sie unterschiedlich verdrillt sind

- [[Wiremap]]: Sind alle Pins richtig verbunden?
- Bitfehlerrate
- Impedanz
	- ist der Wellen widerstand?????
	- ca. $100 \Omega$ 
- [[Alien Crosstalk]]

==BRO WHAT THE FUCK HALF OF THESE YOU NEVER EVEN MENTIONED FUCKING **ONCE** IN YOUR FUCKING SLIDES HOW THE FUCK CAN YOU BE SO SELF-ENTITLED TO TEST THAT IN THE FUCKING EXAM YOU SELFISH PIECE OF SHIT==

- [[ACR]]
- [[Alien Crosstalk]]: Einflüsse von Außen auf die [[Leitung]]
	- nur unter Laborbedingungen messbar

## Wann braucht man ein Zugriffsverfahren?
- sobald man ein [[Shared Medium]] hat
	- also einen Kanal, auf dem alle zugreifen --> [[Broadcast]]-Netzwerke
	- bsp. WLAN, Bus, etc.

### Welche Zugriffsverfahren gibt's?
[[Zugriffsverfahren]]
- dezentral und zentrale Verfahren
- darunter deterministisch und stochastisch
	- deterministisch: man kann vorhersagen, wie lange ein Frame braucht (bsp. [[Token Ring]])
	- stochastisch: [[CSMA]], [[Slotted ALOHA]]

## Wofür Mindestgröße für Nachricht?
- Wenn [[Kollision (Zugriffsverfahren)]] erkannt wird, muss das an den Sender mitgeteilt werden
- wenn dieses Jam-Signal länger braucht als das gesendete Frame, merkt der Sender das nicht und es gehen Daten verloren
