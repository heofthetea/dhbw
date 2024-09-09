

def fibonacci(n):
    if n == 0 :
        return 0
    elif n == 1 :
        return 1
    else :
        return fibonacci(n-1) + fibonacci(n-2)
    

def fibonacci_absolute(n):
    phi = (1 + 5 ** 0.5) / 2
    phi_1 = -1 / phi

    return round((1/5 ** 0.5) * (phi ** n - phi_1 ** n))

if __name__ == "__main__":
    print(fibonacci_absolute(5))
    print(fibonacci_absolute(21))
    phi = (1 + 5 ** 0.5) / 2
    print(phi ** 20 / 5 ** 0.5)
    print(phi ** 21 / 5 ** 0.5)