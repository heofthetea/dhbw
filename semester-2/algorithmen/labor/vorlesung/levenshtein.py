def levenshtein(a, b):
    if len(b) == 0:
        return len(a)
    if len(a) == 0:
        return len(b)

    if a[0] == b[0]:
        return levenshtein(a[1:], b[1:])

    return 1 + min(
        levenshtein(a[1:], b), # deletion
        levenshtein(a, b[1:]), # insertion
        levenshtein(a[1:], b[1:]) # substituion
    )


def levenshtein_d(str_a: str, str_b: str, a: int, b: int, cache: list[list[int]]):
    if len(str_a) == 0:
        return len(str_b)
    if len(str_b) == 0:
        return len(str_a)

    if str_a[0] == str_b[0]:
        cache[a][b] = levenshtein_d(str_a[1:], str_b[1:], a + 1, b + 1, cache)

    
        cache[a][b] = 1 + min(
            cache[a][b],
            levenshtein_d(str_a[1:], str_b, a + 1, b, cache),  # deletion
            levenshtein_d(str_a, str_b[1:], a, b + 1, cache),  # insertion
            levenshtein_d(str_a[1:], str_b[1:], a + 1, b + 1, cache)  # substituion
        )

    return cache[a][b]



# Drivers code
str1 = "kitten"
str2 = "sitting"
distance = levenshteinRecursive(str1, str2, len(str1), len(str2))
print("Levenshtein Distance:", distance)


if __name__ == "__main__":
    a = input("1> ")
    b = input("2> ")


    cache = [[None] * (len(a) + 1)] * (len(b) + 1)

    # print(f"a: {a}\nb: {b}")
    print(f"Levenshtein distance: {levenshtein(a, b)}")
    print(f"Levenshtein distance dynamic: {levenshtein_d(a, b, 0, 0, cache)}")
    print(f"Levenshtein distance stolen lol: {levenshteinRecursive(a, b, len(a), len(b))}")
