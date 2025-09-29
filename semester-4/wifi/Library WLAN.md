> Okay das wird jetzt keine vollständige Library nach meinem Standard XY, sondern einfach nur ein jot-down von den Sachen die ich denke dass Klausurrelevant ist. Nen Scheiß werd ich tun hier alles zusammenzufassen

## 01 Grundlagen
### Service Sets

| Bezeichnung           | Name                    | Was es macht                                                                                             |
| --------------------- | ----------------------- | -------------------------------------------------------------------------------------------------------- |
| [[BSS]]               | Basic Service Set       | zwei [[Station\|Stationen]], die sich gegenseitig sehen                                                  |
| [[IBSS]]              | Independent Service Set | mehrere gleichberechtigte [[Station\|Stationen]] mit [[Peer-to-Peer Network\|peer-to-peer]] Verbindungen |
| [[PBSS]]              | Personal BSS            | [[IBSS]], wo eine Station eine besondere Funktion übernimmt                                              |
| [[Infrastruktur BSS]] |                         | Netz mit zentralem [[Access Point]]                                                                      |
| [[ESS]]               | Extended Service Set    | Mehrere [[Infrastruktur BSS]], die über ein **Distribution System** als Backbone verbunden sind          |
| QBSS                  | [[Quality of Service]]  |                                                                                                          |
### Kennzahlen
- [[Sendeleistung]]
- [[Frequenz]]
- [[Wellenlänge]]
- [[Bandbreite]]
- [[Datenrate]]

### OFDM

# Access Control
- [[Distributed Coordination Function|DCF]]: jeder ist für sich selbst verantwortlich
- [[Point Coordination Function|PCF]]: ein zentraler [[Access Point]] ist für Zugriff verantwortlich

> [!hint] necessity for [[Point Coordination Function|PCF]] arises from [[Hidden Station Problem]]


### Hidden Station Problems
- Tritt in in [[Infrastruktur BSS]] auf
	- 

# Hamming
- ja digga das ist mehr oder weniger trivial, see [[Hamming Code]]
- gemacht wird **even** [[Parity]] => Anzahl der Einsen muss gerade sein.

### Kontrollgruppen
- [[Position of Parity Bits]]

![[Pasted image 20250327105526.png|400]]

> [!hint] Merkspruch: "Erst Streifen, dann Blöcke"


# 0X Antennen

| Name                                                  | Ausbreitung                                                          | Anmerkung                      |
| ----------------------------------------------------- | -------------------------------------------------------------------- | ------------------------------ |
| [[Halbwellendipol]]                                   | annähernd kreisförmig                                                | Halbwellen = halbe Wellenlänge |
| [[Antennen in Handys]] -> $\frac{\lambda}{4}$-Antenne | gleich wie [[Halbwellendipol]], aber ein Viertel der [[Wellenlänge]] |                                |
| [[Isotroper Strahler]]                                | perfekt kreisförmig                                                  | praktisch unmöglich            |
| [[Patch Antenne]]                                     | Halbkugelförmig (z.B. in DH an der Decke)                            |                                |
| [[Yagi-Antenne]](Richtantenne)                        | stark kegelförmig in eine Richtung                                   | die Dinger auf den Dächern     |
| Parabolantenne                                        | Receiver only (i think)<br>**ist auch eine Richtantenne**            |                                |

### Halbwellendipol
- [[Halbwellendipol]]
- heißt so, weil er eine halbe [[Wellenlänge]] lang ist -> gibt's auch in kleineren Ausführungen in z.B handys
- **offener Dipol**:
	- Stromkreis nicht geschlossen
	- Ausbreitung: zwei Kugeln in entgegengesetzte Richtungen
- **geschlossener Dipol**
	- Stromkreis ist geschlossen
	- Ausbreitung: Eine (annähernde) Kugel
- [[Dipolgruppen|Das ganze stacken]]:
	- übereinander (stack): gut für vertikalen [[Antennengewinn]]
	- nebeneinander (in Reihe): gur für horizontalen [[Antennengewinn]]

### Begrifflichkeiten
#### [[Antennengewinn]] 
- "Wie besser bin ich in Vergleich zu [[Isotroper Strahler|isotropem Strahler]]?"
- gemessen in $dBi$

## Formeln 🤮
### [[Sendeleistung]] umrechnen


### [[Wellenlänge]]
$$\lambda = \frac{c}{f}$$
- gemessen in Metern $m$, wenn:
	- $c$ in $m$
	- $f$ in $\frac{1}{s}$ 


### [[Freiraumdämpfung]]


### Distanz zu Sendeleistung
$$d = 10^{\frac{A_{f}}{20}} \cdot \frac{\lambda}{4\pi}\ [m]$$
- $A_{F}$ ist das "Dämpfungsbudget" => $A_{F} = TX - RX - D$ 
	- D: Dämpfung
	- TX: [[Sendeleistung]] (in dB)
	- RX: Sensibilität des Empfängers
- $\lambda$ ist [[Wellenlänge]] => muss errechnet werden