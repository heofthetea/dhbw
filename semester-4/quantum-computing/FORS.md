> [[Forest]] of Random [[Teilmenge|Subsets]] 

- Few-time Signature Scheme -> can be used to [[Digital Signature|sign]] a limited number $\gt 1$ [[Nachricht|Messages]]
- somehow enables [[XMSS]] to become [[Stateless Signature Scheme|stateless]]

> [!hint] [[FORS]] does not sign the [[Nachricht|Message]], but the [[Hash|Digest]] => ensures that parameters $k$ and $a$ are known (i.e. $8$ and $8$ for [[SHA-256]])
> This is (for some reason) actually necessary in order to not compromise the security. Idk how exactly tho lol

> [!question] Why **few**-time?
> In the [[#Signature Generation]], a small portion of the [[Private Key]] needs to be published. This leads to a slight decrease in security for each signing, however is practically safe for a limited amount of time.
## Algorithm
1. input: $k$ and $a$ for a string of length $k\cdot a$, and $n$
	1. $t = 2^{a}$
	2. For [[SPHINCS]]: $a$ is usually between $6$ and $14$
2. [[Private Key]]: $k$ [[Menge|sets]] containing $t$ $n$-[[Byte]] strings each
	1. these strings are once again generated using a [[Pseudo-random Function|PRF]] with a <span style="color:rgb(245, 154, 35)">secret seed</span>
3. For each of the $k$ [[Menge|sets]]:
	1. [[Hash]] every string in the set
	2. Use thes [[Hash|Hashes]] as [[Blatt|leaves]] for [[Merkle Tree|Merkle Trees]] => results in $k$ trees of height $a$[^1]
4. [[Public Key]]: [[Konkatenation|concatenate]] the [[Wurzel|roots]] of those trees

### Signature Generation
1. Decompose the [[Nachricht|Message]] into $k$ strings of length $a$ (in [[Bit]]) => $l_{0}\ \dots\,l_{k-1}$
2. From each [[Merkle Tree]] $i$ choose one [[Blatt|leaf]] $sk_{i,\ j}$ 
3. [[Konkatenation|Concatenate]] the chosen leaves
4. For each [[Merkle Tree]]: Compute the required [[Merkle Tree#Authentication Pfad Path|Authentication Path]] to reconstruct each [[Wurzel|root]] $r_{i}$

![[Pasted image 20250413142240.png]]
### Example: Key Generation
- $k = 3$
- $a = 2$
![[Pasted image 20250412210508.png]]


---
ref: https://www.di-mgt.com.au/pqc-06-fts.html#fors

[^1]: Note: Counting starts at 0 here
