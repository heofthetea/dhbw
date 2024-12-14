> kurz: **SAT**: Die Frage, ob eine gegebene [[Lgk 1.2 Prädikatenlogik.pdf|prädikatenlogische]] Formel [[Erfüllbarkeit|erfüllbar]] ist oder nicht.

> [!info] [[Erfüllbarkeitsproblem|SAT]] ist [[NP-Vollständigkeit|NP-vollständig]].

## Beweis NP-vollständig
### 1. SAT $\in NP$
#todo 

### 2. Jedes $L \in NP$ auf SAT reduzierbar
gegeben: Eine $p$-zeitbeschreänkte [[Nichtdeterminismus|nichtdeterministische]] [[Turing Machine]] $M$, die $L$ entscheidet

> [!info] Idee: Formuliere $M$ und $w$ als aussagenlogische Formel $\varphi_{w}$.
> $\varphi_{w}$ ist genau dann erfüllbar, wenn $M$ akzeptiert.

#### Aussagevariablen
- $B_{t, i, a}$: Zur Zeit $t$ steht auf Feld $i$ [[Symbol]] $a$
- $K_{t,i}$: Zur Zeit $t$ steht der Kopf auf Position $i$
- $Q_{t,q}$: Zur Zeit $t$ ist $M$ im Zustand $q$

> [!hint] $Q,\Gamma$ ist endlich; Werte für $t$ und $i$ [[Polynom|polynomiell]] => Diese Formel ist auch polynomiell lang, in der Größe der Eingabe $w$.

#### Bildung der Formeln
![[Pasted image 20241120143137.png]]

