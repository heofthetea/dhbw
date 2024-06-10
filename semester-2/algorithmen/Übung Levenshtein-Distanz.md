#todo Übung: Levenshtein-Distanz mit Wagner-Fischer-Algorithmus

[[Dynamic Programming]]


> [!info] Code: [[levenshtein.py]] , [[levenshtein_tests.py]]

### Naive Algorithm
```python
def levenshtein(a, b) :
    if len(b) == 0:
        return len(a)
    if len(a) == 0:
        return len(b)

    if a[0] == b[0]:
        return levenshtein(a[1:], b[1:])

    return 1 + min(
        levenshtein(a[1:], b), # deletion
        levenshtein(a, b[1:]), # insertion
        levenshtein(a[1:], b[1:]) # substition
    )
```
(Holy shit I really am far too stupid to program stuff like this on my own holy fuck)

> [!hint] Mistake I made in the substitution case
> I tried to actually _do_ the substitution. Whilst in and of itself not _wrong_, it is unnecessary. The way I did it however was wrong:
> `levenstein(b[0] + a[2:], b[1:])`
> This does not pass the cut-off version of the string to the next function, but one, where the _next_ letter is replaced. The correct way to do this is to splice the combined string _again_ like so:
> `levenshtein((b[0] + a[1:])[1:], b[1:])`
> but no one needs that.

### Dynamic Programming
[[Dynamic Programming]] approach to this: After each step, cache the min value --> as in [[Übung Dynamic Programming]]
```python
def levenshtein_d(str_a, str_b, a, b, cache):
    if len(str_a) == 0:
        return len(str_b)
    if len(str_b) == 0:
        return len(str_a)

    if str_a[0] == str_b[0]:
        cache[a][b] = levenshtein_d(str_a[1:], str_b[1:], a + 1, b + 1, cache)

    if cache[a][b] is None:
        cache[a][b] = 1 + min(
            levenshtein_d(str_a[2:], str_b[1:], a + 2, b + 1, cache),
            levenshtein_d(str_b[0] + str_a, str_b[1:], a, b + 1, cache),
            levenshtein_d(str_a[1:], str_b[1:], a + 1, b + 1, cache)
        )
    return cache[a][b]
```
The cache has to have the dimensions: `int [len(a) + 1] [len(b) + 1]`

> [!warning] OKAY IDFK THIS DOESN'T WORK I HAVE NO FUCKING CLUE DAFUQ
> **WELL YEAH BECAUSE YOU'RE NOT INITIALIZING THE FUCKING CACHE ON THE [[Base Case]]**

