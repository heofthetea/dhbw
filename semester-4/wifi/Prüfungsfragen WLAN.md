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