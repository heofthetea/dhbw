> Basically [[Rust]] equivalent of an [[Interface]] 

[[Rust Implementation]]

```rust
trait Shape {
	fn area(&Self) -> u32;
	fn perimeter(&Self) -> u32;
}

impl Shape for Rectangle {
//..
// methods must match the signatures of Shape exactly
}

```


> [!hint] the `self` keyword in traits needs to be capitalized!!!

## Default Implementations
- default implementations just work like a regular [[Rust Implementation|implementation]]. They don't need any extra `default` keyword like Java does.