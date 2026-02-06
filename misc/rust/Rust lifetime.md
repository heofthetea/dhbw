> Every [[Reference]] in [[Rust]] has a [[Rust lifetime|lifetime]]


> [!hint] The Rust compiler does magic a lot of the time and infers lifetimes. So they only need to be specified when absolutely necessary.
 
[[Borrowing]]

1. The Lifetime of a Reference begins at initialization
2. The Lifetime of a Reference ends right after its last usage

## Example 1: String slices
- Without lifetime annotations -> [[Borrow Checker]] does not know how long the return value will live
	- the annotation says: "as long as a **and** b are valid"
```rust
fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {  
    if x.len() > y.len() {  
        x  
    } else {  
        y  
    }  
}
```


## Lifetime in structs
> [!warning] This means that a `Chapter` instance is dropped as soon as its `content` goes out of scope!


```rust
struct Chapter<'a> {
	content: &'a str,
}
```