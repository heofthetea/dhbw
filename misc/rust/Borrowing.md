> Transport data protected by [[Ownership]]

- essentially: create a new [[Reference]] to the original [[Variable]] on the [[Program Heap|Heap]] 

> [!warning] A borrowed value cannot be dropped!!! => Variable can only be freed by its [[Ownership|owner]]

> [!warning]  A borrowed [[Reference]] also is [[Immutability|immutable]]
## Syntax
> [!hint] Pretty much like  [[Pointer|Pointers]] in [[C]] except with `&` symbols

```rust
fn main() {
	let s = String::from("Hello World");
	let len = get_len(&s); // call by borrowing a reference
}

// expect a borrowed reference
fn get_len(s: &String) -> usize {
	// you cannot call drop(s) here
	return s.len();
}
```

## Mutable reference
```rust
let foo = 4;
add(&mut foo);

fn add(x: &mut i32) -> i32 {
	return x + 2
}
```

> [!warning]- If a mutable borrow exists, it must be the ONLY borrow in [[Keycloak Scope]]!
> Helps to prevent [[Race Condition]]s


