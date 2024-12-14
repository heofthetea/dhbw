
# Integration
### Substitution mit Kugelkoordinaten
$$\int f(r\,cos(\theta),\ r\,sin(\theta))\cdot r\ dr\,d\theta$$

# Differenzialgleichungen
## Erster Ordnung
> [!hint] Gesuchte Funktion wird als Variable behandelt
### seperierte Differenzialgleichung
[[seperierbare Differenzialgleichung]]
$$y' = \frac{f(x)}{g(y)}$$
dann gilt: 
$$\int g(y)dy = \int f(x)dx$$

#### Sonderformen
##### Lineare Substitution
[[Lineare Substitution]]: $f(ax + by + x) = f(u)$
$$\int{\frac{1}{a+bf(u)}du} = x + c_{ste}$$


##### Ähnlichkeits-Differenzialgleichungen
$$y' = f\left(\frac{y}{x}\right);\ \ \ u = \frac{y}{x}$$
$$\Longrightarrow \int{\frac{1}{f(u)- u}}du = \int{\frac{1}{x}}dx$$

## Lineare Differenzialgeichungen
[[Lineare Differenzialgleichung]], [[Lösung linearer Differenzialgleichung]]

### Erste Ordnung
$$a_{1}(x)y' + a_{0}y = 0$$
$$y = c \cdot e^{-f};\ \ \ \ f = \int{\frac{a_{0}}{a_{1}}}dx$$
