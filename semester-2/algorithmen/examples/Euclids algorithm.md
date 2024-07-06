> In der Informatik beginnt $\mathbb{N}$ bei 0

[[euclid.c]]

### Formal
Problem: Find the greatest commond divisor (GCD) for two natural numbers $a$ and $b$.

Input: $a, b \in \mathbb{N}$ 
Outptu: $c \in \mathbb{N}$ with attributes:
- $c | a$ without rest
- $c | b$ without rest
- c is the _largest_ natural number with those attributes

### Pseudo-Code
```python
int a, b

def ggt(a, b):
	if a == b:
		return a
	else:
		c = abs(a - b)
		return ggt(c, min({a, b}))
```


### Problem: ggt(0)
[[Off-by-one error]]
