[[Greedy Algorithm]] zum Finen eines [[Minimaler Spannbaum|Minimalen Spannbaums]]

1. $E_{T} = \varnothing$ - [[Menge]] der [[Kante|Kanten]] auf dem [[Minimaler Spannbaum|Spannbaum]]
2. wähle <span style="color:rgb(245, 154, 35)">beliebigen</span> Start[[Knoten|knoten]] $v_{s}$ und füge ihn zur [[Menge]] der besuchten Knoten $V_{b}$ hinzu
3. nehme die <span style="color:rgb(245, 154, 35)">billigste</span> [[Kante]] $e$, die von $v_{s}$ zu einem noch nicht besuchten [[Knoten]] $v_{n}$führt
	1. $E_{T} = E_{T}\cup \set{e}$ und $V_{b}= V_{b}\cup v_{n}$
4. wiederhole, bis $V_{b}= V$ (alle [[Knoten]] wurden besucht)

### Komplexität
[[Polynomielle Laufzeit]]
Abhängig von $|V|$: Jeder [[Knoten]] muss besucht werden
Abhängig von $|E|$: Für jeden besuchten Knoten, muss jede [[Kante]] angeschaut werden

$$\in \mathcal{O}(|V| \cdot |E|)$$
> [!hint] Performance ist abhängig von **Dichte** des [[Graph|Graphen]]

> [!warning] Es hängt von _beiden_ größen ab, $\mathcal{O}(n^{2})$ wäre falsch!

in [[Big O]] mit herkömmlichen $n$: jeder Knoten ist mit jedem anderen verbunden --> $$\mathcal{O}(n \cdot n^{2}) =  \mathcal{O}(n^{3})$$
## Beispiel
![[Pasted image 20240712105031.png]]