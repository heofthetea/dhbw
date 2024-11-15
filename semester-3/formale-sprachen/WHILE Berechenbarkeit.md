Eine [[Abbildung|Funktion]] $f: (\Sigma^{*})^{n} \longrightarrow \Sigma$ heißt [[WHILE Berechenbarkeit|while-berechenbar]], wenn es ein [[WHILE Programm|WHILE Programm]] $P$ gibt, für das gilt:
- Wenn $P$ mit den Eingabewerten $n_{1}...n_{k}$ in den Variablen $x_{1}, ...x_{k}$ gestartet wird, 
	- terminiert $P$, falls $f(n_{1},...n_{k})$ definiert ist, mit dem Wert von $f(n_{1},...,n_{k})$ in der [[Variable]] $x_{0}$
	- sonst terminiert $P$ nicht
