> Perform logic based on what [[Datentyp]] 

[[Rust Enum]]
```rust
fn process_message(msg: Message) -> String {  
    match msg {  
        Message::Quit => String::from("Quit"),  
        Message::Move { x, y } => format! {"Moving to ({}, {})", x, y},  
        Message::Write(msg) => format! {"Text: {}", msg},  
        Message::ChangeColor(r, g, b) => format! {"Changing color to ({}, {}, {})", r, g, b},  
    }  
}
```

- this returns the [[Rust unit type]]


## Return
- Matching can return something -> needs to match what's assigned

```rust
let i :32 = match x {
	_ => 45
}
```
## Default type
```rust
match x {
	_ => doSth()
}
```