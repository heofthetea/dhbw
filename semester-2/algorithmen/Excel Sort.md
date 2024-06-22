> This is (i think at least) my own invention, might tweak it a little

- Core idea is that the sorting algorithm does anything except actually sorting the list
	- Bonus points for making the algorithm hard to use
	- Bonus points for bloating it with even more useless functionality
#todo have function take [[UNIX sort]]-like parameters and do random shit for each parameter


### Implementation
[[excel_sort.py]]
```python
def excel_sort(arr):
	match len(arr) % 7:
		case 0: return shuffle(arr)
		case 1: return reversed(sorted(arr))
		case 2: return []
		case 3: return [date.fromordinal(n) for n in arr]
		case 4: 
			mid = len(arr) // 2
			return sorted(arr)[randint(0, mid):randint(mid + 1, len(arr))] # retuns a random subset of the sorted list
		case 6: return stalin_sort(arr)
		case 7: raise RuntimeError("Die Ausnahme")
		
```