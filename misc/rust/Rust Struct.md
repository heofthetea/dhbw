---
aliases:
  - Struct
  - Product Type
---
[[Struct]], [[Product]]

```rust
struct User {
	name: &'static str,
	age: u32,
	income: u32,
}

let phil: User = User {
	name: "Phil",
	age: 32, 
	income: 10000
}
```

## Update Syntax
- [[JS ellipsis expansion]] in [[Rust]]

```rust
let phil2: User = User {
	name: "Phil 2", 
	..phil
}
```

> [!warning] Expansion must be the last statement in the struct instantiation!
## Mutability
 - is inhereted from Struct to its elements
## Access
```rust
asserteq!(phil.name, "Phil");
```