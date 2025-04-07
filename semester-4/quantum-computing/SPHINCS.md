---
aliases:
  - SLH-DSA
---
> [[Stateless Signature Scheme|Stateless]] [[Hashing|Hash]]-based Signature Scheme

[[Merkle Tree]], [[WOTS]]

- [[Digital Signature]]
- based on [[Merkle Tree]] and [[WOTS]] 
	- supports multiple [[Hash-Funktion|Hash functions]], i.a. [[SHA-256]]
		- although: an attack has been found, so SHA-512 needs to be used when necessary

> [!info]- [[Hashing|Hash]]-based signature -> Only [[Hash-Funktion|hash functions]] are used, no mathematical problems like lattices.
> Advantage: the mathematical problems (like [[RSA]]) always rely on something being "difficult" to compute - re-constructing a [[Hash]] however is theoretically impossible without brute-forcing every possible combination.

## Papers
- [[NIST.FIPS.205.pdf]] - official specification for SLH-DSA by NIST
- [[sphincs+-r3.1-specification.pdf]] - submission to NIST final round

## Algorithm
