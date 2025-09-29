> [[Prozess]] im [[Kernel]] in einer isolierten Sandbox laufen lassen

> [!hint] Behebt Probleme, die von [[chroot]] verursacht wird.

> [!info] Feature of the [[Linux]] [[kernel]]

- Within one namespace, a [[Prozess|Process]] can see only itself and its children, no other [[PID|PIDs]]
- Is an isolated view with the following elements being de-coupled from the [[Host]]:
	- [[PID]]
	- USER - user and group ids
	- UTS - host- and domain-name
	- MNT - [[Mount]] points
	- NET - Network devices, network stack, ports
	- IPC - inter-process [[Prozesskommunikation|communication]]
	- [[cgroup|cgroups]] - controls limits and monitoring of [[Resource|resources]]


=> https://www.youtube.com/watch?v=sK5i-N34im8