[[IPv4]], [[Paket]], [[Fragmentierung]]

- in `Version` steht halt einfach "4" lol
- TOS (Type of Service): Identifiziert, was genau transferiert wird
	- Beispiel: [[VoIP]] sollte höher priorisiert werden als ein ein file transfer
- Length: trivial
- zweite Zeile dient der [[Fragmentierung]]  & Reassemblierung
	- Offset: An welchem Bit des ursprünglichen Pakets stehe ich?
	- ID: ?
	- Flags: 3 bit -> max. 8 mögliche Flags
		- DF: Do not Fragment
		- MF: More Fragments => Es kommen noch mehr [[Fragmentierung|Fragmente]] des Pakets
- Protocol: Welches  [[Protokoll]] - [[TCP]]/[[UDP]]/[[ICMP]]/...
- [[TTL]]
- [[Checksum]] ist einfach doppelt gemoppelt bruh => ist in IPv6 weg


![[Pasted image 20241113095748.png]]

