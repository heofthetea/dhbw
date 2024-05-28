[[Fibonacci-Folge]]
- Oft ist es nicht (leicht) möglich, eine Funktion iteratirv zu berechnen

==> Wie kann man einen [[Recursion|rekursiven]] Algorithmus auf $O(n)$ bringen?
Solution: _Zwischenspeichern_ von Ergebnissen
- Kein Zwischenergebnis wird mehrfach berechnet

### Ansatz
```python
fibd(n):
	if n in [1, 2]:
		return 1
	if fib_cache[n] == 0:
		fib_cache[n] == fibd(n - 1) + fibd(n - 2)
	return fib_cache[n]
```

| call   |                             |
| ------ | --------------------------- |
| fib(7) | (call to fib(6))            |
| fib(6) | (call to fib(5))            |
| fib(5) | (call to fib(4))            |
| fib(4) | (call to fib(3))            |
| fib(3) | (call to fib(2) and fib(1)) |
| fib(2) | hard-return 1               |
| fib(1) | hard return 1               |
| fib(3) | cache\[3] = 1 + 1           |
| fib(4) | cache\[4] = 2 + 1           |
| fib(5) | cache\[5] = 3 + 2           |
| fib(6) | cache\[6] = 5 + 3           |
| fib(7) | cache\[7] = 8 + 5           |
==> $O(2n - 1)$ (only looking at function calls)
+ initialisieren des Cache-Arrays mit $O(n)$
==> $O(3n - 1)$ 

--> Linear performance at the cost of [[Space Complexity]]


