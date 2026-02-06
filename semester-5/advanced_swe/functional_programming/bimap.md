> Equivalent of [[fmap]] for [[Bifunctor|BIfunctors]] $T \times T \longrightarrow T$
> For two Morphisms $n, m \in hom(T)$ produces a lifted [[Morphism]] acting on the mapped [[Object|objects]] 


![[Pasted image 20251028113022.png]]


## Haskell default Implementation
```haskell
class Bifunctor f where
    bimap :: (a -> c) -> (b -> d) -> (f a b) -> (f c d)
    -- (fab -> fcb) . (fab -> fad)
    bimap g h = first g . second h
    first :: (a -> c) -> f a b -> f c b
    first g = bimap g id
    second :: (b -> d) -> f a b -> f a d
    second = bimap id
```

> [!hint] How to think about this: First make a $d$ out of the $b$ (through `second`), then make a $c$ out of the remaining $a$ (using `first`)

> [!hint] First and second, thruogh the use of [[Identity Morphism|Identity]], basically throw away one type so that one of the object pair $(c, d) \in C \times D$ remains constant

![[Pasted image 20251028113850.png]]