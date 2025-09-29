---
aliases:
  - Docker Daemon
---
> Program theat creates, ships and runs application [[Docker Container|Containers]]

[[Client Server Architecture]]

- runs on the Docker [[Host|Host]]
- A Docker Client communicates with the Engine to execute commands like `docker run`
- does all the [[Kernel Namespace|namespace]] stuff under the hood

> [!hint] For communication by clients, the engine binds to the [[Socket]] `/var/run/docker.sock`

