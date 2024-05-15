
### Pseudo Code
- **Input**: zwei $n \times n$ Matrizen
- **Output**: Produkt der Matrizen als $n \times n$ Matrix

```python
def matrix_multi(a, b):
	for x in range(n):
		for y in range(n):
			sum = 0
			for z in range(n):
				sum = sum + a[x, z] * b[z, y]
			c[x, y] = sum
	return c
```

Rolle der Variablen:
- $x$ Zeile von Matrix $a$
- $y$ Spalte von Matrix $b$
- $z$ Zeile von Matrix $b$ _und_ Spalte von Matrix $a$

### Analyse
#### Grobe Schätzung
- Verschachtelte Schleifen
	- Für jedes $x$ werden $n$ Operationen durchgeführt --> $n \cdot n$ mal
	- add another Loop --> $n \cdot n \cdot n = n^{3}$  

#### Detaillierte Analyse
Schleife $z$: 4 operationen, n mal
Schleife y:
- Enthält schleife z
- enthält 3 eigene Instruktionen
- wird n mal durchgeführt
--> $n \cdot (3 + 4n) = 3n + 4n^{2}$

... and so on

==> $4n^{3} + 3n^{2} + n + 1$ 

[[Komplexitätsberechnung bei Schleifen]]
