[[Rust]], [[Function]], [[Pointer]]

> [!hint] is a [[Primitive Data Type]] 


-  use the `fn(...) -> ...` syntax - basically the [[Method Signature]] is the type


```rust
fn add(a: i32, b: i32) -> i32 {
	return a + b;
}

let f: fn(i32, i32) -> i32 = add;
let result = f(2, 5);
assert_eq!(result, 7);
```