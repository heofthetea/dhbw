> A [[Monoid]] in the [[Category]] of [[Endofunctor|Endofunctors]]

## Programmer's Definition
A [[Rust Generic Struct|Type Constructor]] equipped with two [[Abbildung|Operations]]:
- `unit` (corresponds to the [[Identity Functor]] for the Monad)
- `bind` (also called `flatmap`) - that takes applies a [[Function]] returning a [[Monad]] to a version of the [[Monad]]
- + I think the effect needs to be a [[Monoid]]

```haskell
unit :: t -> M(t)
bind :: M(a) -> (a -> M(b)) -> M(b)
```

> [!hint] Usage basically consists of wrapping an initial value through `unit`, and then continuously binding operations to this value through chaining

### Implementation
```rust
#[derive(Debug, PartialEq)]
pub struct Monad<T, S: Monoid> {
    data: T,
    effect: S,
}

impl<T, S: Monoid> Monad<T, S> {
    pub fn unit(data: T) -> Monad<T, S> {
        Monad {
            data,
            effect: S::unit(),
        }
    }

    // Hm I'll need to check out category theory for this
    pub fn bind<B>(self, f: fn(T) -> Monad<B, S>) -> Monad<B, S> {
        let fm = f(self.data);
        Monad {
            data: fm.data,
            effect: self.effect.mappend(&fm.effect),
        }
    }
}
```

