> Solutions for [[category-theory-for-programmers.pdf]]


## Chapter 1
### 1. Implementation of [[Identity Function]]
```rust
fn identity<T>(T: x) -> T {
	x
}
```

### 2. Implementation of [[Composition Function]]
- well... takes a [[Rust function pointer]] and returns a [[Rust closure]]
```rust
fn composition<A, B, C>(f: fn(a: A) -> B, g: fn(b: B) -> C) -> impl Fn(A) -> C {
	move |x: A| g(f(x))
}
```

### 3. Test that Composition Function respects Identity
```rust
fn main() {
	fn f(a: i32) -> i32 {
        a + 2
    }
    fn g(a: i32) -> i32 {
        a + 3
    }
    assert_eq!(composition(f, identity)(4), 6);
    assert_eq!(composition(identity, g)(4), 7);
}
```