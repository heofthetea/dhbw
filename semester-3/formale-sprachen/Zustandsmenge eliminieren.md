> [[Kellerautomat]] in einen mit nur einem [[Zustand]] transformieren

[[Kellerautomat]], [[Übung Zustandsmenge eliminieren]]


- **Gegeben**: $A = (Q, \Sigma, \Gamma, \Delta, q_{0}, Z_{0})$
- **Gesucht**: $A' = (\set{q'}, \Sigma, \Gamma', \Delta', q', Z')$

### Idee
Codiere [[Zustand|Zustände]] von $A$ in [[Stacksymbol]] von $A'$
- verwende Tripel $[p\ X\ q]$   
- Codierte Bedeutung: $A$ muss von $p$ zu $q$ übergehen und dabei $x$ löschen
- ein Tripel wird am Ende zu _einem_ [[Stacksymbol]]

![[Pasted image 20241016134303.png]]

> [!warning] [[Automat]] muss _alle_ [[Zustand|Zustände]] raten, sobald er [[Stacksymbol]] erzeugt --> wird [[exponentielle Laufzeit|exponentiell]]🥲

## Formal
Gegeben ein [[Kellerautomat]] $A = (Q, \Sigma, \Gamma, \Delta, q_{0}, Z_{0})$
Der [[Automat]] $A' = (\set{q'}, \Sigma, \Gamma', \Delta', q', Z')$ ist definiert wie folgt:
- $\Gamma' = \set{Z'} \cup \set{[pXq]\ |\ \set{p, q} \subset Q \land X \in \Gamma}$
- Für jeden Übergang $(p, c, X, Y_{1}\cdot Y_{2}\cdot ...\cdot Y_{n}, q) \in \Delta$ enthält $\Delta'$ alle Übergänge: #todo
- Zusätzlich erhält $\Delta'$ für jeden [[Zustand]] $q \in Q$ einen Übergang
$$(q', \epsilon, Z', [q_{0}\ Z_{0}\ q], q')$$

## Bild
![[Pasted image 20241016135237.png]]

- $q$ aus gelesenem Stacksymbol muss $q$ aus _letztem_ geschriebenem Stacksymbol entsprechen
	- dazwischen halt hoch zählen
