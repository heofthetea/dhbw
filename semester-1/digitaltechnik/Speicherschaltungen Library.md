#library 
## Flipflops
[[Master Flipflops]]

## Zähler
[[Master Zähler]]
- [[Taktsteuerung]]
- _Prinzip_: Output gibt wieder, wie oft sich ein Eingangsimpuls verändert hat
- Ausgänge der [[Flipflops]] repräsentieren Wertigkeit der gezählten Binärzahl
	- je _niedriger_ der Index, desto _niedriger_ die Stelligkeit 
		( $Q_{I}$ = $2^{0}$, $Q_{II}$ = $2^{1}$, etc)
- Wenn eine Gewisse Grenze erreicht wird, werden Flipflops _zurückgesetzt_ 
#### Unterschiedene Kategorien
|  | asynchron | synchron |
| ---- | ---- | ---- |
| vorwärts | [[Asynchronzähler vorwärts]] | [[Synchronzähler vorwärts]] |
| rückwärts | [[Asynchronzähler rückwärts]] | [[Synchronzähler rückwärts]] |
|  |  |  |
| BCD | [[BCD Asynchronzähler]] | [[BCD Synchronzähler Berechnung]] |
### Asynchronzähler
[[Asynchronzähler]]: Flipflops sind _asynchron_ bzgl. des [[Taktsteuerung|Taktes]]
- Realisierbar mit [[JK-Flipflop]] und [[T-Flipflop (Toggle-FF)]]
- _Prinzip_: Ausgang $Q_A$ des Flipflops $A$ wird direkt an Takt-Eingang des nächsten Flipflops $B$ angeschlossen
- _Problem_: Durch Signallaufzeit wird Information ggf. nicht _vor nächstem Takt_ am letzten Flipflop ankommen

### Synchronzähler
[[Synchronzähler]]: Flipflops sind _synchron_ bzgl. des[[Taktsteuerung|Taktes]]
- _nur_ noch mit [[Zweiflankengesteuertes JK-FF|Master-Slave JK-FF]] realisierbar
	- 

