Iterate once over the array
If an item is not sorted, yeet it
--> [[lineare Laufzeit|linear runtime]] in exchange for loss of data

### Implementation
--> [[stalin_sort.py]]
Python might actually not be the most elegant choice for this
```python
def stalin_sort(arr):
    i = 0
    while i < len(arr) - 1:
        if arr[i] > arr[i + 1]:
            arr.pop(i + 1)
            continue
        i += 1
    return arr
```