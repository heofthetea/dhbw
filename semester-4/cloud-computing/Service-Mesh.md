---
aliases:
  - Sidecar Pattern
---
> Connect a lot of [[Microservice|Microservices]] in a [[Mesh Topologie|mesh topology]]

- Goal: Seperate business logic from management logic
- Break Architecture down into the [[Kubernetes Pod|Pod]] layer:
	- Which [[Kubernetes Pod|Pod]] is allowed to talk with whom?
	- Each [[Kubernetes Pod|Pod]] can do Security
- Each [[Microservice]] (=[[Kubernetes Pod|Pod]]) has 2 containers:
	- 1 [[Service]] [[Docker Container|Container]] containing Business Logic
	- one [[Proxy]], through which the Service communicates with the outside -> 'Motorcycle Sidecar'
 ![[Pasted image 20250428175429.png]]