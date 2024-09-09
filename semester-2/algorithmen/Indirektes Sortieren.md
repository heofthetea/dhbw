Bei großen Datensätzen in [[Array|Arrays]] kostet es Zeit, Daten zu tauschen
==> Technik: Abstrahiere auf ein [[Array]] aus [[Pointer|Pointern]] auf das tatsächliche Objekt
- Kopiere nur die [[Pointer]] durch die gegend, nicht die tatsächlichen Daten
see: [[Bubble Sort|Bubble Sort on List (C)]]: [[bubble_sort.c]]
### Wenn keine [[Pointer]] zu Verfügung stehen
Alternativlösung: Arbeiten mit extra permutationsindex

```c
typedef struct {
	int id;
	char content[100000000];
} Heavy_Data;


int main() {
	Heavy_Data *data = malloc(SIZE * sizeof(Heavy_Data)) // Points directly to elements
	int index[SIZE] = range(SIZE); // assume range operator exists

	// theoretical usage
	swap(data[index[0]], data[index[1]])
}
```