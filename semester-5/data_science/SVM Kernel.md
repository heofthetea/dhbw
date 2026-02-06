> Umgang mit nicht-linearen [[Entscheidungsgrenze]]n für [[Support Vector Machine|SVM]]

> [!hint] Standard, weil besser als [[Feature Mapping]].

- Definieren einer Kernel-[[Abbildung|Funktion]]:

$$K(x_{i}, x_{j}) = \phi(x_{i})^{t}\phi(x_{j})$$

- Lösung: Eine _weitere_ [[Dimension]] hinzufügen
	- -> wenn eine Ebene mit dem schneidet, wird es nieder-ebener zu einer anderen Form

![[Pasted image 20251110085832.png]]

## Vorteil
- $K(x_{i}, x_{j})$ kann in $\mathbb{R}^{d}$ berechnet werden (obwohl im Hintergrund mit höheren Dimensionen gearbeitet wird)
	- => Man spart enorm Rechenleistung

## Arten
- [[Polynom]]
- [[Sigmoid]]

### Radiale Basisfunktion
$$K(x_{i}, x_{j}) = \exp(-\gamma \cdot ||x_{i} - x_{j}||)$$
=> $\gamma$ ist [[Hyperparameter]] (s. [[Support Vector Machine#Hyperparameter]])

![[Pasted image 20251121144207.png]]

