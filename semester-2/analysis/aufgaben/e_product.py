from math import e, pi, cos
from numpy import around

def prod(n):
    res = 1
    for i in range(1, n):
        res *= e ** (1/(2 ** i))
    return res



def cos_task():
    for i in range(-10, 10):
        x = i * 2 * pi + (pi + 3)/6
        x2 = i * 2*pi - (pi - 3)/6
        print(around(cos(2*x - 1), 4), around(cos(2*x2 - 1), 4))


if __name__ == "__main__":
    # for i in range(1, 20):
    #     print(around(
    #         e / prod(i),
    #         5
    #     ))
    cos_task()
