> essentieller Teil [[Transformation NFA -> DFA]]

[[epsilon-Abschluss]], [[Abbildung]], [[Operationen auf Mengen#Union|Mengenvereinigung]]
- transformiert eine [[Übergangsrelation]] in eine [[Übergangsfunktion]]


$$\delta': Q\times \Sigma \rightarrow 2^{Q}$$
$$\delta'(q, c) = \bigcup\limits_{r \in Q: (q, c, r) \in \Delta}ec(r)$$
- [[Abbildung]] eines Paares $(q, c)$
- auf eine [[Menge]] _aller_ [[Zustand|Zustände]], die der [[NFA]] von $q$ aus erreichen kann
	- indem er _zuerst_ $c$ liest
	- und _danach_ beliebig viele [[ε-Übergang (epsilon-Übergang)|epsilon-Übergänge]] durchführt

> [!warning] Zustandsmenge des [[DFA]] ist [[exponentielle Laufzeit|exponentiell]] größer als des [[NFA]]

> [!warning] $\delta'$ kann man nicht als neue Übergangsfunktion nehmen - funktioniert nur für _einen_ Buchstaben!
## Beispiel
![[Pasted image 20240920111344.png]]
- "von 0 komme ich mit dem a bis zu 0, 1, oder 3"
- "von 0 komme ich mit b nirgendwo hin --> [[Leere Menge]]"