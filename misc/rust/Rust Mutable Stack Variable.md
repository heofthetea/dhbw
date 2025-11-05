[[Primitive Data Type]]

- [[Function|functions]] can take anything mutably _by value_

> [!hint] This is even possible when [[Rust Implementation|implementing]] a [[Rust Trait|Trait]] that does not include the `mut`  keyword for its arguments.

```rust
fn mutating_add(mut n: i32) {
	n += 1
}
```