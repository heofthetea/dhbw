> Für [[Reguläre Sprache|reguläre Sprachen]] entscheidbar.


## Frage
Ist eine gegebene [[Sprache]] $L_{1}$ [[endliche Sprachen|endlich]]?

## Algorithmus
1. Markiere _iterativ_ alle von [[Startzustand]] $q_{0}$ aus erreichbaren [[Zustand|Zustände]] 
2. Markiere _iterativ_ alle Zustände, von denen aus ein $q \in F$ erreichbar ist, als terminierend.
3. Sei $A_{r}$ der [[NFA]], der nur die Zustände von $A$ enthält, die sowohl erreichbar als auch terminierend ist. 
$\mathcal{L}(A)$ ist unendlich, wenn $A_{r}$ [[Zyklus|zyklisch]] ist.


> [!warning] es muss erreichbar **und** terminierend sein!!
