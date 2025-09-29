[[Variable]], [[Rust]]

```rust
let name: type = value;
```

> [!hint] By default every variable is [[Immutability|immutable]]!

> [!hint] A variable without a type is inferred to be a [[Integer]]
### Mutable variable
```rust
let mut x = 2;
x += 4;
```

## Constant
```rust
const NAME: type = value;
```

> [!hint]- What is the difference?
> The values of constants need to be known at [[Compiler|compile]]-time - so `const y = x * 2` is not allowed,


## Static Variable
- lives for the entire duration of the program.
```rust
static x = 2;
```

> [!warning] Can be made mutable, but then you need an [[unsafe block]] to access it.