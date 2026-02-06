---
aliases:
  - List Monad
---
> Allows Manipulations of [[Liste|lists]] through [[Monad|monadic]] bind operations

[[Monad]]
- Operations:
	- [[filter Operation]] (can be built from Monadic operations)
	- [[map Operation]] -> is just [[fmap]]

> [!hint]- The [[Rust Iterator|List Monad]] encapsulates the Side-Effect of [[Nichtdeterminismus|non-determinism]].
> Doesn't make Sense? Well - a [[Liste|list]] is technically just a representation of "all possible ([[Nichtdeterminismus|non-deterministic]]) results of an operation" collected in one Entity
> -> in this case I think it makes more sense to only view a list as an [[Endofunctor]] and not care abouut the 

```rust
let fib = vec![1, 1, 2, 3, 5, 8, 13, 21];
let fib_even_halved = fib.iter()
						 .filter(|&x| x % 2 == 0)
						 .map(|&x| x / 2)
						 .collect::<Vec<i32>>();
```