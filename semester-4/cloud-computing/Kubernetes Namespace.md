> Group & organize multiple [[Kubernetes Objects]] into different Namespaces

- isolate [[Service|Services]] from each other
- a **logical** grouping of [[Kubernetes Objects]] 
- can be used to seperate [[Resource|Resources]] among different users using [[Menge|sets]] of [[Kubernetes Pod|pods]]

> [!hint] Sort of a "virtual [[Kubernetes Cluster|Cluster]]" within a [[Kubernetes Cluster]]


## Usage with kubectl
```bash
kubectl get pods -n $my_namespace
```

### Make kubectl remember
```bash
kubectl config set-context --current --namespace=$my_namespace
```
