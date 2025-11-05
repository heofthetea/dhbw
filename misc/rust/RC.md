---
aliases:
  - Reference Counter
---
> Allocate Space on the [[Program Heap|Heap]] for shared [[Ownership]] by multiple references

```rust
let x_wrapped = Rc::new(5);
let y_wrapped = x_wrapped.clone(); // clones only the Rc, not the data!
```