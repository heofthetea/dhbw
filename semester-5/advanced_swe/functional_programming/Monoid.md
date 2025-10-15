> A one-[[Object]] [[Category]]

## Set-based definition

A [[Monoid]] is a 3-[[Tupel|tuplet]] $$(\Sigma, f^{(2)}, 0)$$
where:

- $\Sigma$ is a [[Type]]
- $f^{(2)}$ is a binary [[Abbildung|Function]]
- $0 \in \Sigma$ is the [[Neutrales Element|neutral element]]

## Mapping a Set-Monoid to a Categorical Monoid
1. Create a single [[Object]] $T$ (this corresponds to the abstract idea of the [[Type]])
2. Create the [[Identity Morphism]] $id_{T}$, representing $0$
3. For every $s \neq 0 \in \Sigma$: Create a [[Morphism]] $s: T \longrightarrow T$
4. Calculate all [[Composition|Compositions]] (will be infinite if $|\Sigma| > 2$)


## Example: Monoid of $\mathbb{N}$ under Addition
- $\Sigma = \mathbb{N}$
- $f^{(2)} = +$
- $0 = 0$

### As categorical
- $T$ is the [[Type]] of the [[Natürliche Zahlen|natural Numbers]]
- Every [[Morphism]] represents an "adder" (for example the adder for 5):
- [[Composition|Composing]] adders is the equivalent of adding their represented numbers.

$$5: \mathbb{N} \longrightarrow \mathbb{N} \sim 5(n) = n + 5$$
> [!hint] When composed with the [[Identity Morphism]] $0$, this equates to calling $5(0)$.
