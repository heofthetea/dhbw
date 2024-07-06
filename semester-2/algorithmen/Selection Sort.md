> **Selection** des kleinsten Elements in jedem Durchgang 
1. finde kleinstes Element $a_{min}$ der [[Folge]] $a_{n}\ mit\ n \geq 0$ ([[Linear Search]])
2. vertausche $a_{min}$ mit $a_{0}$
3. repeat for $n \geq 1$

[[unstable sorting algorithm]], [[in-place Sortieren]] [[Polynomielle Laufzeit]] ($O(n^{2})$)

### Pseudo code
auf [[Array]]
```python
def selection_sort(arr):
	for i in range(len(arr) - 1):
		min_i = i
		for j in range (i + 1, len(arr)):
			if arr[j] < arr[min_i]:
				min_i = j
		# swap
		arr[min_i], arr[i] = arr[i], arr[min_i]
	return arr
```



### Analyse
#### Komplexität
[[Summenformel auflösen]]
> [!hint] das $n(n-1)$ kommt davon, dass $n - 1$ in die eigentliche Summenformel eingesetzt wird!


$$\sum_{i=0}^{n - 1}i= \frac{n(n - 1)}{2} \in O(n^2)$$

#### Ablauf
![[Pasted image 20240611114128.png]]
Zuweisungen: 2 pro Swap
--> insgesamt: $2(n - 1)$ Swaps

> [!warning] Genauer Aufschreiben! 
> Die einzelnen _Vergleiche_ und _Zuweisungen_ rausfinden


## Auf [[Liste]]
Mach einen neue [[Singly Linked List|Linked List]] auf
Listen werden mit <span style="color:rgb(245, 154, 35)">while</span>-Schleifen bearbeitet, Arrays mit <span style="color:rgb(245, 154, 35)">for</span>-schleifen
--> Länge nicht bekannt
```python
def sel_sort_list(n):
	res = None
	while len(n) > 0:
		i = n
		min_i = i
		while i.next is not None:
			i = i.next
			if i.data < min_i.data:
				min_i = i
		remove(n, min_i)
		append(res, min_i)
	return res
```

#### Analyse
--> Keine Vergleiche von Daten
> [!info] Ist im gegensatz zum [[Selection Sort]] auf [[Array]] tatsächlich [[stable sorting algorithm|stabil]] 