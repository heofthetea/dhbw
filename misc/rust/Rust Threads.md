[[Thread]]

- import: `std::thread`

[[Rust closure]]
```rust
let handle: thread::spawn(move || {
	// the code to run
})
```

> [!hint] This returns a `JoinHandle<T>`, which is a wrapper around the return value of the [[Rust closure|closure]].

## Joining Threads
```rust
let result = handle.join.unwrap();
```