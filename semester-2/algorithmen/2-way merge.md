> Merge two sorted lists into one sorted list

[[Merge Sort]]

1. compare the first element of each array
2. append the smaller one to a new array
	1. remove the just appended element
3. if one array is empty, just concat the remainders of the other one

### Runtime
Since lists are known to be [[Sortieren formal|sorted]], only the first elements can be compared
--> The first list is always completely compared with the first one from the second list

--> [[lineare Laufzeit]]$$\in \Theta(n)$$ 