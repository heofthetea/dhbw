> Give [[Methode|Method]] capabilities to a [[Rust Struct]] 

[[OOP]]

- enables usage of dot-syntax: `{struct}.{method}`

```rust
struct Rectangle {
	width: u32, 
	height: u32,
}

impl Rectangle {
	// &self is ensured to always be of type Rectangle
	fn area(&self) -> u32 {
		return self.width * self.height;
	}
}

let r: Rectangle = Rectangle{width: 3, height: 2}
r.area();

```

## Static implementations
- an `impl` [[Function]] does not require to take `&self` as a parameter

> [!hint] For example: can be used as a sort of [[Constructor]]

- uses the `::` syntax when called

```rust
impl Rectangle {
	fn new(w: u32, h: u32) -> Rectangle {
		return Rectangle{
			w,
			h
		};
	}
}
let r: Rectangle = Rectangle::new(3, 2);
```