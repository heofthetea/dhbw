[[notenformel.png]]

$$N = max\left(1, min\left(5, \left(1 - \frac{3.1\cdot P_{1}}{P_{4} - P_{1} - 0.1}\right)+ \frac{3.1 \cdot P}{P_{4} - P_{1} - 0.1}\right)\right)$$
- $N$ = resultierende Note
- $P$ = tatsächliche Punktzahl
- $P_{1}$ = notwendige Punktzahl für Note $1.0$ (bei Modulnoten: $P_{1} = 100$)
- $P_{4}$ = notwendige Punktzahl für Note $4.0$ (idR: $P_{4} = \frac{P_{1}}{2}$)


## Script
```python
def calculate_grade(p, p1=100, p4=None):
    """
    Calculate the resulting grade N based on the provided formula.

    args:
	    - P: actual score (float)
	    - p1: score required for grade 1.0 (default: 100)
	    - p4: score required for grade 4.0 (default: p1 / 2)

    returns:
	    - N: resulting grade (float)
    """
    if p4 is None:
        p4 = p1 / 2

    denominator = p4 - p1 - 0.1

    grade = (1 - (3.1 * p1) / denominator) + (3.1 * p) / denominator
    grade = max(1, min(5, grade))

    return grade

# Example usage:
if __name__ == "__main__":
    actual_score = 50
    grade = calculate_grade(actual_score)
    print(f"Resulting grade for score {actual_score}: {grade:.2f}")

```

