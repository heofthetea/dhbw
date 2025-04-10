[[notenformel.png]]

$$N = max\left(1, min\left(5, \left(1 - \frac{3.1\cdot P_{1}}{P_{4} - P_{1} - 0.1}\right)+ \frac{3.1 \cdot P}{P_{4} - P_{1} - 0.1}\right)\right)$$
- $N$ = resultierende Note
- $P$ = tatsächliche Punktzahl
- $P_{1}$ = notwendige Punktzahl für Note $1.0$ (bei Modulnoten: $P_{1} = 100$)
- $P_{4}$ = notwendige Punktzahl für Note $4.0$ (idR: $P_{4} = \frac{P_{1}}{2}$)


## Script
[[notengebung.py]]
```python
def calculate_grade(points, p1=100, p4=None):
    if p4 is None:
        p4 = p1 / 2

    denominator = p4 - p1 - 0.1

    grade = (1 - (3.1 * p1) / denominator) + (3.1 * points) / denominator
    grade = max(1, min(5, grade))

    return grade

if __name__ == "__main__":
	points = 80
	grade = calculate_grade(points)
	print(f"Calculated grade: {grade:.2f}")
```

