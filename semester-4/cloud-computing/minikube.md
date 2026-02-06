> [[Simulation|Simulate]] An entire [[Kubernetes Cluster]] (including [[Kubernetes Control Plane|Master Nodes]] and [[Worker node|Worker nodes]]) on a singular device

- On linux it can work with [[Docker]] -> no [[Virtualisierung|virtualization]] needed
	- haha mac winodws L
	- uses only a singular [[Docker Container]] tho, so they're not using the full potential

> [!hint] Installation through package manager.

:panicmonster: das ist ein einziges meme lol, the ai-esque emojis and the fucking `--alsologtostderr` flag pahaha

## Commands
### Start a [[Kubernetes Cluster]]
```bash
minikube start
```

> [!warning] This automatically configures [[kubectl]] to use this cluster!

### Load a local [[Docker Image]]
```bash
minikube image load $image_tag
```

### [[SSH]]
- roughly equivalent to `docker exec -it`

```bash
minikube ssh
```


### Assign an external [[IP Adresse|IP Adress]] to a [[Loadbalancer Service]]

> [!warning] for some reason opens a browser window but you can also just grab the url so


```bash
minikube service $service_name 
```

> [!warning] If the app is in a [[Kubernetes Namespace|Namespace]], specify that with the `-n` flag (just like with kubectl).