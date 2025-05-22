[[Gausstest]]

- gegeben: Kaffee in 1-kg Päckchen verpackt
- [[Standardabweichung]] von Lieferant gegeben -> $\sigma = 0.01$
- Menge $\gt 1$ im Interesse des Shops -> Man interessiert sich für **Unterschreitung**

### 1. Alternativen
- [[Nullhypothese]] $H_{0} =\mu \geq 1$
- [[Alternative Hypothese]] $H_{1} = \mu \lt 1$ 

=> ist in Fall $(a)$ 

### 2. [[Prüfgröße]]
- [[Stichprobe]] der Päckchen nehmen, um [[Punktschätzer Mittelwert|Mittelwert zu schätzen]]
	- Man erhält: $20$ Pächken ausgewertet
	- $\overline{X_{n}} = 0.99$
- Der Betreiber erlaubt sich ein Signifikanzniveau $\alpha = 0.05 = 5\%$


$$T = \frac{\overline{X_{n}} - \mu_{0}}{\frac{\sigma}{\sqrt{n}}}= \frac{0.99 - 1}{\frac{.01}{\sqrt{20}}} = -4.47 $$

### 3. [[Ablehnungsbereich]] definieren
- aus $\alpha = 0.05$ und dem festgestellten Fall $(a)$ folgt:

$$K = (-\infty, - z_{0.95})$$
- [[Standard-Normalverteilung]] hat [[Wahrscheinlichkeit]] von $0.95$ für $1.64$

$$\Rightarrow K = (-\infty,\ -1.64)$$

> [!error] OOOOOOOOOOOH DESWEGEN DIESES FUCKING Z -> ist die [[Umkehrfunktion]] von $\Phi$!!!!


### 4. Überprüfen
$$-4.47 \in K$$
=> wir können $H_{0}$ ablehnen: Mit einer [[Wahrscheinlichkeit]] von $5\%$ kann der Coffeeshop behaupten, dass der Großhändler weniger als 1 kg liefert.