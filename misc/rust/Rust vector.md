[[Dynamic Array]]

```rust
Vec<Type>;
```

### Obtaining value
#### safe(recommended)
- with [[Optional]]:
```rust
let v = vec![1, 2, 3];
v.get(0) 
```

#### trust me bro
```rust
v[0]
```

## Append vs Extend
- both add the elements of vec2 to the end of vec1

> [!warning] Key difference: `extend` copies values from vec2, `append` drains vec2