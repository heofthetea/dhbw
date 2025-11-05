> Clone-on-Write Pointer (see [[Copy on Write]])

- gives an immutable reference by default
- if `to_mut` is called, it creates a clone (oder so)
## Types
```rust
enum Cow<T> {
	Owned(T),
	Borrowed(T)
}
```