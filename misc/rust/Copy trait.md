[[Rust Trait]]

> Performs a bitwise copy for types that implement this trait

> [!hint] Most [[Primitive Data Type|Primitive Datatypes]] in [[Rust]] have that trait (like integers e.g.)

```rust
let a = 5;
let b = a;
// both a and b are valid references now
```

## Allows dereferencing
[[Borrowing]]
```rust
let a: &usize = &4;
let b: usize = *a; // usize is now 4, not borrowed
```


