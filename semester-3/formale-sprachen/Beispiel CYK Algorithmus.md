[[CYK Algorithmus]]

- Hauptdiagonale einfach aufzufüllen --> direkte Regeln
	- um $abacba$ zu erzeugen, muss $SBSBBS$ erzeugbar sein
- durch 1. Nebendiagonale
	- Information aus hauptdiagonale rekonstruieren
		- $(1, 2)$ - Welches NTS kann das wort $SB$ erzeugen? --> antwort: Keines
		- $(2, 3)$ - $BS$ kann durch $A$ und $B$ erzeugt werden
- 2. Nebendiagonale:
	- ab hier wird's schwierig (mehrer Kombinationen möglich)
		- Betrachte Kombinationen: $SA$ und $SB$ 
			- Zeile von links nach rechts, und Spalte von oben nach unten
				- aber immer nur Paare vergleichen 

> [!hint] Gesucht: Feld $2, 5$ - überprüfe alle Paare aus feldern, die das Wort von $2$ bis $5$ aufbauen
> also: $(1, 1) \times (2, 5)$, $(1, 2) \times (3, 5)$ etc.. 

![[Pasted image 20241011120212.png]]