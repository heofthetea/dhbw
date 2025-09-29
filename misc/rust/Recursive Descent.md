> Method for parsing Strings -> [[Compiler]]


> [!warning] This basically uses [[Backtracking]], trying to repeatedly build [[Wort|words]] over a [[Grammatik|grammar]], hoping that it stumbles across the input string. LOL


## Example: [[Regulärer Ausdruck]]
> [!hint] [[Nichtterminalsymbol|NTSs]] are ordered so that they encode precedence (`()` > `*` > $\cdot$ > `|`)

Grammar:
```
S -> S|T / T          // Union (lowest precedence)
T -> TF / F           // Concatenation 
F -> A* / A           // Kleene star (highest precedence)
A -> (S) / C          // Atoms (parentheses (containing a new valid regex (S)) or characters)
C -> <character>
```

## Recursive Descent
1. Make a [[Function]] for each [[Nichtterminalsymbol|NTS]]
	1. Argument: String tokenized by earlier layer
	2. tokenize argument so that it can be built by its production rules
		1. here, backtracking may be necessary
	3. For each token corresponding to a [[Nichtterminalsymbol|NTS]]: call its function with the token
	4. return: a "Representation" combining the representations of the called functions

> [!hint] That's not actually recursive descent. Recursive Descent involves [[Backtracking]] -> so idk what this is but it's hella efficient for well-defined [[Grammatik|grammars]] so... yay


