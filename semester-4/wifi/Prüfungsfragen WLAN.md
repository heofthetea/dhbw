## Probleme bei WLAN - [[WLAN Nachteile]]
- geringerer Durchschlag
	- hohe Bitfehlerraten
- Netze beeinflussen sich auch gegenseitig -> 2.4xBluetooth Debakel e.g.
- Netzwerk von allen benutzbar theoretisch -> Einfacher für [[Man-in-the-Middle Attack]]s
- Weniger Reichweite als bei Kupferverkabelung
	- je weiter weg, desto robustere [[Modulation|Modulationsverfahren]]
- Regionale Restriktionen für Frequenzbereiche & Kanäle pro Band
- Man muss den [[Access Point]] trotzdem verkabeln5

## Was ist ein [[Wiederverwendungsabstand]]?
- Die mindeste Räumliche Distanz zwischen zwei Sendern, damit sie auf dem selben [[Kanal]] auf dem selben [[Frequenzbänder|Band]] uneingeschränkt kommunizieren können
- Faktoren:
	- [[Frequenzbänder|Band]] ([[2.4G]]/[[5G]])
	- Sendeleistung
	- Antennenbauform
	- Anzahl der Teilnehmer
	- Welche [[Modulation|Modulationsverfahren]] kann mein Gerät?

##Was ist das Ergebnis eines [[Viterbi Algorithmus]]?
- Die Bitfolge, bei der die geringste Summe der [[Hamming Distanz|Hamming Abstände]] zwischen den empfangenen Bytes und dem Trellis entsteht

=> Das, was am Wahrscheinlichsten gesendet wurde

## Was ist [[Punktierung]]?
- [[Faltungscodierer]] haben eine [[Coderate]] von $\frac{1}{2}$
- mit [[Punktierung]] wird das verbessert

### was kann ich machen, damit ich keine [[Punktierung]] machen muss?
- [[Coderate]] verbessern => einfach vorne mehr Bits pro Takt rein stecken, um z.B. $\frac{2}{3}$ zu bekommen

> [!hint] Gibt's bei [[WLAN]] nicht lol ok


## Hamming Code 
[[Hamming Code]] entziffern -> Goodnotes

![[Pasted image 20250403091930.png]]
## Wie bekomme ich mehrere Fehler am Stück in den Griff?
- [[Interleaving]]

## Hamming-Codierung anders auslesen
1. [[Binärsystem|binär]] adressieren ($0000 - 1111$)
2. Die [[Adresse|Adressen]], an denen eine $1$ steht, aufschreiben
3. Spaltenweise (_dezimal_) aufsummieren
4. Spaltenweise [[Modulo|mod]] $2$
5. Ergebnis ist die fehlerhafte Adresse

> [!hint] ist $0$, wenn es keinen Fehler gibt

![[Pasted image 20250410095543.png]]
## Hamming-Feld Erweitern
[[Position of Parity Bits]]

- immer das erste Bit des neuen Feldes wird [[Parity]] bit
- Feld wird immer doppelt so groß

![[Pasted image 20250410090847.png]]


## Welche Art von Frames gibt es?
- Control Frame
	- [[ACK]]
	- Benutzt, um [[Zugriffsverfahren]] zu machen ([[RTS CTS]] etc)
- Management Frame
- Data Frame
	- Hier werden Daten gesendet lul
- (Extension-Frame)
	- nachträgliche Erweiterungen zum Standard

#### festgelegt durch Type-header

| Bit | Art        |
| --- | ---------- |
| 00  | Management |
| 01  | Control    |
| 10  | Data       |
| 11  | Extension  |

## SISO, MIMO etc
- Single Input - Single Output
- Beschreibt, auf wie vielen verschiedenen Strömen der [[Kanal]] gleichzeitig genutzt werden kann


## Welche Bestandteile hat ein ESS?
- [[QBSS|ESS]] - Extended Service Set
- Mehrere [[Access Point|Access Points]] (=> [[Infrastruktur BSS]]) sind Backbone im selben logischen Netz
	- Dieser Backbone-[[Switch]] heißt **Distribution System**

## Können mit Sounding Tests die Verbindungen bei [[Broadcast]]/[[Multicast]] verbessert werden?
- [[Sounding Test]] - Ausrichten der Antennen für gezielteres Signal
- nein - nur für [[Unicast]] 

## LDPC?
- [[Low-Density Parity Check]]
- Dient der [[Forward Error Correction]] 

### Welche Coderaten gibt es da?
- $\frac{1}{2}$
- $\frac{2}{3}$
- $\frac{3}{4}$
- $\frac{5}{6}$
- Dann gibts noch verschiedene Block-Größen:
	- $648$
	- $1296$
	- $1944$
- => insgesamt 12 verschiedene Möglichkeiten, LPDC zu machen (JUNGE WARUM ZUM FICK HABEN WIR NICHT EINFACH COMPILERBAU WIE JEDER ANDERE KURS ICH HASSE DIE SCHEISS DHBW)

## Tuningmaßnahmen, um Datanrate zu vergrößern?
- Direktes Verbessern der Signal-to-noise-Ratio
	- Bessere [[Modulation]] ([[QAM]]) => **die** Stellschraube schlechthin
	- [[Coderate]] der [[Forward Error Correction|FEC]] verbessern
- Indirekte Parameter
	- [[Beamforming]]
	- Mehrere [[Frequenzbänder]] gleichzeitig verwenden => [[Wifi 7]]
	- [[Bandbreite]] vergrößern => ermöglicht breitere [[Kanal|Kanäle]]
	- [[Aggregationsverfahren]] -> Mehr Daten pro [[WLAN Frame|Frame]]
	- [[Space Time Block Coding]]

## Ist [[OFDM]] ein Modulationsverfahren?
- Steht für: Orthogonal Frequency Division Multiple Access
- [[Signalspreizung]]

> [!warning] Nein, ist **kein** [[Modulation|Modulationsverfahren]].


## Welche Parameter werden im World Mode verteilt?
[[World Mode]]

- Bestandteil von [[Management Frame]] -> wird ca. alle 100ms übertragen
- [[Sendeleistung]]
- Ländercode
- drinnen/draußen/egal
- Anzahl der [[Kanal|Kanäle]]


## Wie wird [[Quality of Service]] umgesetzt?
- Frames eingeteilt in 4 Kategorien
- Werden anhand dieser Kategorien priorisiert
- eigenes Zugriffsverfahren: [[EDCA]]
	- gibt 4 verschiedene Inter Frame Spaces
	- je höher priorisiert, desto länger das contention window -> Können schneller runter zählen
- Priorität wird von [[IP]] (ein layer drüber) übernommen

## Welche Schritte werden beim Verbindungsaufbau abgehandelt?
[[WLAN Verbindungsvorgang]]

1. [[WLAN Scanning]]
	1. passive scanning: [[Access Point]] schickt BSSID In [[Beacon Frame]]
	2. active scanning: Gerät muss Probe Request schicken, indem er [[Access Point|AP]] fragt, was er kann
	3. Wegen [[CSMA CA]] können verschiedene [[Access Point|APs]] verschieden viele DIFS warten müssen -> MinChannelTime und MaxChannelTime
2. [[WLAN Authentication]]
	1. [[Open System Authentication]] -> jeder darf rein
	2. [[Shared Key Authentication]] -> [[DEE|Endgerät]] und [[Access Point|AP]] brauchen ein gemeinsames Passwort
3. [[WLAN Assoziation]]
	1. aushandeln der Rollenverteilung (welche Protokolle kann das Gerät etc.)

## Auf welcher Ebene im [[OSI-7-Schichten Modell]] funktioniert [[Quality of Service]]?
- [[Layer 2]] -> in [[WLAN MAC Header|MAC]] Ebene (nicht LLL)
	- und halt auch [[EDCA]] -> hier passiert tatsächlich das [[Quality of Service|QoS]]
- Warum hier?
	- Weil die Priorität direkt Einfluss nimmt auf den Backoff Timer im [[CSMA CA]]

> [!hint] hier passiert auch [[Distributed Coordination Function|DCF]] und [[Point Coordination Function|PCF]] 

## Welche Antennenbauformen kennen Sie?
- [[Halbwellendipol]] (für halbe [[Wellenlänge]])
- Richtantennen:
	- [[Yagi-Antenne]] - [[Halbwellendipol]] mit extra Reflektoren
	- Parabolantennen - Satellitenschüsseln z.b.
- [[Patch Antenne]] - idfk WLAN ist so ein bullshit

### Anordnung ([[Dipolgruppen]])
- vertikal stacken (Dipollinie)
- horizontal (Dipolreihe)

## Was ist der [[Antennengewinn]]?
- Wie weiter breitet sich eine gerichtete [[Antenne]] aus, verglichen zu einem [[Isotroper Strahler|isotropen Strahler]]
- gemessen in dBm

> [!question] Was heißt "3db" Unterschied?
> So viel stärker ist halt die Leistung beim Empfänger

- wieso ist das Wichtig?
	- Weil vorgeschrieben ist, wie viel Leistung maximal verwendet werden darf
	- => man muss entsprechend die [[Sendeleistung]] abgleichen mit Vorgab

## Freiraumausbreitung/Hindernisse
[[Hindernisse für Funkwellen]]

- Reflektion
- Absorption => umgewandelt in thermische Energie
- Beugung => Am Hindernis vorbei
- Transmission (kommt durch)

## Hidden Station Problem
- setup [[Infrastruktur BSS]] mit zwei [[Station|Stationen]]
- Beide sehen einander nicht, aber den Access point
- wenn sie jetzt [[CSMA CA]] machen, funktioniert carrier sense nicht gescheit -> [[semester-3/netztechnik/Kollision|Kollision]] um den [[Access Point|AP]] herum
	- => requires [[RTS CTS]]