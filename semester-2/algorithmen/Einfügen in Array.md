## Mitte
```c
int u;
for(int i = k; i > u; i--) {
	arr[i] = arr[i - 1];
}
arr[u] = value;
k ++;
```
**Problem**: Elemente können hinten aus dem [[Array]] raus geschoben werden!!!
Laufzeit: $\frac{n}{2}$ --> $O(n)$
## Ende
$k$ ist bereits erstes verfügbares Element
```c
arr[k++] = element;
```
--> $O(1)$