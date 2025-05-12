> Consistency, Availability, Partitioning

[[DBMS]], [[Data Consistency]], [[Magisches Dreieck]]

- In der Praxis können nur zwei dieser drei Bedingungen sinnvoll reallizierte werden

![[Pasted image 20250512171703.png]]


## Partitioning
- multiple [[Server|servers]] use heartbeats to know whether the others are still available
	- one [[Distributed Data storage]]: only master can write
- now this network drops out -> how do I know whether master is dead or just cannot respond?

> [!warning] There are never allowed to be two masters!!!!

