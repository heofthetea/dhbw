> $AND$-Gatter sind [[Multiplikationsschaltung]] 


Für $2 \cdot 2$ Bit:
$$(u_{0} \cdot v_{0})\cdot 2^{2} + (u_{0} v_{1} + u_{1}v_{0})\cdot 2^{1} + (u_{1}v_{1}) \cdot 2^{0}$$



![[Pasted image 20240209081553.png]]
- Eine Permuttation der $AND$-Glieder für jeden Schritt der Multiplikation
- Ergebnis der Multiplikation wird immer um _eins_ verschoben --> _niedrigste_ Wertigkeit geht _direkt_ and Output
- nutzt [[Halbaddierer]] und [[Volladdierer]], um Ergebnisse zu addieren

> [!warning] Stellenanzahl des Ergebnisses kann doppelt so groß sein wie Stellenanzahl der Faktoren!
> Für [[Festkommadarstellung|Festkommazahlen]] muss auf Kommaverschiebung geachtet werden
> $$M.N \cdot P.Q = (M+P)\cdot (N + Q)$$


## Ablauf
![[Pasted image 20240923091418.png]]

Ergebnis steht in `(A | Q)`
- `Shift Right` wird durch ein [[Schieberegister]] geregelt

> [!info] Schieben passiert im Kreis - was rechts aus $Q$ raus geht, kommt in $C$ wieder rein



## Schaltbild
![[Pasted image 20240923092117.png]]
Andere Varianten:
- 1 bit [[Serial Adder]]
- 2N bit Add
- 2-stufiges Netz (elementarschaltung)
- Speicher (Lookup-Table)

## Ah yes the Meth

$$p =u \cdot v = \left(\sum\limits_{i = 0}^{n - 1}u_{i}2^{i}\right)\cdot \left(\sum\limits_{j = 0}^{n - 1}u_{j}2^{j}\right)$$
$$= \sum\limits_{i=0}^{n-1}\sum\limits_{j=0}^{m-1}(u_{i}v_{j}2^{i+j})$$
$$= \sum\limits_{k=0}^{n + m - 1}p_{n2^k}$$

==> Ergebnis mit bis zu $n + m$ stellen!!!
