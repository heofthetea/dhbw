def make_smol(n, cache):
    if n == 1:
        return 0
    
    if cache[n]:
        return cache[n]

    res = 1 + make_smol(n - 1, cache)

    if n % 2 == 0:
        res = min(1 + make_smol(n // 2, cache), res)
    if n % 3 == 0:
        res = min(1 + make_smol(n // 3,  cache), res)

    cache[n] = res
    return res


# cache is not used, but there for swap-in-out compatibility
def make_smol_d(n, cache):
    if n == 1:
        return 0
    
    res = 1 + make_smol_d(n - 1)

    if n % 2 == 0:
        res = min(1 + make_smol_d(n // 2), res)
    if n % 3 == 0:
        res = min(1 + make_smol_d(n // 3), res)


    return res


# cache is not used, but there for swap-in-out compatibility
def make_smol_g(n, cache):
    count = 0
    while n > 1:
        if n % 3 == 0:
            n = n // 3
        elif n % 2 == 0:
            n = n // 2
        else:
            n -= 1
        count += 1
    return count


if __name__ == "__main__":
    num = int(input('> '))
    cache = [0] * (num + 1)
    print(make_smol_g(num, cache))
