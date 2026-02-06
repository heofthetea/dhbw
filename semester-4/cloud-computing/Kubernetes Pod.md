---
aliases:
  - Pod
---
> Smallest deployable [[Entität|Entity]] in [[Kubernetes]]

- consists of one or multiple [[Docker Container|containers]]
- **includes**:
	- the attached [[Hard Drive|storage]]
	- the [[Docker Image|image]] with which to start the internal container(s)
	- unique internal [[IP Adresse]]
- ever Object can be **labelled** -> identified through custom properties

> [!hint] A pod is always a [[Kindknoten|child]] of a [[Replicaset]]

> [!question] Why one or more?
> Sometimes, an application needs bound helper services (say a Backend relies on a different container to do some complex validation of data). This then makes sense to bundle.
> **But one container per pod is the norm**.

## id
```
<deployment-name>-<replicaset>-<uid>
```