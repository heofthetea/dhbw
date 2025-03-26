> [!hint] Think [[Symlink]] from _inside_ a [[Docker Container]] to the host system.

- any changes made, regardless of on host system or the container, are synchronized pretty much instantly
### Docker CLI
```shell
docker run -v "/location/on/host:/location/in/container" mycontainer
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