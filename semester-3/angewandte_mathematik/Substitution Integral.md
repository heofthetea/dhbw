[[Funktion]], [[n-dimensionale Integration]], [[Determinante]]

[[Polarkoordinaten]]

$$\int\limits_{g(B)}^{\cdot}f(x)dx = \int\limits_{B}^{\cdot}\left(f(g(z) \cdot |det\ g'(z)|\right)$$




## Ein-Dimensional
1. Wähle einen Term $f(x)$ als $u$
2. Berechne $\frac{du}{dx} = u'$ 
3. Forme um: $dx = \frac{1}{u'}du$ 
4. Resubstitution: 


## Anwendung Polarkoordinaten
$$\int\limits_{g(B)}^{\cdot}f(x)dx = \int\limits_{B}^{\cdot}f(r\, cos(\phi), r\, sin(\phi)) \cdot r\ dr\,d\phi$$
1. Finde [[Urbild]] für $r$
	1. ist meistens durch eine Nebenbedingung für Kreis gegeben: $\set{(x_{1}, x_{2})|0 \leq x_{1}^{2} + x_{2}^{2} \leq 4} \Rightarrow r \in [0, 2]$ 
2. Setze Polarkoordinaten in obige Formel ein ($\phi \in [0, 2\pi]$)
3. mach normale [[n-dimensionale Integration]] (achte auf Ausrechnen des bestimmten Integrals)


## 3-dimensional
$$\int\limits_{g(B)}^{\cdot}f(\vec{x})dx = \int\limits_{B}^{\cdot}f(r\, cos(\phi)cos(\theta), r\, sin(\phi)cos(\theta), r\, sin(\theta)) \cdot r^{2}cos(\theta)\ dr\,d\phi\, d\theta$$
- [[Determinante]]: $r^{2} \cdot cos(\theta)$
- [[Polarkoordinaten]]
