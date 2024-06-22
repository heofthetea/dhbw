Shuffle the array until it is sorted


```python
def bogo_sort(arr):
	while not is_sorted(arr):
		shuffle(arr)
	return arr

def shuffle(arr):
	for i in range(len(arr)):
		j = randint(0, len(arr) - 1)
		arr[i], arr[j] = arr[j], arr[i]
```


