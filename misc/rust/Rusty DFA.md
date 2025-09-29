[[Rust]], [[DFA]], [[NFA]]
https://github.com/heofthetea/rusty-dfa
[[RegEx Engine]] in [[Rust]]
# First iteration
> [!hint] I'll only focus on the [[Regulärer Ausdruck]] syntax - no full-on regex.
> Idea: Later add a pre-processor that converts the expression to this simple form

#### what I'll need
- [x] service to parse a regular expression from $\set{(, ), +, |, ^{*}}$ -> [[Transformation RegEx zu NFA]]
	- [x] [[Klenee-Stern]],
	- [x] [[Konkatenation]]
- [x] Struct to represent an Automaton
	- [ ] Algorithm to simulate a run
- [ ] Algorithm for [[NFA zu DFA]]
- [ ] Logic to accept an input so that the binary can be used like [[grep]]

## Concepts along the way
- [[Recursive Descent]]