> [[Memory]] allocation strategy

[[Rust]]

> [!question]- Why do the ownership concept?
> - Memory management using [[malloc]] and [[c free]] is hard
> - [[Garbage Collection]] is expensive
> - Ownership is a third approach

## Definition
- Who's job is it to free the memory?

## Rules
1. Every value in [[Memory]] is owned by _something_
2. There can only be one owner at a time
3. When the owner goes out of [[Scope|Scope]], the value is dropped (= automatically [[c free|freed]])


## Ownership Changes
### Reassignment
- re-assigning a "pointer" changes ownership of the data => initial [[Reference]] is invalid
	- because "things that live on the [[Program Heap]]" don't have the [[Copy trait]]

![[Pasted image 20250809111923.png]]


### Function Call
[[Rust function pointer]]
- ownership changes when the value is passed to a [[Function]]

![[Pasted image 20250809112201.png]]