c-type pseudo code
```c
int arr[n];
int u; // Index of Element to delete
int k; // Länge der benutzten Elemente
for (; u < k - 1; u++) {
	arr[u] = arr[u + 1]
}
k --;

```
### Laufzeit:
$2 \cdot \frac{n}{2} + 1$ --> $O(n)$ 
