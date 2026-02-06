[[Java Generics]]

- basics are same as [[Java Generics]]
- however how to constrain that differs

## Constraint: implements
- use `T: MyTrait` to state that `T` must [[Rust Implementation|implement]] `MyTrait`
```rust
trait Licensed;
fn compare_license_types(software1: impl Licensed, software2: impl Licensed) -> bool {  
    software1.licensing_info() == software2.licensing_info()  
}
```

- combine with "and":
```rust
software1: impl OpenSource + ClosedSource
```


## Trait Bound
> [!hint] needed when multiple [[Function]] parameters are required to implement the same trait(s)
```rust
fn my_func<T>(a: T, b:T) -> bool
where T: Sized 
{
	a.len > b.lens
}
```


