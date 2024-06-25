from math import e
from numpy import around

def prod(n):
    res = 1
    for i in range(1, n):
        res *= e ** (1/(2 ** i))
    return res




if __name__ == "__main__":
    for i in range(1, 20):
        print(around(
            e / prod(i),
            5
        ))
