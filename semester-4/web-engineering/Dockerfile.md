> used to create a [[Docker Image]]

```shell
docker build <path>
```

- uses a base image: `FROM` keyword
- creates a new partial filesystem

> [!info]- **Every** command in the [[Dockerfile]] creates a new image layer.
> Show layers using [[Docker Image#View Image layers|docker history]]

## Commands
- `RUN <bash-command>` - executes the given [[Bash]] command
- `COPY <source> <target>` - copies the source directory to the target directory
	- source is on the host - target is inside the container

> [!hint] each `COPY` actually creates a new layer (i.e. Filesystem) in the [[Docker Image|image]].

- `EXPOSE <port>` - Exposes [[Port]] that the container listens to
	- is internal -> `EXPOSE 80` => `172.23.0.1:80`, this is not a [[Docker Port Binding|Port Binding]]

> [!hint] Is only a documentation thing - does not lead to any actual functionality.



