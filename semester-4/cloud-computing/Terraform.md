> Contiuous Deployment
> Used to define and spin up virtual machines for cloud providers

- Infrastructure as Code -> use configuration [[YAML]] to describe desired state
	- in `{}.tf` files
- **planning** step -> generates an execution plan; lay out a plan how to reach desired state from the actual state

> [!hint] Terraform does not write any [[API]] itself, instead uses what exists -> relies on [[Terraform Providers]]

![[Pasted image 20250324174754.png]]

## Architecture (maybe????)
![[Pasted image 20250324175829.png]]