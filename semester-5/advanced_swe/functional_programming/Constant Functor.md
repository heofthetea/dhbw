[[Konstante]], [[Functor]]

$$\Delta_{C}: C \longrightarrow D = \begin{cases}\_{}\mapsto c \\ \_{}\rightarrow \_{}\mapsto id_{c}\end{cases}$$

- = maps every [[Object]] to $c$
- maps every [[Morphism]] to $id_{c}$

## Implementation
[[fmap]]
[[Algebraic Data Type]]

```rust
struct Const<C, A> {
    value: C,
    _phantom: std::marker::PhantomData<A>,
}

// A gets ignored
// We keep the C
// Only the symbolic wnd type parameter changes A -> B
impl<C> Functor for Const<C, A> {
    fn fmap<B, F>(self, _f: F) -> Const<C, B>
    where
        F: Fn(A) -> B,
    {
        Const {
            value: self.value,
            _phantom: PhantomData,
        }
    }
}
```

### Haskell
```haskell
data Const c a = Const c
fmap :: (a -> b) -> Const c a -> Const c b
fmap _ (Const v) = (Const v)
```
