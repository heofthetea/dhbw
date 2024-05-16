 [[Modulo]]
use [[oBdA]] lul: $a \gt b$ 

- $a = m \cdot g$ and $b = n \cdot g$, with $m \gt n$ 
- thus is $a = (m-n)g$ and $b = n\cdot g$ 
	- $g|a \land g|b$ is stil true!!
Observation: $a$ gets subtracted from $b$, until $a \leq b$ is true!
- when $b$ gets subtracted from $a$ $i$ times, then is $a_{0} = ib + a$
	--> $a = a_{0}\ mod\ b$
### optimized pseudo code
```python
def ggt(a, b):
	while a != b:
		if a == 0:
			return b
		if b == 0:
			return a
		if a > b:
			a = a % b
		else:
			b = b % a
	return a
```

### Runtime Analysis
- Ist $a ≥ 2b$: a mod $b < b ≤ a/2$
- Ist $a < 2b$: a mod b = a − b ≤ a − a/2 ≤ a/2 
- Also: a schrumpft auf höochstens die Hälfte 
- Außerdem: Nach dem Schritt ist b größergleich dem neuen a 
- Also: Im nächsten Schritt schrumpft b auf hpchstens die Hälfte 
- Zusammen: Nach zwei Schritten ist a + b um mindestens den Faktor 2 geschrumpft! I Wie oft kann eine Ganzzahl sich halbieren, bis 1 herauskommt

> ==> Number of iterations is limited by $2\cdot \log{2}{a + b}$  ([[Beschränktheit]])

