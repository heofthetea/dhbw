---
aliases:
  - deployment.yml
---
> Abstraction on top of a [[Kubernetes Pod]]

[[Kubernetes]]

> [!info] Motivation: You basically never have to work with individual pods

> [!hint] Basically a blueprint for creating [[Kubernetes Pod|Pods]]

- Includes basic [[Kubernetes Pod|Pod]] Information
	- [[Docker Image|image]] etc
- But includes additional Information (like number of replicas)

## YML file
- two root-level sections:
	- `metadata`: [[Metadata]]
		- includes: labels for identification
	- `spec`: The actual specification
- [[rekursiv|recursive]] Structure:
	- The [[Kubernetes Pod|Pod]] configuration also has `metadata` and `spec`
- `template`: actual template for a [[Kubernetes Pod|Pod]]
	- `metadata` needs to ensure the labels are matched

> [!hint] The labels just all need to be the same. Don't question it, it's stupid (probably it does make sense on a higher level of wizardry)

```yml
apiVersion: apps/v1
kind: Deployment
metadata:
  name: counter-deployment
  labels:
    app: simple-http-server
spec:
  replicas: 2
  selector:
	# assign this to the counter-deployment deployment
    matchLabels:
      app: simple-http-server
  # actual configuration template for one pod
  template:
    metadata:
      labels:
        app: simple-http-server
    spec:
      containers:
        - name: counter
          image: simple-http-server-simple-http-server:latest
          imagePullPolicy: Never
          ports:
            - containerPort: 3000
```
