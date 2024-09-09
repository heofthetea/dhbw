from numpy import average, around

def f(x):
    return (
        x**7
        - 5.3 * x**6
        + 10.3 * x**5
        - 11.066 * x**4
        + 10.22 * x**3
        - 6.2896 * x**2
        + 0.92 * x
        - 0.5236
    )


def solve(lo, hi, depth):
    med = average([lo, hi])
    print(f"lo: {lo} -> {around(f(lo), decimals=2)}\nhi: {hi} -> {around(f(hi), decimals=2)}\ndepth: {depth}\n")

    if abs(f(med)) < 1e-3:  # we definitely won't reach it exactly
        return around(med, decimals=3)

    if f(med) < 0:
        return solve(med, hi, depth + 1)
    if f(med) > 0:
        return solve(lo, med, depth + 1)


if __name__ == "__main__":
    nst = solve(1.2, 2.25, 0)
    print(nst)
    print(f"f({nst}): {f(nst)} ")
