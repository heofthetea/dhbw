> Reach another [[Service]] without needing to know its [[IP Adresse|IP address]]

[[Docker Compose]], [[Service]]

- reach a [[Docker Container]] (a "service") through a name, regardless of [[IP Adresse|IP adresses]]
	- [[IP Adresse|addresses]] can change when a Container is restarted, or if a [[NGINX load balancer configuration|load balancer]] is used

> [!hint] [[Docker]] achieves this, by writing the [[DNS|Domain Name]] of all other containers into `/etc/hosts`.


![[Pasted image 20250414181146.png]]