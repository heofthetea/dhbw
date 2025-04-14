> eXtended [[Merkle Tree]] Signature Scheme

- [[Stateful]] [[Digital Signature]] Scheme - Also standardized by NIST

> [!question]- Why [[stateful]]?
> When choosing [[Private Key]] for a [[Digital Signature]], it is important that this key has not previously been used. The reason for this follows from the [[WOTS#Why only one time?|one-time]] use property of [[WOTS|WOTS+]].

> [!hint] is also prosumably quantum-resistand - but statefulness makes it less attractive.

## Algorithm
1. randomly generate a seed $a$ -> this is the [[Private Key]] (and used as seed to the PRF In 2.1)
2. generate a [[Cryptographic Key|Key]] pair of [[Private Key|private]] and [[Public Key]] $(ws_{i}, wp_{i})$for each [[Blatt|Leaf node]], using a [[WOTS]]
	1. use a [[Pseudo-random Function]] to generate a random [[Private Key]] $sk_{i}$ for each [[Blatt|leaf]]
3. Construct a [[Merkle Tree]] with the [[Public Key]] for each pair as the [[Blatt|leaves]]
	1. the [[Wurzel|root]] node is the [[Public Key]] of [[XMSS]]
4. Generate the [[Digital Signature|signature]]


### Signature Generation
1. choose the [[Private Key]] $ws_{i}$ that has <span style="color:rgb(245, 154, 35)">not previously been used</span> in a signature
2. calculate and provide the [[WOTS]] signature of $msg$ based on this $ws_{i}$ 
3. Provide the [[Merkle Tree#Authentication Pfad Path|Authentication Path]] (marked red below) from the $i$-th leaf


![[Pasted image 20250411151332.png]]

### Signature verification
1. both the [[XMSS]] [[Public Key]] (the root of the tree) and the [[WOTS|WOTS+]] [[Public Key]] $wp_{i}$ [^1] are known
2. provided with the rest of the Authentication path, the receiver reconstructs a [[Merkle Tree]] using the [[WOTS|WOTS+]] [[Public Key]]
3. if the [[Wurzel|root]] of this reconstructed [[Baum|tree]] matches the known [[Public Key]], the signature is valid


[^1]: because $wp_i$ is part of the Authentication Path