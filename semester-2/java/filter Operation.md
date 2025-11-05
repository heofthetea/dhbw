> Filters a given list by a passed function


```java
myList.stream()
	.filter(a -> a > 14)
```

## As [[Monad|monadic]] operations
- using [[fmap]] and bind (flat_map)

```rust
my_vec.iter()
	.flat_map(if a > 14 { vec![a] } else { vec![] })
```