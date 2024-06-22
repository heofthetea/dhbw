> Merge two sorted lists into one sorted list

[[Merge Sort]]

1. compare the first element of each array
2. append the smaller one to a new array
	1. remove the just appended element
3. if one array is empty, just concat the remainders of the other one


### Pseudo Code
Probably not the most efficient way, but should work
```python
def merge(arr_l, arr_r, out):
	if len(arr_l) == 0:
		out.extend(arr_r)
		return out
		
	if len(arr_r) == 0:
		out.extend(arr_l)
		return out
	
	if arr_l[0] < arr_r[0]:
		out.append(arr_l[0])
		return merge(arr_l[1:], arr_r, out)
		
	out.append(arr_r[0])
	return merge(arr_l, arr_r[1:], out)
	
```
### Runtime
Since lists are known to be [[Sortieren formal|sorted]], only the first elements can be compared
--> The first list is always completely compared with the first one from the second list

--> [[lineare Laufzeit]]$$\in \Theta(n)$$ 

## Beispiel 
![[Pasted image 20240614115507.png]]