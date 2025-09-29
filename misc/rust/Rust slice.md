> A "part" of a [[Variable]]

[[Rust]], [[Borrowing]]

```rust
let slice = &[i32];
```

- is a [[Reference]] to a sub-section of another variable

## Example: Array
```rust
let x: [i32; 100] = [0; 100]; // fills all 100 elements with the value 0
let x_slice = &x[20..40];
```