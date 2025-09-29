[[Service]]

- address a particular [[Kubernetes Pod|Pod]]  _without_ randomized load-balancing of a [[Cluster IP]]
- usually used in  [[Stateful]] Pods

> [!info] Realized by addressing the [[Cluster IP]] in combination with a sp
## Example
- Databases: One [[Kubernetes Pod|Pod]] has write permissions, the other ones only read
	- [[Datenbank|Database]] gets replicated

![[Pasted image 20250428172331.png]]
