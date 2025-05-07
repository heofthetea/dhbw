- all [[Docker Container|Containers]] use the same [[Betriebssystem|operating system]] [[Kernel]]


| [[Virtual Machine]]                                           | [[Containerization]]                                                        |
| ------------------------------------------------------------- | --------------------------------------------------------------------------- |
| Jede [[Virtual Machine\|VM]] hat einen eigenen [[Call Stack]] | Die [[Docker Container\|Container]] teilen sich einen [[Call Stack\|Stack]] |


> [!info] Problem: Needs to be independent -> an arch container should run on a ubuntu host e.g.

![[Pasted image 20250331183148.png]]


## Benefits of Containers
- Fast startup time. Only milliseconds taken to:
	- lay-down a [[Docker Container|container's]] [[Filesystem]]
	- Setup the [[Docker Networking|networks]], [[Mount|mounts]], ...
	- Start the [[Prozess]] inside the container
- Better resource utilization:
	- Does not waste resources on a simulated [[Betriebssystem|operating system]]
- Allows for [[Microservice]] implementation