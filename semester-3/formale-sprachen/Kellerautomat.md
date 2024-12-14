> Maschinenmodell für [[Kontextfreie Sprache|kontextfreie Sprachen]]

- ist ein [[NFA]], der zusätzlich einen [[Stack]] als unbeschränkten Speicher besitzt

> [!hint] Deterministische Kellerautomaten sind _echt schächer_ als dieser nichtdeterministischer [[Kellerautomat]].

> [!info] Sobald es ein Übergangspaar $((0, \epsilon, Z, ...), (0, a, Z, ...))$ gibt, ist der KA bereits [[Nichtdeterminismus|nichtdeterministisch]].

## Formal
Definiert als $6$-[[Tupel]]
$$KA = (G, \Sigma, \Gamma, \Delta, q_{0}, Z_{0})$$
- [[Konfiguration KA]] ist ein 3-[[Tupel]] $\subset Q \times \Sigma^{*} \times \Gamma^{*}$ 
- $Z_{0} \in \Gamma$ ist das [[Stack]]-Startsymbol, also das [[Symbol]], das am Anfang auf dem [[Stack]] steht.

> [!hint] $\Gamma$ und $\Sigma$ müssen nicht disjunkt sein! 
## Übergangsrelation
[[Übergangsrelation]] wird erweitert durch  _gelesenes Stack-Symbol_ und _zu schreibendes Symbol_

$$\Delta \subset Q \times \Sigma \cup \set{\epsilon} \times \Gamma \times \Gamma^{*} \times Q$$

> [!warning] Wenn der [[Stack]] leer ist, gibt es keine Übergänge mehr!!!

- es muss immer ein [[Symbol]] auf [[Stack]] geschrieben werden, und muss _mindestens_ ein Symbol gelesen werden
## Akzeptanz
- Ein [[Kellerautomat]] akzeptiert eine Eingabe, wenn das [[Wort]] _vollständig_ gelesen wurde, und der [[Stack]] leer ist

> [!hint] Kann auch mit [[Endzustand|Endzuständen]] definiert werden (dann ist Inhalt des [[Stack]] egal), aber:
> - Definition wird umfangreicher $7$-[[Tupel]]
> - Alle Beweise sind schwerer


## Beispiel
[[Beispiel Kellerautomat]]
[[Übung 3.37 Kellerautomat Palindrome]]