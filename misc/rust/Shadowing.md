> re-declare a [[Rust Variable]] with the same name. Internally creates a copy of that variable

[[Rust]]

### Shadowing

Rust allows **shadowing**: redeclaring a variable with the same name. This creates a new binding that overrides the previous one.

```rust
let x = 5;
let x = x + 3; // x is now 8
```

Useful for transforming values while keeping the same variable name, without needing `mut`.