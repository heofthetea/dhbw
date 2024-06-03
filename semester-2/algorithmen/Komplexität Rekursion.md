[[Recursion]]
### Beispiel Potenz
```python
def pr(m, n):
	if n == 0:
		return 1
	return m * pr(m, n - 1)
```

- Weniger offensichtlich als für [[Iteration]]
- Ansatz: [[Rekurrenzrelation]] bilden und daraus ableiten, wie oft sich die Funktion selbst aufruft