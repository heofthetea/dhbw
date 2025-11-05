> A mutable [[memory]] location with dynamically checked borrow rules

```rust
thread_local! {  
    static logger: RefCell<String> = RefCell::new(String::new());  
}
```