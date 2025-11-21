> LDF = Lineare [[Diskriminanzfunktion]]

- Anhand von [[Trainingsdaten|Trainingssamples]] $(x_{n}, y_{n})^{*}$
- Betrachtung als Optimierungsproblem:
	- Kostenfunktion $J(\nu)$ definiert:

$$\nu  = \set{\omega_{j}, \omega_{j0}\ |\ 1 \leq j \leq c}$$
$$\hat{\nu} = \text{arg}\ \underset{\nu}{\text{min}}\ J(\nu)$$
## Minimierung der Kostenfunktion
- z.B. durch [[Least Squares]]
- oder: Maximum-Margin (=> [[Support Vector Machine|SVM]])