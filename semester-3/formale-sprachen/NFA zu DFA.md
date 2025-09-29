---
aliases:
  - Powerset Construction
---
[[Potenzmenge]], [[DFA]], [[NFA]], [[epsilon-Abschluss]], [[mögliche Folgezustände einer Zustandsmenge]]

Der zu einem [[NFA]] $A = (Q, \Sigma, \Delta, q_{0}, F)$ gehörende [[DFA]] ist:

$$det(A)= (2^{Q}, \Sigma, \hat{\delta}, ec(q_{0}), \hat{F})$$
mit: $$\hat{F} = \set{M \in 2^{Q}\ |\ M \cap F \neq \varnothing}$$
> [!hint] [[Startzustand]] ist jetzt der [[epsilon-Abschluss]] des ursprünglichen Startzustands

> [!hint] Ein [[Zustand]] ist ein [[Endzustand]], wenn die von ihm dargestellte [[Menge]] den [[Endzustand]] von $A$ enthält.

[[Übung 2.35 NFA zu DFA]] 
## Optimierung
- Nicht jedes mal [[Potenzmenge]] berechnen
- Einfach nur die [[Menge|Mengen]] generieren, wenn man sie braucht

## Beispiel
![[Pasted image 20240920112735.png]]
- jeder einzigartigen [[Menge]] wird ein eigener [[Zustand]] gegeben
- $3 \in S_{1}, S_{3}$ ==> $S_{1}$ und $S_{3}$ sind [[Endzustand]]

> [!hint] [[Zustand]] der [[Leere Menge|leeren Menge]] wird zum [[Müllzustand]] $S_{j}$


### Ergebnis
![[Pasted image 20240920113036.png]]