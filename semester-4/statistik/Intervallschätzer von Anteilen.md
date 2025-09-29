[[Konfidenzintervall]], [[Bernoulli-Verteilung]]

- Die [[Stichprobe]] wird angenommen, aus unabhängigen [[Bernoulli-Verteilung|Bernoulli-Experimenten]] zusammenzusetzen - $\overline{p}$ ist Erfolgswahrscheinlichkeit

![[Pasted image 20250507091806.png]]


- $\overline{p}$ -> [[Punktschätzer von Anteilen]]
- $\alpha$: [[Konfidenzintervall|Fehlerwahrscheinlichkeit]]/Niveau
- $z_{k}$ ist der $k$-te Quantil der [[Normalverteilung]] => $\Phi^{-1}(y) = k$  

> [!hint] Faustrgel für angemessene Approximation: $n\overline{p} \geq 5 \ \land\ n(1-\overline{p}) \geq 5$ 

> [!hint] Das $1-\frac{\alpha}{2}$ kommt daher, dass sich der Fehler auf zwei Seiten "aufteilen" muss.
## Alrorithm
1. Definiere die Fehlerwahrscheinlichkeit $\alpha$
2. Calculate $u = 1 - \frac{\alpha}{2}$
3. Errechne $\Phi(u)$ (-> [[Standard-Normalverteilung]])
	1. Benenne $\Phi(u)$ um in $z_{u}$ bruh BRO STAY CONSISTENT WITH YOURSELF MAN
4. $\overline{p}$ ist die Erfolgswahrscheinlichkeit in einer [[Bernoulli-Verteilung]] digga ich kann nicht mehr wie du willst das nicht motivieren das hier ist einfach ein bunch of gibberish