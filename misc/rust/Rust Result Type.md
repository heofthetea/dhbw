> Return `Ok` if the result exists, and `Err` if an error occurred

> [!hint] Similar to [[Rust Option]] in a sense that it can be seen as a [[Monad]]

- `Err` values can have a description

```rust
fn generate_nametag_text(name: String) -> Result<String, String> {  
    if name.is_empty() {  
        // Empty names aren't allowed  
        Err("Empty names aren't allowed".to_string())  
    } else {  
        Ok(format!("Hi! My name is {name}"))  
    }  
}

assert!(generate_nametag_text("hello").is_ok())
assert!(generate_nametag_text("").is_err())
```


## Converting between Errors
- using the `Result::map_err` [[Function]], an error can be mapped to something else
- useful e.g. when converting from one [[Rust Error Trait|Error Trait]] [[Rust Implementation|implementation]] to another one