> [[Environment Variable]] for kubernetes [[k8s Deployment|deployment yamls]]

-  basically specify a key-value pair once to use in multiple places



```yaml
apiVersion: v1
kind: ConfigMap
metadata:
  name: my-configmap
data:
  my-key-1: value
  my-key-2: valkue1
  ...
```

### Reference
```yaml
valueFrom:
  secret: 
    configMapKeyRef:
      name: my-configmap # see metadata
      key: my-key-1 # some key specified in data
  
```