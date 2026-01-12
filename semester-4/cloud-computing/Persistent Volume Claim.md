> [[Kubernetes Pod|Pod]] requests: I want this specific storage

- A [[Kubernetes Pod|Pod]] requests access to a [[Persistent Volume]]
- [[Kubernetes]] then figures out which [[Persistent Volume|PV]] matches the claim's requirements
- This is what's mounted inside the container -> The [[Kubernetes Pod|Pod]] does not know the volume belowf

> [!hint]  A [[Persistent Volume Claim]] **is** namespaced

![[Pasted image 20251208104236.png]]

## From Cloud
- Details regarding [[Persistent Volume|Volumes]] are handled by [[Kubernetes|K8s]]
- Define Properties, for example:
	- read-write
	- 10 GiB
	- type of storage - fast? cheap? lifespan?
