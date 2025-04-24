---
aliases:
  - SLH-DSA
---
> [[Stateless Signature Scheme|Stateless]] [[Hashing|Hash]]-based [[Digital Signature|Digital Signature]] Scheme

[[Merkle Tree]], [[WOTS]]

- problem with [[XMSS]] and [[Hypertree|Hypertrees]]: All [[Blatt|leaves]] (i.e. [[Private Key|private keys]] used to sign) need to be remembered
	- **Solution**: Dynamically generate a [[FORS]] for each message, to use it as the "private key" instead
- supports multiple [[Hash-Funktion|Hash functions]], i.a. [[SHA-256]]
	- although: an attack has been found, so SHA-512 needs to be used when necessary

> [!info]- [[Hashing|Hash]]-based signature -> Only [[Hash-Funktion|hash functions]] are used, no mathematical problems like lattices.
> Advantage: the mathematical problems (like [[RSA]]) always rely on something being "difficult" to compute - re-constructing a [[Hash]] however is theoretically impossible without brute-forcing every possible combination.


> [!hint]- [[SPHINCS]] can sign up to approximately $2^{64}$ [[Nachricht|Messages]] per [[Private Key]].
> Note that the limit, other than with other FTS, is not leakage of a private key, but generating the same [[FORS]] too often, which can give insight into the seed of the PRF (i think)
## Papers
- [[NIST.FIPS.205.pdf]] - official specification for SLH-DSA by NIST
- [[sphincs+-r3.1-specification.pdf]] - submission to NIST final round
- https://www.telsy.com/en/cryptography-in-the-quantum-era/# - no pdf, but good articles i think

## Algorithm
1. [[Private Key]]: 
	1. The <span style="color:rgb(245, 154, 35)">seed</span> to generate [[FORS]] [[Private Key]]
	2. all [[WOTS|WOTS+]] [[Private Key|private keys]] used as leaves throughout the [[Hypertree]]
2. [[Public Key]]: the [[Wurzel|root]] of the [[Hypertree]] 

> [!hint] The [[FORS]] gets dynamically created, using message-dependent pseudo-random values.

![[Pasted image 20250413144459.png]]

### Signature Generation
1. [[Hash|Digest]] The message into a $ka$-[[Bit]] string using a [[Hash-Funktion|Hash function]]
2. Generate a [[FORS]] for the message - uses message-dependent values so that the [[FORS]] is new each time
3. [[Digital Signature|sign]] the [[Nachricht|Message]] [[Hash|Digest]] using the [[FORS]]
4. Choose a [[Blatt|leaf]] based on per-message randomness
5. [[Digital Signature|sign]] the [[FORS]] [[Public Key]] using the [[XMSS]]
6. Concatenate the following information:
	1. [[FORS#Signature Generation|FORS Signature]] of the [[Nachricht|Message]] <span style="color:rgb(245, 154, 35)">digest</span>
	2. [[WOTS#Compute the signature|WOTS+ Signature]] of the [[FORS]] Public Key
	3. The [[Merkle Tree#Authentication Pfad Path|Authentication Path]] and the [[Wurzel|roots]] of all [[Merkle Tree|merkle trees]] involved so that the [[Public Key]] can be re-computed

### Signature verification
1. re-compute the [[FORS]] [[Public Key]] based on the [[FORS#Signature Generation|FORS Signature]]
2. [[WOTS#Verify the signature|verify]] the [[WOTS|WOTS+]] [[Digital Signature|Digital Signature]] of the re-computed FORS Public Key
3. Use the [[WOTS|WOTS+]] [[Digital Signature|Digital Signature]] and authentication path to re-compute the [[Hypertree]]
4. If the computed [[Wurzel|root]] matches the senders [[Public Key]], the [[Digital Signature|signature]] is valid

