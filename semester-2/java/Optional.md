Is a _wrapper_ around [[null]]

Allows to use default values if the value of Optional is null.

- entweder "nichts, oder etwas von diesem Datentyp"

```rust
Optional<&i32>
```

> [!hint] Exists in pretty much the same functionality in both [[Java]] and [[Rust]]

> [!hint] Similar to Typescript `a: null | any`

## nichts
```java
Optional.empty()
```
### Methods
- isPresent()
- get()
- ifPresent(Method)
- Optional.of(T) (create an Optional of something)

