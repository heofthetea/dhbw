[[Binärsystem]], [[Formale Sprache]]


## Definiert als [[Formale Sprache]]:
$$L_{\mathbb{N}} = \set{1w\ |\ w \in \Sigma^{*}_{bin}} \cup \set{0}$$

- Enthält Wörter über binäres Alphabet, die mit einer $1$ anfangen

[[Abbildung|Funktion]] $n \longrightarrow \mathbb{N}$:
- $n(0) =  0$
- $n(1) = 1$
- $n(w0) = 2\cdot n(w)$ für $|w| \gt 0$
- $n(w1) = 2 \cdot n(w) + 1$
