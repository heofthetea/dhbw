> A [[Kubernetes Cluster|Cluster]]-wide [[Resource]] for Storage

- Physical Storage needs to be managed by something else ([[SAN]] etc.)

> [!warning] Persistent Volumes are not [[Kubernetes Namespace|namespaced]] -> Every Namespace can access the same storage.
## Configuration
- What backend do we use
- e.g.: [[Network Filesystem|NFS]], Local, Google Cloud etc.
- How big is the storage?