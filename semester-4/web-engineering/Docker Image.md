> [[Stack]] of read-only [[UNIX Filesystem|Filesystems]] created with [[Union Mount|Union Mounts]]

- built via [[Dockerfile]] 

> [!hint] Layers can be re-used - if multiple containers on one system have a layer of `ubuntu:22.04`, then that image is only needed **once**.

## View Image layers
```shell
docker history <image_name>
```

- newest layer is on top