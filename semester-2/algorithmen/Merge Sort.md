> [[Divide and Conquer]] in plain stupid: Just split the [[Array]] and then go from there lol

1. wenn $|S| \leq 1$: return $S$
2. Teile $S$ in zwei gleich lange Unter-[[Folge|Folgen]] $L$ und $R$
3. Sortiere $L$ und $R$ [[Recursion|rekursiv]]
4. Füge $L$ und $R$ wieder zusammen --> Hauptarbeit


### Pseudo-Code
requires implementation of [[2-way merge|merge]] function
- Note: Passing an [[Leere Liste|empty list]] to the [[2-way merge]] function is required because _I_ implemented it recursively
```python
def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    arr_l = arr[:len(arr) // 2]
    arr_r = arr[len(arr) // 2:]
	
    return merge(
		merge_sort(arr_l),
		merge_sort(arr_r),
		[]
    )
```
==> check out [[merge_sort.py]] for testing

### Komplexität
[[linearithmische Laufzeit]]
$$\in O(n \log n)$$
[[out-of-place Sortieren]] --> beim [[2-way merge|Merge]] wird eine neue Liste erstellt ($O(n)$ Space complexity)
--> _aber_: [[stable sorting algorithm|stabil]]


## Beispiel
![[Pasted image 20240614115128.png]]