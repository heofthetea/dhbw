> [[Function]] representing the Mapping of a [[Morphism|Morphism]] by an [[Endofunctor]]

- Represents the Endofunctor $E$ in the [[Category]] of [[Type|Types]], by creating a [[Function]] $f': E_{a} \rightarrow E_{b}$ from a function $f: a \rightarrow b$ 

> [!hint] $f'$ **lifts** $f$ -> applies the same operation on the Type $E_{a}$.
### Motivation
- Mapping [[Object|Objects]] (i.e. a [[Type]]) is trivialized in the [[Function Signature]] ($a \mapsto Fa$, $b \mapsto Fb$)
- Mapping [[Morphism|Morphisms]] is the difficult part -> function body

## Signature
```haskell
fmap :: (a -> b) -> f a -> f b
```

```rust
impl Endofunctor for Wrapper<T> {
	// simple interpretation as HoF
	fn fmap<A, B> (f: fn(A) -> B) -> impl Fn(Wrapper<A>) -> Wrapper<B>
	// curried interpretation
	fn fmap<A, B> (f: fn(A) -> B, fa: Wrapper<A>) -> Wrapper<B>
}
```

## Requirements
1. `fmap`  must preserve [[Identity Morphism|Identity]]
2. `fmap` must preserve [[Composition]]

> [!hint] These are, naturally, just the attributes of [[Functor|Functors]].

### Proving the shit
[[Currying]]
1. Prove identity: `fmap id a == id Fa`
2. Prove composition: `fmap g.f Fa == (fmap g).(fmap a) Fa`
