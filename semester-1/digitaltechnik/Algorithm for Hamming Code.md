[[Example Hamming-Code 16-bit]]
### Encoding
1. divide Message into 11 bit blocks
2. leave indices $\set{0, 1, 2, 4, 8}$ as [[Parity]] [[Bit|Bits]]
3. place 11bit information in Order
4. Set [[Parity]] Bits accordingly

### Decoding
[[Position of Parity Bits]]
1. Narrow down where error can be by control group
2. If Error's location is determined: _correct by flipping bit_

![[Pasted image 20240216165516.png]]

### Decoding - alternative
1. einzelne Felder [[Binärsystem|binär]] adressieren ($0000 - 1111$)
2. Die [[Adresse|Adressen]], an denen eine $1$ steht, aufschreiben
3. Spaltenweise (_dezimal_) aufsummieren
4. Spaltenweise [[Modulo|mod]] $2$
5. Ergebnis ist die fehlerhafte Adresse

> [!hint] ist $0$, wenn es keinen Fehler gibt

![[Pasted image 20250410095543.png]]