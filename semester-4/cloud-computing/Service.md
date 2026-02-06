[[Kubernetes]], [[Service Discovery]]
- define a logical [[Menge|set]] of [[Kubernetes Pod|Pods]] which build an application tier
	- multiple [[Kubernetes Pod|Pods]] can belong to the same Service
- can [[Horizontal Scaling|scale]] up and down
- has its own persistent [[IP Adresse|IP address]] 
	- => allows for [[Service Discovery]]

> [!hint] can be [[Stateful]] or [[Stateless]]

![[Pasted image 20251107145729.png]]
## YAML configuration
[[YAML]]

> [!hint] Needs to reference ("select") a [[k8s Deployment|Deployment]].
> Kind of makes sense given the architecture of a service **glueing** together different [[Kubernetes Pod|Pods]] of the same [[k8s Deployment|Deployment]]s

```yaml
apiVersion: v1
kind: Service
metadata:
  name: counter-service
spec:
  selector:
    # cross reference to link this to the corresponding deployment
    app: simple-http-server
  ports:
    - protocol: TCP # http is on top of tcp lol
      port: 80 # port exposed by the service
      targetPort: 3000 # port internal to the container
```

> [!hint] can be placed in the same [[File]] as the [[k8s Deployment|deployment.yml]] with [[YAML]]'s `---` syntax

> [!hint] This [[Service]] can be referenced through [[Service Discovery]] by the name `counter-service`.