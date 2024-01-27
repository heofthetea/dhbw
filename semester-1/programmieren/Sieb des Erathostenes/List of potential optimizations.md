### potential optimization
- [x]  do _something_  about not needing to populate the array
		--> used `memset`
- [ ] move everything into one function --> less stack trace
	- [ ] get rid of global array 
	- [ ] squash simple functions
- [x] optimize iterations over array
	- [x] only search to square root of number

- [x] goal: reach $O(n\ log(n))$
	- [x] optimization: start eliminating at $n^2$
- [x] optimize evaluation by making for-loop increment by 2

**MOVING STUFF INTO THE SAME FUNCTION ACTUALLY DOESN'T HAVE _ANY_ OPTIMIZING EFFECT WHATSOEVER**
	makes sense: when compiled, functions don't exist anymore, only ✨machine code✨
	

or how about...
- [ ] **NOT USING A FUCKING ARRAY AT ALL**
	- [ ] work bit-wise instead