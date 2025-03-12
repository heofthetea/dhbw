> darstellung nach [[IEEE]] $754$

[[Floats.pdf]]

![[double_in_memory.png]]

> [!warning] Don't compare floating points with an _equals_ Statement!

- $1$. Bit: Vorzeichen-Bit $V$
- Charakteristik $C$: Exponential-Darstellung der Zahl
	- 8 bit für float (32 bit) --> Offset $S = 127$
	- 11 bit für double (64 bit) --> Offset $S = 1023$

- **Mantisse** $M$: Nachkommazahl, wenn _genau eine $1$ vor dem Komma steht_ - die restlichen Bit

$$\mathcal{Z} = (-1)^{V} \cdot (1 + M) \cdot 2^{C-S}$$

## Umrechnung
1. **Normierung**: Vorkomma-Zahl $n$ aufteilen, bis eine $1$ vor dem Komma steht
2. **Nachkommastellen**: Nacheinander [[negative_powers_of_2.pdf|negative Zweierpotenzen]] abziehen, bis kein Rest mehr da ist
3. **Vorkommastellen**: Potenz $n$ (aus 1.) zu Offset **addieren**
4. [[Konkatenation]] mit Vorzeichenbit

> [!hint]- Normierung kann man auch erst machen, nachdem man die Zahl in [[Binärsystem]] umgerechnet hat
> ist dann lediglich verschiebung des Kommas
## Sonderwerte
- $0 \Leftrightarrow C = 0 \land M = 0$ => Alles $0$ (bis auf $V$)
	- -> $C = 0 \land M \neq 0$ sind nicht nutzbar
- Infinity: $C = 255 \land M = 0$
- [[NaN|NaN]]: $C = 255 \land M \neq 0$ 
	- Division durch $0$
> [!hint] Eselsbrücke: Wie bei [[Subnetting]] -> all Zeroes and all Ones verboten
## Eigenschaften
- kleinster Wert: $|Z| = 1.00_{2} \cdot 2^{-126} \approx 2.2_{10} \cdot 10^{-38}$
	- mit 64 bit: $2.2_{10} \cdot 10^{-308}$
- größtmöglicher not-[[NaN|NaN]] wert: $|Z| = (2 - 2^{-23})_{2} \cdot 2^{127} \approx 3.4_{10} \cdot 10^{38}$
	- 64 bit: $1.8_{10} \cdot 10^{308}$

> [!warning] Großer Zahlenbereich, aber Zahlen werden zunehmend ungenauer je näher man an die Grenzen des Wertebereichs kommt


## Rambling

> [!hint] Genauigkeit
> - Absolut: $Z_{n} - Z_{n-1}$ -> nicht konstant
> - Relativ: $\frac{Z_{n}}{Z_{n-1}}$ -> konstant

### Beispiel
Bsp: $12.625 = 2 * 6.1325 = 2 * 2 * 3.15625 = 2 * 2 * 2* 1.578125 = 2^{3}*1.578125$
==> Vorkomma-Zahl _so lange_ aufteilen, bis _eine 1_ vor dem Komma steht
(oder, wenn vorkomma-Zahl kleiner als 1: so lange mit 2 _multiplizieren_)
--> Verfahren genannt: _Normierung_

Nachkomma-Stelle: Nacheinander _abziehen_
$0.578125 = 0.5 * 0.078125 = 0.5 + 0.0625 + 0.015625 = 2^{-1} + 2^{-4} = 2^{-6} = 0.100101_2$  

Vorkommazahl:
Get into Charakteristik:
zähle Anzahl der Zweien, 
_Offset_ = 127 = $0111\ 1111_2$
$Offset + Potenz = 127 + 3 = 130 = 1000\ 0010_2$ 

==> Wird Zusammengefügt mit Vorzeichenbit

==>zusammengefügt:
$1100\,0001\,0100\,1010_2$


## Warum? GLEIT-Kommazahl
Charakteristik beschreibt: _wo_ steht das Komma
Kommt ins Spiel bei der Normalisierung:
$12.625 = 0.12625 * 10^{2}$ 
$= 0.0012625 * 10^4$

--> Liegt daran, dass 1.xxx multipliziert wird - "1." als multiplikatives Element useless

## Aufgabe: Das ganze Programmieren


[[double_conversion.c]]

### Little endian Darstellung
Bytes in reihenfolge tauschen --> kleinstes Byte steht vorne
Sinn: Abschließende Nullen können ignoriert werden