- [[Logarithmische Laufzeit]] $O(log\, n)$
- [[Divide and Conquer]] Algorithmus

(Approach is quite similar to [[Quick Sort]])
### Idee
Liste muss bereits _sortiert_ sein
1. Finde mitte der Liste
2. Entscheide, ob gesuchtes Element links oder rechts der Mitte liegt
3. Wiederhole Vorgang auf Teilliste

### Implementation
(taken from [[searching.c]])
```c
int32_t binary_search(uint32_t *numbers, uint32_t length, uint64_t low, uint64_t high)
{
    if (high < low)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;
    uint32_t at_mid = numbers[mid];

    if (at_mid == TO_FIND)
    {
        return mid;
    }
    if (TO_FIND < at_mid)
    {
        return binary_search(numbers, length, low, mid - 1);
    }
    return binary_search(numbers, length, mid + 1, high);
}
```