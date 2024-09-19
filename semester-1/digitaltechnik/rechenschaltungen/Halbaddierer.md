> Ermöglicht Addition _zweier_ Binärer Ziffern

$x + y = c\cdot s$ ($\cdot$ ist Wortkonkatenation)
### Rechenregeln
$0 + 0 = 0$
$0 + 1 = 1$
$1 + 0 = 1$
$1 + 1 = 10$


| A   | B   | Z   | C   |
| --- | --- | --- | --- |
| 0   | 0   | 0   | 0   |
| 0   | 1   | 1   | 0   |
| 1   | 0   | 1   | 0   |
| 1   | 1   | 0   | 1   |
$Z$ ist hierbei die _niederwertigere_ Stelligkeit!!
- auch genannt $S$ (Sum)

### Schaltsymbol
![[Pasted image 20240202092401.png]]
- Ü/C: Übertrag/Carry-bit
### Funktionsgleichung
Z = $A \lnot B \lor \lnot AB$ 
$Ü = AB$

### Schaltung
![[Pasted image 20240202092418.png]]


### Aufbau NANDs
![[Pasted image 20240205155142.png]]