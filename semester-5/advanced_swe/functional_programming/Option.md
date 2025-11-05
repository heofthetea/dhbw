> Either Something of [[Type]] $T$, or [[Leere Menge|Nothing]]

[[Endofunctor]], [[Monad]]

```rust
enum Option<T {
	Some(T),
	None
}
```

## Implementation of [[fmap]]
(to prove this is an [[Endofunctor]])

```rust
impl<T> Endofunctor for Option<T> {
	fn<A, B> fmap(f: fn(A) -> B) -> fn(Option<A>) -> Option<B> {
		move |x: Option<A>| {
			match x {
				Some(a) => Some(f(a))
				None => None
			}
		}
	}
}
```

### In Haskell because I'm actually starting to understand that fucking language
```haskell
fmap :: (a -> b) -> Option a -> Option b
fmap _ None = None
fmap f (Some a) = Some (f a)
```


