[[Komplexität]], [[Quick Sort]], [[Master Theorem]]

> [!warning] Effizienz hängt wesentlich von der Wahl des Pivot Elements ab!!!!
### Average Case
[[Rekurrenzrelation]]: 
- $c(n) = n$ ist [[Partitioning Quick Sort|Partitioning]]:
	- jedes Element wird mit Pivot verglichen
	- Aber: nur einmal über ganzes Array [[Iteration|iteriert]]
- $a = 2$ --> zwei Rekursive Aufrufe
- $b = 2$ (Liste wird halbiert)
- $+ c$ beschreibt [[Konstante Laufzeit|konstanten Aufwand]] für rekursiven Aufruf
==> 
$$qsort(n) = 2 \cdot qsort\left(\left\lfloor \frac{n}{2}\right\rfloor\right) + n + c$$
2. Fall: $2 = 2^{1}$ --> $\Theta(n log\, )$


### Worst case
Pivot ist ganz am Anfang oder Ende der sortierten Liste
$$q(n) = 1 \cdot q(n - 1)+ c_{1}n + c_{2}$$
--> gleiche [[Polynomielle Laufzeit|quadratische Laufzeit]] wie [[Selection Sort]]