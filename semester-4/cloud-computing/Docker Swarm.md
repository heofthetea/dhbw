> Distribute [[Docker Container|Services]] over multiple Docker Hosts

[[Docker]]

> [!hint] Startup dependencies are removed, and images need to already be built.

![[Pasted image 20250407182427.png]]

## Modes
- **Global**: always one [[Docker Container]] on each node
- **Replicated**: specify a desired number of services over the swarm (independent of the number of nodes)

## Commands

### initialize a swarm
```bash
docker swarm init --advertise-addr <host_ip_addr>
```

> [!hint] The first initialized [[Server]] is a manager node.

- command provides a `docker swarm join` command to run on other nodes


### Start the services
```bash
docker swarm deploy --compose-file <compose file> <name>
```

> [!hint] Basically the equivalent of `docker compose up -d`



