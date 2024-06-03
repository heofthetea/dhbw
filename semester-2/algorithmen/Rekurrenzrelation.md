> Gleichung, die sich selbst enthält xd

[[Relation]] von $n$ zu $n$ 

[[Algorithmen.pdf#page=89]] 

$r(n)$ ist die Anzahl der ZE, die zur Berechnung eines [[Recursion|rekursiven]] Funktion `pr(m, n)` benötigt werden.
- $r(0) = 2$
- $r(n) = 3 + r(n - 1)$ für $n \gt 0$
	--> $r(n) \approx 3n \in o(n)$ 