> Basically [[Rust]] equivalent of an [[Interface]] 

[[Rust Implementation]]

```rust
trait Shape {
	fn area(&self) -> u32;
	fn perimeter(&self) -> u32;
}

impl Shape for Rectangle {
//..
// methods must match the signatures of Shape exactly
}

```

