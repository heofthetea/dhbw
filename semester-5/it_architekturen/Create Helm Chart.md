```bash
mkdir deployment
helm create deployment/my-chart
```

-> will create a default [[helm]] chart named `my-chart` in the configured directory

## Config
- in `Chart.yaml`: Configure name/description
- in `values.yaml`: Change the default templated variables

> [!hint]- By default, the created chart contains an [[NGINX]] image:
> ```yml
> image:
>  repository: nginx
>  # This sets the pull policy for images.
>  pullPolicy: IfNotPresent
  ># Overrides the image tag whose default is the chart appVersion.
  >tag: ""
  >```

- [ ] Container Port
- [ ] Image Registry/Tag
- [ ] Env variables
### Noteworthy things
- Environment variables can just be thrown into the file in `camelCase` and get auto-translated to `SCREAMING_SNAKE_CASE`

> [!warning]- Make sure to set the health check correctly: 
> ```yaml
> livenessProbe:
> httpGet:
>    path: /
>    port: 3000
>readinessProbe:
>  httpGet:
>    path: /
>    port: 3000
>    ```
>    Otherwise, [[Kubernetes]] will think the pod is dead and try to backoff-restart it

### Create Docker login Credentials
```bash
kubectl create secret generic regcred\
	--from-file=.dockerconfigjson=/home/$USER/.docker/config.json\
	--type=kubernetes.io/dockerconfigjson
```

- Add the credentials to `values.yaml` under `imagePullSecrets`:

```yaml
imagePullSecrets:
  - name: regcred
```

