---
aliases:
  - WOTS+
---
> WOTS+
> Winternitz One-Time [[Digital Signature|Digital Signature]] Scheme

[[Hash-Funktion]]


> [!hint] OTS (One Time): Each pair of [[Public Key|public]] and [[Private Key|private]] Keys can only be used to sign **one** [[Nachricht|message]]

## Algorithm
- $n$: length of the [[Nachricht|Message]] in [[Byte|Bytes]]
- $w$: Winternitz parameter ($\in \set{4, 16}$)
- $H$: a cryptographic [[Hash-Funktion|hash function]] such as [[SHA-256]] or SHAKE
- $msg$: the [[Nachricht|Message]] to sign

![[Pasted image 20250410155905.png]]

1. split $msg$ into chunks with $lg_{w} = ld(w)$ [[Bit]]
	1. results in $len_{1} := \frac{8n}{ld(w)}$ chunks
	2. => $m_{j} \in \set{x \in \mathbb{N}\ |\ 0 \leq x \leq w - 1}$ is the integer value of such a block[^1]
2. calculate $len_{2} := \left\lfloor\frac{lb(len_{1}(w-1))}{lb(w)}+1\right\rfloor$, and $len = len_{1} + len_{2}$ [^2]
3. [[Private Key]]: [[Tupel|tuple]] of $len$ $n$-[[Byte]] secret [[String|strings]]  
4. [[Public Key]]: for each [[Private Key]] $sk_{i}$, apply $H$ repeatedly $w - 1$ times:
	1. $pk = (H^{w-1}(sk_{1}), H^{w-1}(sk_{2}),\ ..., H^{w-1}(sk_{len}))$ 

### Compute the signature
[[Konkatenation]]

1. for each secret string in the [[Private Key]] $sk_{i}$: compute $\sigma_{i} = H^{m_{i}}(sk_{i})$ 
2. [[Konkatenation|concatenate]] these $\sigma_{i}$ in order
### Verify the signature
1. for each $\sigma_{i}$:
$$H^{w - m_{1} -1}(\sigma_{i}) \stackrel{?}{=} pk_{i}$$

- if all match, the [[Digital Signature|signature]] is valid

## Why only one time?
- If a [[Digital Signature|signature]] is made, for each $sk_{i}$ there is a $j \in \mathbb{N}$ so that $H^{j}(sk_{i})$ is known
- assume a new message is constructed such that for each $sk_{i}$, $m_{i} \gt j$ 
- then, the partial signature for $sk_{i}$ can be forged like so:

$$\sigma_{i} = H^{m_{i}-j}(H^{j}(sk_{i}))$$

> [!hint] as $H^{j}(sk_{i})$ is known, there does not need to be knowledge about $sk_{i}$ (and thus, the [[Private Key]] $sk$) to compute the [[Public Key]]



[^1]: ATTENTION: MSB and LSB are swapped -> LSB is on the left

[^2]: done to fix a vulnerability where any $msg'$ with larger message chunks than $msg$ results in being able to derive a valid signature automatically (??)