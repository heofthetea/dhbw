> Repräsentation eines [[Graph|Graphen]] in einem Computer


Die Adjazenzmatrix $A$ für einen [[Graph]] mit $n$ [[Knoten]] hat die Dimension $n\times n$. Die Elemente nehmen die Werte $0$ oder $1$ an. $A(x, y) = 1$ bedeutet, dass es eine [[Kante]] von $X$ nach $Y$ gibt.

--> ist 2-dimensionales [[Array]]

> [!warning] Problem: Matrix skaliert quadratisch, dafür zeitlich effizient!
> (Zugriff in [[Konstante Laufzeit|konstanter Zeit]])

![[Pasted image 20240712094122.png]]

==> Effizient, wenn es wenige [[Knoten]] gibt, aber viele [[Kante|Kanten]]
### Komplexität
Platz: $\mathcal{O}(|V|^{2})$


## auf [[beschrifteter Graph|beschrifteten Graphen]]
- Knotenbeschriftung ist Name der Knoten
- Anstatt $1$ steht die Beschriftung der [[Kante]] in der [[Matrix]], anstatt $0$ ein default wert
	- Beispiel `null` in [[OOP]]-Graphen
