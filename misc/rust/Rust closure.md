[[Lambda expressions]]

> [!hint]  Contrary to a local [[Rust function pointer|function]], a [[Rust closure|closure]] is able to _capture_ a variable ( #todo link zu category theory).
> If the closure is returned from a function, it needs to **explicitly** take [[Ownership]] of local variables using `move` (see [[Solutions Category Theory for Programmers#2. Implementation of Composition Function]])

```rust
|arg1, arg2| expression
```

## Example
- [[filter Operation|filter]] by equality
```rust
.filter(|x, y| x == y)
```

## Move Closure
- a move closure takes [[Ownership]] of all variables it uses.

```rust
let x = 42;
(move |arg1| arg * x)(4) // x is now owned
```

> [!hint] This enables Capturing of [[State]] of a [[Higher order Function]]  (is this [[Currying]]?)
## Expect a Closures
- A closure is always of type 
```rust
impl Fn(x: X) -> Y
```
- where: 
	- $X$ is the [[Urbild||pre-image]] of the represented [[Function]]
	- $Y$ is the [[Bild einer Funktion|image]] of the represented [[Function]]