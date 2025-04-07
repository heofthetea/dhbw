> [[Prozess]] im [[Kernel]] in einer isolierten Sandbox laufen lassen

> [!info] Feature of the [[Linux]] [[kernel]]

- Is an isolated view with the following elements being de-coupled from the [[Host]]:
	- [[PID]]
	- USER - user and group ids
	- UTS - host- and domain-name
	- MNT - [[Mount]] points
	- NET - Network devices, network stack, ports
	- IPC - inter-process communications
	- [[cgroup|cgroups]] - controls limits and monitoring of [[Resource|resources]]


=> https://www.youtube.com/watch?v=sK5i-N34im8