[[Folge]]
Implementation: [[fibonacci.py]]
$$F_{n + 1} = F_{n} + F_{n-1}\ \ \ , F_{1} = F_{2} = 1$$
> [!hint] Die Folge wächst zu jedem Element um den [[Goldener Schnitt|Goldenen Schnitt]]

## Komplexitätsanalyse
[[Komplexität]]
### Rekursiv
[[Recursion]] 
```python
def fibonacci(n):
    if n < 1:
        return 0
    if n in [1, 2]:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)
```

Für jeden Rekursionsschritt müssen zwei Zwischenergebnisse ausgerechnet werden
--> Problem: muss immer wieder bis auf f(1) runter kalkulieren
- Es wird immer nur 1 addiert, weil alle Additionen außer dem [[Base Case]] nur Zwischenergebnisse sind

Reihenfolge der Rekursionsaufrufe: $x$ wird ausgegeben
```
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 2, 1, 4, 3, 2, 1, 2, 5, 4, 3, 2, 1, 2, 3, 2, 1, 6, 5, 4, 3, 2, 1, 2, 3, 2, 1, 4, 3, 2, 1, 2, 7, 6, 5, 4, 3, 2, 1, 2, 3, 2, 1, 4, 3, 2, 1, 2, 5, 4, 3, 2, 1, 2, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 2, 1, 4, 3, 2, 1, 2, 5, 4, 3, 2, 1, 2, 3, 2, 1, 6, 5, 4, 3, 2, 1, 2, 3, 2, 1, 4, 3, 2, 1, 2
```

--> fucking [[exponentielle Laufzeit|exponential growth]] ???????

> (für $39$ Elemente werden $13$ Sekunden benötigt (von Rechner mit core i7))
--> Die Komplexität des Fibonacci-Algorithmus wächst in der Größenordnung der Fibonacci-Zahlen

$$fibonacci\_{recursive}\ \in\ O(F_n)$$

#### Oder:
$$fibo\_{recursive}\in O(\Phi^{n})$$
### Iterativ
```python
def fibonacci_iterative(n):
    a, b = 1, 1
    for _ in range(3, n + 1):
        a, b, = b, a + b
    return b
```
--> help
> [!hint] In python, 2 variables can be swapped without requiring a temp variable

> $200\, 000$ Elements result in ~ .5s runtime lol
### The best
just approximate it (and round) via [[Goldener Schnitt|Golden Ratio]] 
```python
def fibonacci_absolute(n):
    phi = (1 + 5 ** 0.5) / 2
    phi_1 = -1 / phi

    return round((1/5 ** 0.5) * (phi ** n - phi_1 ** n))
```