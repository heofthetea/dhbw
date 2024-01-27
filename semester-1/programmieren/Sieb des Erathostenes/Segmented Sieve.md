1) search for all primes up to $\sqrt{n}$
	- reason (trivial): $a*b > n\ (if\quad a>\sqrt{n} \ \land \ b>\sqrt{n})$ for $a, b, c,\in \mathbb{N}$
	- uses _regular_ [[Sieve of Erathostenes]]
	--> represented as _array_ of 1 and 0
1) split array up into _segments_
	- instead of one giant _numbers_ array, the array is only created with the length of a segment
3) for each segment:
	- check for multiples of _all_  primes found in _1._
4) in all of this: _Ignore_ all even numbers
	- even numbers cannot be prime
	- allows for only checking for every _other_ multiple of a prime p because:
		- for every $p \not= 2 \in \mathbb{P}$ is true: $2 \not\mid p$
		-  $2 \not\mid p \rightarrow 2\not\mid (2a+1)p \land 2 \mid 2a*p$  ($a \in \mathbb{N}_0$)
		--> since $2a*p$ is obviously _even_, it gets ignored by _every_ part of the program, thus its state is irrelevant    
	==> this means that when counting primes, _2 is never included_ --> thus, the number of found primes is always _one less_ than the actual number of primes

### pseudo code
```python
is_prime[] = regular_sieve(until sqrt(n))
num_primes = 1 # compensates for ignoring 2
for each segment [low, high]:
	sieving_primes = [primes in is_prime until sqrt(high)]
	multiples: list[len(sieving_primes)] 

	for each prime p in sieving_primes:
		a = multiples[index of p] # a is always uneven
		for each multiple m = 2a * p:
			eliminate m from segment
		when multiple > high:
			store m in multiples
	
	num_primes += number of primes in segment

```


## Why it is faster

### Locality of Memory
A regular sieve is _massively_ ineffient when it comes to caching, as each time, the processor has to go over the _entire_ array. Splitting it up into smaller chunks easens the workload of the processor, and also, after finishing each segment, all non-primes disappear fom the cache. Making it for once more space-efficient, but also more time-efficient due to _locality of memory_ - whatever that is exactly.

### Ignoring even numbers
Only dealing with uneven numbers essentially _halves_ the workload. This can also be observed in the time: When processing _all_ numbers, runtime jumps from _~250 ms_ all the way to _~500 ms_
## Implementation
[[Implementation Segmented Sieve]]