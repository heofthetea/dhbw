[[Kubernetes]]

- define a logical [[Menge|set]] of [[Kubernetes Pod|Pods]] which build an application tier
- can [[Horizontal Scaling|scale]] up and down
- [[Service Discovery]]
- has its own [[IP Adresse|IP address]] 

> [!hint] can be [[Stateful]] or [[Stateless]]


## YAML configuration
[[YAML]]

```yaml
apiVersion: 1
kind: Service
metadata:
	name: <name of the object>
	namespace: <namespace of the service object>
	annotations:
		key: value
	labels:
		key: value
spec:
	selector:
		app: myapp
	type: type of service
	ports:
		- port: <the service port>
		  targetPort: <the container port (internal)>
		  protocol: TCP
```

[[TCP]]
