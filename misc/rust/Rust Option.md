> [[Option]] [[Type]] in [[Rust]]


```rust
let x: Option<i32> = Some(42);
let y: Option<i32> = None;
```

## Monadic chaining
- since [[Option]] is a [[Monad]], you can do `bind` chaining -> the corresponding method is called `and_then`.

> [!hint] The argument to this has to bee a [[Rust closure]] taking the wrapped value and returning another [[Rust Option|Option]].

```rust
let test_opt = Some(42);
let result = 
assert_eq!(
	test_opt
		.and_then(|x| Some(x / 2))
		.and_then(|x| Some(x + 2));, 
	Some(23)
);
```
## if let pattern
- automatically unwraps the value if present, otherwise the if-statement evaluates to false
```rust
if let Some(val) = x {
	assert_eq!(val, 42)
}
```

### Nested if let
```rust
let x_wrapped = Some(42);
if let Some(Some(val)) = x_wrapped {
	assert_eq!(val, 42)
}
```