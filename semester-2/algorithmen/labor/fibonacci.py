def fibonacci(n):
    if n < 1:
        return 0
    if n in [1, 2]:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)


def fibonacci_iterative(n):
    a, b = 1, 1
    for _ in range(3, n + 1):
        a, b, = b, a + b
    return b


def fibonacci_absolute(n):
    phi = (1 + 5**0.5) / 2
    phi_1 = -1 / phi

    return round((1 / 5**0.5) * (phi**n - phi_1**n))


if __name__ == "__main__":
    for i in range(1, 11):
        print(fibonacci(i), end=" ")
        print({fibonacci_iterative(i)}, end=" ")
        print(fibonacci_absolute(i))
