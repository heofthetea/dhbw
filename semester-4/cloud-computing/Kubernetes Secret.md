> For like passwords and stuff

- allows for confidential information to be referenced without explicitly mentioning them in like a deployment or something


> [!hint] This is just a special kind of [[Kubernetes ConfigMap|ConfigMap]]
## YAML Config
> [!warning] The values for keys in data need to be [[Base 64 Encoding|base64]]-encoded!!

```yaml
apiVersion: v1
kind: Secret
metadata:
  name: my-secret
type: Opaque # default - can be other things (e.g. Certificate)
data:
  my-secret-1: value
  my-secret-2: valkue1
  ...
```

### Reference
```yaml
valueFrom:
  secret: 
    secretKeyRef:
      name: my-secret # see metadata
      key: my-secret-1 # some key specified in data
  
```