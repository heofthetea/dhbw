[[Quick Sort]]
## Pseudo-Code
```python
quick_sort(list, left, right):
	if(left >= right): # the given segment only contains one element (or is empty), thus is trivially sorted
		return list
	
	i_left = left # iteration variables, since left and right need to be kept 
	i_right = right
	median = (int) average(left, right) # set median to approximately the middle

	while i_left < i_right:
		while list[i_left] < list[median]: # iterate until element > median is found
			i_left += 1
		while list[i_right] > list[median]: # iteratee until element < median
			i_right -= 1
		swap(list, i_left, i_right)
		
		# adjust median
		if i_left == median:
			median = i_right
		elif i_right == median:
			median = i_left

		if i_left < median:
			i_left += 1
		if i_right > median:
			i_right -= 1
	

	quick_sort(list, left, median - 1) # left side
	quick_sort(list, median + 1, right) # right side

```


