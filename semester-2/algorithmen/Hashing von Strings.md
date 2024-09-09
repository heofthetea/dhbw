> Horner-Schema

- Transformiere String in Basis $b$
- [[Java]] benutzt das

## Implementation
```python
def has(string, n):
	h = 0
	for i in range(len(string)):
		h = (h * b + ord(string[i])) % n
	return h
```