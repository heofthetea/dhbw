- Select index close to middle (this element is the _Median_)
- iterate through the list from left to right _and_ from right to left:
	- search for Elements _larger than Median_ located _left_ of Median
	- search for Elements _smaller than Median_ located _right_ of Median
	- once a pair is found: _swap_ those elements
	- when _Median_ is reached from one side: swap with _Median_ instead, however _keep Median as Median_, even if its index changed
- After iteration, all numbers _smaller_ than Median are located left of it, all _larger_ numbers right
- repeat recursively on 
![[screenshot.png]]

_Runtime Complexity_: 
- _average case_: $O(\log_{2}(n))$ ([[Logarithmus Dualis]])
- _worst case_: Median is alway the edge of sorted list --> Runtime Complexity of $O(n^{2})$ [[Runtime Bubble vs QuickSort]]


