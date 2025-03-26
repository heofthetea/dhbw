> used to create a [[Docker Image]]

```shell
docker build <path>
```

- uses a base image: `FROM` keyword
- creates a new partial filesystem

## Commands
- `RUN <bash-command>` - executes the given [[Bash]] command
- `COPY <source> <target>` - copies the source directory to the target directory
	- source is on the host - target is inside the container

> [!hint] each `COPY` actually creates a new layer (i.e. Filesystem) in the [[Docker Image|image]].

- `EXPOSE <port>` - Exposes Ports toth
