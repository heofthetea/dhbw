![[Algorithmen.pdf#page=84]]

[[make_smol.py]]
```python
def make_smol(n, cache):
    if n == 1:
        return 0
    
    if cache[n]:
        return cache[n]

    res = 1 + make_smol(n - 1, cache)

    if n % 2 == 0:
        res = min(1 + make_smol(n // 2, cache), res)
    if n % 3 == 0:
        res = min(1 + make_smol(n // 3,  cache), res)

    cache[n] = res
    return res
```

> [!warning]- Handling cache when handling the recursive call is stupid
> that's how it used to be lol: I tried to handle caching inside the if statements lol

==> [[lineare Laufzeit]]
Pro Zahl: $1 + \frac{1}{2} + \frac{1}{3} = 1\frac{5}{6}$ Scrhitte benötigt
--> Linear mit Faktor ~ 2