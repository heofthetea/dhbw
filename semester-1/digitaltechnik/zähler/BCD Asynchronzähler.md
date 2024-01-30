### Vorwärts
![[bcd_mod10_forward.png]]
Bei Zustand 0101 (respektive $1010_2$) muss auf 0000 resetted werden (Vermeidung Pseudo-Tetraden)

### Rückwärts
![[bcd_mod10_backwards_zaehler.png]]
selbes Prinzip - $0000 - 1 = 1111$ --> $1111_2$ muss auf $1001_2$ resetted werden, um Pseudo-Tetraden zu vermeiden
-> Es reicht aus, $Q_{II}$ und $Q_{III}$ zu überprüfen: Es kann keinen Zustand geben, bei dem diese Eingänge = 1 sind _und_ Die zahl kleiner als $10101_{2}$ ist
- ist günstiger
- HIlft für _Steuerung_ vorwärts-/rückwärtszähler ([[#Kombiniert]])

### Kombiniert
![[bcd_controllable_mod10.png]]
- U = 1: [[#Vorwärts]]
- U = 0: [[#Rückwärts]]

#### Dekadenzähler
![[dekadenzaehler_schaltzeichen.png]]
nur eine Verbindung: Reaktion auf _abfallende Flanken_
$Q_{iv}$ fällt auf 0 von 9 auf 10

_CTR 10_ = bis 10 zählen
+/-: In welche Richtung zählen


### Anwendung
Elektronische Uhren (7-Segment Anzeige)
![[modulo_100_bcd_zaehler.png]]