> Very simple algorthm
> But: exponential growth ($O(n^{2})$)

Beispiel: $50\,000$ needs 24 seconds lol

1) iterate over list from start to finish
2) alwas compare Element $i$ with $i+1$
	1) if larger: swap elements
3) repeat over and over, until list is sorted


## Implementation

### On Array
[[bubble_sort.c]]
- $bubble\_sort()$ performs the actual bubble sort
- $swap()$ swaps $a$ and $b$ in $arr$
- $sorted()$ iterates over the entire array to see if it's sorted

```c
void bubble_sort(int *numbers)
{
    while(!sorted(numbers)) {
        for(int i = 0; i < LENGTH - 1; i++) {
            if(numbers[i] > numbers[i + 1]) {
                swap(numbers, i, i+1);
            }
        }
    }
}

bool sorted(int *arr) {
    for(int i = 0; i < LENGTH - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }

    return true;
}

void swap(int * arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
```

### On list
[[bubble_sort_list.c]]
- swap _pointers_ instead of values
- okay maybe doing this stuff recursively wasn't such a good idea


