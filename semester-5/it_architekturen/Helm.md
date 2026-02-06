> The do-fucking-everything of [[Kubernetes]]

- **Package Manager** for komplex [[Kubernetes]] deployments
	- also does the deployment
- **Templating Engine** for [[k8s Deployment|deployment.ymls]] 
- (formerly also release management, but being able to do arbitrary CRUD on a cluster was a security risk (stichwort "Tiller"))

### Helm install
```bash
helm install $chart_name
```

Installs from a remote repository

1. does all [[#Templating]]
2. deploys to [[Kubernetes Cluster]]

> [!hint] Kind of like `kubectl apply`, except with more features
## Create Chart
-> [[Create Helm Chart]]
## Templating
- Always templates a Kubernetes [[k8s Deployment|deployment YAML file]]
- Values are stored in `values.yml`

```yml
# in values.yml
container:
	port: 8080
```

```yml
# in template

#...
containers:
	- name: my-container
	  #...
	  ports:
		  - containerPort: {{ .Values.container.port }} 
```

> [!hint] Values can be stacked (kinda like keycloak themes) by adding only the variables needed in a new `my-values.yml` and then using the flag `--values=my-values.yml` with `helm install`
 
## Structure
- A helm chart is always a [[Directory]]

```
mychart/
|_ Chart.yml # Information about the chart
|_ values.yml # for templating
charts/
templates/
```

### Values
- another [[YAML]] file -> kontains values that can be used through templating
