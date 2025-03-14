[[mögliche Folgezustände eines einzelnen Zustand]]

$$\hat{\delta}: 2^{Q} \times \Sigma \rightarrow 2^{Q}$$
$$\hat{\delta}(M, c)= \bigcup\limits_{q\in M}\delta'(q, c)$$

- [[Abbildung]] eines Paares $M, c$ mit einer [[Zustand|Zustandsmenge]] $M$ 
- auf die [[Menge]] aller Zustände, die der [[NFA]] von _einem_ Zustand in $M$ aus erreichen kann
	- indem er _zuerst_ $c$ liest
	-  und danach beliebig viele [[ε-Übergang (epsilon-Übergang)|epsilon-Übergänge]] durchführt