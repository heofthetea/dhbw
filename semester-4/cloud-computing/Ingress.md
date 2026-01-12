> Enables [[Application Load Balancer|ALB]] to internal Services
> aka: Access from _outside_ to inside


> [!hint] The counter-concept is "Egress", i.e. outgoing - "ingress" means "to enter" (it's an actual word lol)

- Ingress Controller: orchestrates based on the yaml config
- Basically, this is just [[Kubernetes]]' [[Reverse Proxy]]


> [!hint] Controls an external [[Application Load Balancer|ALB]] (e.g. of a [[Cloud Provider]]) -> is not a load balancer itself!

![[Pasted image 20251210084527.png]]

### Using the AWS [[Application Load Balancer|ALB]]
![[Pasted image 20250428165541.png]]
### With [[NGINX]] [[Reverse Proxy]]
![[Pasted image 20250428165335.png]]

https://www.youtube.com/watch?v=80Ew_fsV4rM
## [[YAML]] config
![[Pasted image 20250428165205.png]]