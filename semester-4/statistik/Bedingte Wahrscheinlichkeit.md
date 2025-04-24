> Die [[Wahrscheinlichkeit]] eines [[Ereignis]] $A$ ist abhängig von dem Ausgang eines vorhergehenden [[Zufallsvorgang|Zufallsexperimentes]] $B$


Sei $P(B) \gt 0$, so ist
$$P(A|B) = \frac{P(A \cap B)}{P(B)}$$
Die [[Bedingte Wahrscheinlichkeit]] von $A$ **unter der Bedingung**, dass $B$ eingetreten ist.


> [!hint] Wird oft bei [[Künstliche Intelligenz|KI]] verwendet


## Beispiel Würfel
- $A = \set{6}$
- $B = \set{2, 4, 6}$ (gerade Zahl würfeln)
- Wahrscheinlichkeit, eine 6 zu würfeln ($A$), mit dem Vorwissen, dass ein gerade Zahl gewürfelt wurde ($B$)

$$P(A|B) = \frac{\frac{1}{6}}{\frac{1}{2}} = \frac{2}{6} = \frac{1}{3}$$