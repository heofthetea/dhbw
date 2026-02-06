> [[IP Adresse]] for one [[Service]]
> Abstracts the individual [[Kubernetes Pod|pods]] 

> [!hint] Always linked to a [[Service]] - why the fuck is this its own node bruv

[[Kubernetes Cluster]], [[Service]], [[Kubernetes Pod]], [[NAT]], [[Docker Port Binding]]

- macht u.a. [[Service Discovery]]
- "ich als [[Service]] bin für alles Ansprechpartner, was sich als `microservice-one` identifiziert"
	- dient als [[NGINX load balancer configuration|load balancer]], [[NAT]] entity

> [!warning] Man kann nicht auf einen [[Kubernetes Pod|Pod]] zugreifen, ohne eine [[Cluster IP]] zu haben.

![[Pasted image 20250414183626.png]]

