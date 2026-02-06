---
aliases:
  - External Service
---
> Allow external access to a [[Service]]

- less insecure than a [[NodePort Service]] hopefully??

> [!hint] [[Kubernetes]] does not write its own loadbalancer - needs to be done by [[Cloud Provider|cloud providers]] through an API

> [!question]- What is the Difference to an Application Load Balancer?
> - [[Application Load Balancer|ALB]]: Works in the [[Layer 7|Application Layer]] -> Can differentiate between Database, Web Server etc.(bsp: [[NGINX load balancer configuration|NGINX load balancer]])
> - NLB: works in [[Layer 3]] -> Can only distribute load by [[IP Adresse|IP Adress]] 

![[Pasted image 20250428164201.png]]

## Configuration
(see [[Service#YAML configuration]])

```yaml
kind: Service
#...
spec:
  #... metadata etc
  type: LoadBalancer
  ports:
    - protocol: TCP
      #...	
      nodePort: 80 # port that is made available to the ouuside world
    - #... more ports
```

> [!warning] the node port needs to be in range $[30000, 32767]$

