> Physische Hindernisse für die Ausbreitung

[[Funk]]

- dieselben Daten (blau, gelb) kommen zeitversetzt am Empfänger an

> [!hint] [[OFDM]] macht irgendwie Magie, dass die einzelnen Ausbreitungswege als verschiedene [[Kanal|Kanäle]] genutzt werden können. Genannt: **Spacial Stream**

![[Pasted image 20250320114252.png]]

## Behebung
- basiert auf [[Kanalabschätzung]]
- aber: Anstatt immer $1$ oder $-1$ kommen Anteile $a$ an ($\frac{1}{8}$, $\frac{-1}{4}$,...)
	- Prinzip bleibt aber: nur bei Match -> Ergebnis ist nicht $16$, sondern $16 \cdot \frac{1}{a}$ 