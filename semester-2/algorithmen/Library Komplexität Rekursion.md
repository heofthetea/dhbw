- [[Recursion]] und [[Iteration]] sind fundamentale Ansätze, um auf $n$ Elementen einer Datenstruktur zu arbeiten 
- vergleich von [[Fibonacci-Algorithmus]] auf beiden implementiert
	- [[Iteration]] hat [[lineare Laufzeit]]
	- [[Recursion]] hat [[exponentielle Laufzeit]], ist also _horrible_
		- Liegt daran, dass in jedem Rekursionsschritt zwei Mal herunter gerechnet werden muss
		- Im Endeffekt werden nur die Einsen aus dem [[Base Case]] addiert
			==> Jede Zwischensumme wird erneut kalkuliert
		- **Lösung**: [[Dynamic Programming]] --> [[Optimierung des naiven rekursiven Fibonacci-Algorithmus]]
### Dynamic Programming
- Ansatz von [[Dynamic Programming]]: Zwischenergebnisse einer [[Recursion]] cachen
- Ist fundamental eine _Optimierung_
	==> Erst Algorithmus entwickeln, dann optimieren
> [!warning] Anforderungen an Probleme für Viability [[Dynamic Programming]]
> 1. **Teilprobleme überlappen** sich
> 2. **Optimale Substruktur**: Gelöste Teilprobreme ergeben zusammengesetzt auch wirklich das Ausgangsproblem 
- [[Grenzen des Dynamic Programming]]:
	- oben genannte _Anforderungen_ an Probleme
	- Geht auf Kosten von Speicher (aber: nur space complexity von $O(n)$ -> neglectable)
#### Tipps
- (teilweise) aus [[Übung Dynamic Programming]]
1. Cachen nur, wenn es mit _Sicherheit_ die beste Lösung für das Teilproblem ist
2. Ansatz: Erst naiven [[Recursion|Rekursions]]-Ansatz finden, dann mit [[Dynamic Programming]] optimieren! 
3. make use of a `min()` Function to compute the best recursive call!

## Komplexitätsberechnung Rekursion
[[Komplexität Rekursion]]
- **Idee**: [[Rekurrenzrelation]] bilden und auflösen
	- $r(n) = 4 + r(n - 1) + r(n - 2)$ für [[Fibonacci-Algorithmus]]
	- Auflösung erfolgt nach keinem besonderen Verfahren
		- Faustregel: $c \cdot n$ ~> $c^{n}$  
			- $r(n) = r(\frac{n}{2})$ --> $O(log_{2}\, n)$ ([[Binary Search]])
### [[Master Theorem]]
Dient der Berechnung von [[Komplexität Rekursion|rekursiver Komplexität]] für [[Divide and Conquer]]-Algorithmen
$$f(n)= a \cdot f\left(\left\lfloor\frac{n}{b}\right\rfloor\right)+c(n),\ \ \ \ mit \ c(n) \in O(n^{d})$$
- $a$: Kostenaufwand für Bilden der [[Recursion]]
- $c(n)$: Kostenaufwand für Zusammensetzung der Teilelemente --> muss [[Polynom|polynomielle]] [[Komplexität|Laufzeit]] haben
##### Fallunterscheidung
1. $a < b^{d} \Rightarrow f(n) \in O(n^d)$ --> <span style="color:rgb(0, 122, 255)">Kombination </span>dominiert <span style="color:rgb(126, 198, 54)">Rekursion</span>
2. $a = b \Rightarrow f(n) \in O(log_{b}(n)\cdot n^{d})$ --> <span style="color:rgb(0, 122, 255)">Kombination</span> und <span style="color:rgb(126, 198, 54)">Rekursion</span> sind _gleichwertig_
3. $a \gt b^{d} \Rightarrow f(n) \in O(n^{log_{b}\, a})$ --> <span style="color:rgb(126, 198, 54)">Rekursion</span> dominiert <span style="color:rgb(0, 122, 255)">Kombination</span>

> [!warning] Funktioniert nur für [[Divide and Conquer]] Algorithmen
>-  Größe des Inputs muss sich in jedem Schritt um einen multiplikativen Faktor verringern ($b \geq 2$)
