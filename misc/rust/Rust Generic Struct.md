---
aliases:
  - Type Constructor
---
> Constructs a [[Type]] from a generic Parameter `T`

[[Rust Struct]], [[Rust Generic]], [[Rust Implementation]]

```rust
struct Wrapper<T> {  
    value: T,  
}  
  
impl<T> Wrapper<T> {  
    fn new(value: T) -> Self {  
        Wrapper { value }  
    }
}
```