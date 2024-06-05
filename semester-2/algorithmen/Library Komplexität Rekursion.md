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

## Komplexitätsberechnung Rekursion
[[Komplexität Rekursion]]
- **Idee**: [[Rekurrenzrelation]] bilden und auflösen
	- $r(n) = 4 + r(n - 1) + r(n - 2)$ für [[Fibonacci-Algorithmus]]
	- Auflösung erfolgt nach keinem besonderen Verfahren
		- Faustregel: $c \cdot n$ ~> $c^{n}$  
			- $r(n) = r(\frac{n}{2})$ --> $O(log_{2}\, n)$ ([[Binary Search]])