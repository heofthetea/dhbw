[[Rust]], [[Java Enumeration]]

```rust
enum Direction {
	UP,
	DOWN,
	LEFT,
	RIGHT
}
```

## tagged enum
- use an enum of[[Datentyp|Datatypes]]

```rust
enum Message { 
	Quit, 
	Move { x: i32, y: i32 }, 
	Write(String), 
	ChangeColor(u8, u8, u8), 
}

let msg = Message::Move(x: 42, y: 69)
```

> [!hint] Can be unwrapped using [[Rust Pattern Matching]]

