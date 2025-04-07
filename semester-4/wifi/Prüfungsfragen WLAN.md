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
