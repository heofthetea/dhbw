> [!hint] [[endliche Sprachen]] sind eine [[Teilmenge]] der [[Reguläre Sprache|regulären Sprachen]]

- Jede endliche Sprache ist regulär
	- warum? ✨[[Bruteforce]]✨ [[Transformation RegEx -> NFA|NFA aus RegEx]] für jedes Zeichen und $\epsilon$-Übergänge --> wird eine endliche [[Zustand|Zustandsmenge]] sein

> [!hint] Jeder [[NFA]] ohne Zyklus beschreibt eine endliche Sprache.
> Ein [[DFA]] _muss_ [[Zyklus|zyklisch]] sein aufgrund Totalität von $\delta$ - Endliche Sprache erkennbar dadurch, dass von Zyklus kein [[Pfad]] zum [[Endzustand]] existiert


## Algorithmus
[[Endlichkeitsproblem]]
1. Markiere _iterativ_ alle von [[Startzustand]] $q_{0}$ aus erreichbaren [[Zustand|Zustände]] 
2. Markiere _iterativ_ alle Zustände, von denen aus ein $q \in F$ erreichbar ist, als terminierend.
3. Sei $A_{r}$ der [[NFA]], der nur die Zustände von $A$ enthält, die sowohl erreichbar als auch terminierend ist. 
$\mathcal{L}(A)$ ist unendlich, wenn $A_{r}$ [[Zyklus|zyklisch]] ist.


> [!warning] es muss erreichbar **und** terminierend sein!!
