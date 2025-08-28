[[Rust Pattern Matching]], [[Rust Enum]]

```rust
enum Message {  
    Quit,  
    Move { x: i32, y: i32 },  
    Write(String),  
    ChangeColor(u8, u8, u8),  
}  
  
fn process_message(msg: Message) -> String {  
    return match msg {  
        Message::Quit => String::from("Quit"),  
        Message::Move { x, y } => format! {"Moving to ({}, {})", x, y},  
        Message::Write(msg) => format! {"Text: {}", msg},  
        Message::ChangeColor(r, g, b) => format! {"Changing color to ({}, {}, {})", r, g, b},  
    };  
}
```

