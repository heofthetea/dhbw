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

## Wie handeln Teilnehmer bei [[Ethernet]] ihre Parameter ab?
- FLP - Fast link Pulse --> [[Basic Link Codewort]]
	- beide sagen, was sie können, und dann entscheiden sich die Geräte für den kleinsten gemeinsammen Nenner
	- welche Geschwindigkeit, welcher Duplex Mode
	- [[Ethernet Flow Control]]
	- Message Next Page - Wenn mehr Informationen in [[Basic Link Codewort]] stehen, wird indicated, dass auf der nächsten Seite auch was steht
- NLP - Normal Link Pulse - überprüft, ob überhaupt eine Verbindung besteht

#### Ergibt das Sinn bei Glasfaser?
- nope - die Leitungen haben eine feste Geschwindigkeit
	- Transceiver müssen einfach richtig gekauft werden

> [!hint] Bei Kupfer wird verhandelt, bei Glasfaser nicht



## Was hat sich bis zu 10GB Ethernet geändert?
- [[Hub|Hubs]] wurden geyeeted --> [[Halb-Duplex-Betrieb]] ist nicht mehr
	- das macht auch [[Zugriffsverfahren]] unnötig BRUH


## Wozu kann man einen Repeater verwenden?
[[Repeater]]
- Leitungen verlängern
- Aufbau von [[Stern-Topologie]] (Anzahl der Teilnehmer erhöhen)
### Wie kann ein Repeater mehrere Geschwindigkeiten haben?
- sind zwei [[Hub|Hubs]] zusammen mit einem [[Switch]] in einem Gerät gebündelt


## Was kann ich mit nem Switch machen?
[[Switch]]; [[Bridge]]
- genau dasselbe wie ein Repeater
- **aber**: behandelt [[Unicast|Unicasts]] anders als ein Hub
	- leitet nur auf dem Port weiter, wo Unicast hin muss
	- leitet ihn ggf. gar nicht weiter, wenn Empfänger an selbem Port liegt6
- isoliert Kollisionsdomänen voneinander

## Was kann ich mit einem [[Router]] machen?
kann auch alles, was ein [[Switch]] machen kann
- mehrere [[Netzwerk|Netzwerke]] (die logisch getrennt sind) miteinander verbinden
- Kann IP Adressen übersetzen
	- Internet Provider räumt täglich IP Adressen auf --> vergibt sie komplett neu

> [!warning] Gibt [[Broadcast]] **nicht** ins [[Internet]] weiter


## Welche Teile eines Frames werden von Switches wofür verwendet?
[[Switch]], [[Bridge]]
- [[Frame]]: [[Paket]] ohne [[Layer 1]] Header -> Mac-Adressen bis ende
- Ziel-Mac: wohin geht das Paket?
- Quell-Mac: Tabelle aufbauen (Mac $\rightarrow Port$)
- wenn in Store & Forward: auch noch [[CRC]] (liegt ganz am Ende) auswerten
	- Fehlererkennung

## Kollisions-Broadcast-Domänen
- [[Router]] begrenzt <span style="color:rgb(126, 198, 54)">Broadcast-Domains</span>
- [[Switch]] begrenzt <span style="color:rgb(0, 122, 255)">Kollisions-Domains</span>

![[Pasted image 20241106091726.png]]

## Was ist das: 192.168.0.0/24
- [[IPv4]] Adresse
- [[Subnet Mask]]: $255.255.255.0$ => Class $C$ Netzwerk
- Ist eine [[Netzwerk]]-Adresse (weil hinten alles $0$)
- Ist ein [[RFC]]-Netz mit [[Subnetting]] => lokale IP Aresse

## Subnetting
![[Pasted image 20241113091146.png]]

#### Kann man die Teile verschieden auf dem "Kuchen" verteilen?
- Kann $192.168.0.32/25$ eine Netzwerkadresse sein?
	- Nein => $.32$ Endung würde als Host interpretiert (?)

> [!warning] Immer mit dem größten Teil anfangen => Netzwerke müssen immer auf die Rastergrenzen setzen
> Eine $/25$ [[Subnet Mask]] geht davon aus, dass das ganze in 2 Teile zerlegt ist -> das kann man nicht einfach irgendwie drehen

