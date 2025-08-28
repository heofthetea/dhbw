[[Struct]]

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

## Access
```rust
asserteq!(phil.name, "Phil");
```