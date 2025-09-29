> Repeatedly apply a [[Hash-Funktion|hash function]] 

[[Hash-Funktion]], [[Baum]], [[Binary Tree]] 

- individual message chunks are [[Blatt|leaves]] [[Hash-Funktion|hashed]] to form the [[Blatt|leaves]] of the [[Baum|tree]]
- each level of the tree computes the [[Hashing|Hash]] of the [[Konkatenation|concatenation]] of the Hashes of its [[Kindknoten|child nodes]] 
- the [[Wurzel|Root]] is the eventual [[Hashing|Hash]]

![[Pasted image 20250407140635.png]]

> [!hint] $H(c1, c2) = H(c_{1} \cdot c_{2})$ ([[Konkatenation]])

## Authentication [[Pfad|Path]]
- this is the minimal information required to compute the [[Wurzel|rot]]
- to compute the full [[Hashing|Hash value]] of a message $c$, only $H(d)$, $c_{1}$ and $p_{2}$ need to be given.
![[Pasted image 20250407141246.png]]