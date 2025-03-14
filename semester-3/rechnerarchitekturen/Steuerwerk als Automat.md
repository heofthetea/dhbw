[[Steuerwerk]], [[Mealy-Automat]], [[Wilkes-Stringer Steuerwerk]]

> [!hint] [[CPU|Prozessoren]] haben keinen [[Endzustand]] --> [[Befehlszyklus|Holen, abarbeiten, holen, abarbeiten,...]]

- Eingabe-[[Wort]]: [[Mikro-Programm]]
- Ausgabe-[[Wort]]: [[Mikro-Operation]] als [[Steuersignal]]

$$A = (Q, \Sigma_{bin}, Y,  \delta, \beta, q_{0}, F)$$

> [!hint] [[Übergangsfunktion]] und Ausgabefunktion sind jeweils durch ein eigenes Schaltnetz realisiert. Diese werden  hier als Black Box behandelt.

[[Mealy-Automat]]
- $\beta: X \times Q \rightarrow Y$
[[Moore-Automat]]
- $\beta: Q \rightarrow Y$

## Beispiel
[[Zustandsdiagramm]]
$\Sigma = \set{0, 1}$
$Y = \set{\vec{y_{1}}, \vec{y_{2}}}$ 
$Q = \set{q_{1}, q_{2}}$ 
$S = q_{1}$ 
$F = \varnothing$ (kein [[Endzustand]] bei Prozessoren)

![[Pasted image 20241011142940.png]]