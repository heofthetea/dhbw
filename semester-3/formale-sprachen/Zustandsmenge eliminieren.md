> [[Kellerautomat]] in einen mit nur einem [[Zustand]] transformieren

[[Kellerautomat]], [[Übung Zustandsmenge eliminieren]]


- **Gegeben**: $A = (Q, \Sigma, \Gamma, \Delta, q_{0}, Z_{0})$
- **Gesucht**: $A' = (\set{q'}, \Sigma, \Gamma', \Delta', q', Z')$

### Idee
Codiere [[Zustand|Zustände]] von $A$ in [[Stacksymbol]] von $A'$
- verwende Tripel $[p\ X\ q]$   
- <span style="color:rgb(245, 154, 35)">Codierte Bedeutung:</span> $A$ muss von $p$ zu $q$ übergehen und dabei $x$ löschen
- ein Tripel wird am Ende zu _einem_ [[Stacksymbol]]

![[Pasted image 20241016134303.png]]

> [!warning] [[Automat]] muss _alle_ [[Zustand|Zustände]] raten, sobald er [[Stacksymbol]] erzeugt --> wird [[exponentielle Laufzeit|exponentiell]]🥲

## Formal
Gegeben ein [[Kellerautomat]] $A = (Q, \Sigma, \Gamma, \Delta, q_{0}, Z_{0})$
Der [[Automat]] $A' = (\set{q'}, \Sigma, \Gamma', \Delta', q', Z')$ ist definiert wie folgt:
- $\Gamma' = \set{Z'} \cup \set{[pXq]\ |\ \set{p, q} \subset Q \land X \in \Gamma}$
- Für jeden Übergang $(p, c, X, Y_{1}\cdot Y_{2}\cdot ...\cdot Y_{n}, q) \in \Delta$ enthält $\Delta'$ alle Übergänge:
$$(q', c, [pXq_{n}], [qY_{1}q_{1}]\cdot[q_{1}Y_{2}q_{2}]\cdot...\cdot[q_{n-1}Y_{n}q_{n}], q')$$
- Zusätzlich erhält $\Delta'$ für jeden [[Zustand]] $q \in Q$ einen Übergang
$$(q', \epsilon, Z', [q_{0}\ Z_{0}\ q], q')$$


## In Praxis
1. Gehe durch jede einzelne existierende [[Übergangsrelation]] durch
2. Kategorisiere die [[Übergangsrelation]] anhand von unten gegebenem [[#Bild]] 
3. Für jede freie [[Zustand|Zustands]]-Variable $q_{i}$:
	1. Alle [[Permutation|Permutationen]] durchgehen und generierte [[Übergangsrelation]] hinzufügen
4. Umgang mit  [[Stack]]-[[Startsymbol]]: [[ε-Übergang (epsilon-Übergang)|epsilon-Übergang]] $(q', \epsilon, Z', [q_{0}\ Z_{0}\ q], q')$ für jeden [[Zustand]] $q$ hinzufügen

> [!hint] In einem Übergang, der _zwei_ Symbole auf [[Stack]] schreibt liest (angenommen der [[Stack]] hat $3$ [[Zustand|Zustände]]):
> - es gibt zwei neue Übergangsvariablen $[qAq_{2}][q_{2}Bq_{1}]$
> - Es gibt also insgesamt $2^{3}$ mögliche Belegungen für $q_{1}$ und $q_{2}$
 

## Bild
![[Pasted image 20241016135237.png]]

- $q$ aus gelesenem Stacksymbol muss $q$ aus _letztem_ geschriebenem Stacksymbol entsprechen
	- dazwischen halt hoch zählen
