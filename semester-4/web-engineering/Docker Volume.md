---
aliases:
  - Bind Mount
---
> [!hint] Think [[Symlink]] from _inside_ a [[Docker Container]] to the host system.

- any changes made, regardless of on host system or the container, are synchronized pretty much instantly

> [!info] Volume vs Bind mount:
> - Bind mount erforder [[Host]] path (besonderes volume)
> - Ein Volume ohne host path ist von docker gemanaged -> `/var/lib/docker/...`

> [!question]- Was passiert, wenn ich einen leeren [[Directory|Ordner]] in ein [[Directory]] im [[Docker Container|Container]] mappe, in dem schon was drin ist?
> - Das, was schon drin ist, landet im Mount source, da durch den [[Union Mount]] nichts überschrieben wird.
### Docker CLI
```shell
docker run -v "/location/on/host:/location/in/container" mycontainer
```

#### managed volume
```bash
docker volume create --name <name>
```
### Docker Compose
```yml
services:
	mycontainer:
		image: mycontainer
		volumes:
			- "/location/on/host:/location/in/container"
```
- note that volumes have to be a _list_ 
	- multiple volumes can exist for one container (and I don't know how to do that in the [[Docker CLI]] but I'm sure it's possible as well)

### Dockerfile
```dockerfile
VOLUME ["/data"]
```

- specify the path inside the [[Docker Container]]
- the location on the host will be `/var/lib/docker/volumes/...`