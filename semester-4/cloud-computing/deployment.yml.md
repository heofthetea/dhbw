[[Kubernetes]]



## Deployment
- replicas: how many instances of the [[Service]] with the following label do I want?
	- searches in the [[Kubernetes Pod|pods]] for any pod with the specification

```yml
apiVersion: apps/v1 
kind: Deployment 
metadata: 
	name: <name of the object> 
	namespace: <namespace of the deployment object> 
	annotations: 
		key: value 
	labels: 
		key: value 
spec: 
	replicas: 3 <number of Pod instances desired> 
		selector: <who are my Pods> 
			matchLabels: 
				app: tinyapp 
			template: <template for creating Pods> 
				metadata: 
					labels: 
						app: tinyapp <must match with the selector above> \
					spec: 
						containers: 
							- name: <container name> 
								image: juergenschneider/ultimativeapp:dhbw
								imagePullPolicy: Always
```

