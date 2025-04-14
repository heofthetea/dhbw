> [[Merkle Tree]] where the [[Blatt|leaves]] are used to [[Digital Signature|sign]] and validate the [[Wurzel|roots]] of other [[Merkle Tree|trees]].

> [!hint] Uses [[WOTS|WOTS+]] to sign the [[Wurzel|root]] of the lower layer tree
> - The [[Wurzel|roots]] of lower trees act as the 'message chunks' for the [[Merkle Tree]]
> - instead of using a simple [[Hash-Funktion|Hash function]] for the leaves of the higher tree, a [[wots+]] signature is used (for whatever reason lol).
> - this basically signifies "I trust the merkle tree root below me"

> [!info] This is only an **optimization** of [[XMSS]], not essential to the functionality of [[SPHINCS]].

- the [[Blatt|leaves]] of the lowest-layer tree are the ones that are _actually_ used to sign [[Nachricht|Messages]]
- the [[Wurzel|root]] of the highest-layer [[tree]] is the [[Public Key]]
- The [[Digital Signature|signature]] comprises of:
	1. the [[WOTS|WOTS+]] [[Digital Signature|signatures]] that connect the different layers of trees
	2. the [[Merkle Tree#Authentication Pfad Path|Authentication Path]] for each sub-tree so that the highest-level [[Wurzel|root]] can be re-computed

> [!question] Why is this better?
> Using intermediate tree layers mean that not all possible [[Pfad|paths]] need to be explored to generate the [[Merkle Tree#Authentication Pfad Path|authentication path]].


![[Pasted image 20250412181756.png]]