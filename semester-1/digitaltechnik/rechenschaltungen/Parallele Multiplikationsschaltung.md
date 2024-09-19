> $AND$-Gatter sind [[Multiplikationsschaltung]] 

$$p =u \cdot v = \left(\sum\limits_{i = 0}^{n - 1}u_{i}2^{i}\right)\cdot \left(\sum\limits_{j = 0}^{n - 1}u_{j}2^{j}\right)$$
$$= \sum\limits_{i=0}^{n-1}\sum\limits_{j=0}^{m-1}(u_{i}v_{j}2^{i+j})$$
$$= \sum\limits_{k=0}^{n + m - 1}p_{n2^k}$$

==> Ergebnis mit bis zu $n + m$ stellen!!!

![[Pasted image 20240209081553.png]]
- Eine Permuttation der $AND$-Glieder für jeden Schritt der Multiplikation
- Ergebnis der Multiplikation wird immer um _eins_ verschoben --> _niedrigste_ Wertigkeit geht _direkt_ and Output
- nutzt [[Halbaddierer]] und [[Volladdierer]], um Ergebnisse zu addieren

