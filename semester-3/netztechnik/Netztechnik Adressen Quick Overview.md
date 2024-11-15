## [[MAC Adresse]]
- `xx:xx:xx:xx:xx:xx` -> $6$ [[Byte]] Hexadezimal
	- erstes Bit: I/G
		- $0$: individual-Adresse -> [[Unicast]]
		- $1$: globale Adresse -> [[Multicast]]
	- zweites Bit: U/L
		- $0$: Universal-Adresse -> von [[IEEE]] vergeben
		- $1$: Lokal -> von Software/Admin vergeben => keine Garantie auf Einzigartigkeit
- Nach ersten beiden Bits (bis zur Mitte -> $22$ [[Bit]]): Organization Unique Identifier 
- Letzten 3 Bytes: Fortlaufende Nummer LEDNR

> [!warning] liegt Byteweise verkehrt auf der Leitung: "nur **erstes** bit auf $1$" wird zu `01:...`

#### Besondere Adressen
- `ff:ff:ff:ff:ff:ff` -> [[Broadcast]] Adresse
- `01:00:5e:00:00:0z` -> [[Multicast]] Adresse
	- `z = 1`: All Systems
	- `z = 2`: All [[Router|Routers]]
- `01:08:C2:00:00:01` -> [[Multicast]] für [[Ethernet Flow Control|Flow Control]]
- `00:00:0c:xx:xx:xx` -> Von [[CISCO]]
- `00:00:01:xx:xx:xx` -> Von XEROX (inventors)


## [[IPv4]] Adressen
- Dezimale Darstellung
- `xxx.xxx.xxx.xxx` -> 4 [[Byte]]

#### Klassen über erstes Byte
- A: $000 - 127$
- B: $128 - 191$
- C: $192 - 223$

> [!hint] [[Loopback]] und [[Privater Adressraum]] liegen an den grenzen - einmal drunter, einmal drüber
#### Besondere Adressen
- `224.0.0.z` -> [[Multicast]] Adresse (`z` gleich belegt wie für [[MAC Adresse]])
- `192.168.0.0/24`;  `172.16.0.0/16`; `10.0.0.0/8` -> Reserviert für [[Privater Adressraum|Privatgebrauch]]
- `169.254.0.0/16` -> [[Zeroconf]] Adresse
- `127.0.0.0/8` -> [[Loopback]] 
- `255.255.255.255` -> Universeller [[Broadcast]]
- abhängig von [[Subnet Mask]]:
	- Host-Anteil all Zeros -> Netzwerk-Adresse/ID
	- Host-Anteil all Ones -> [[Broadcast]] innerhalb des Netzes

## [[IPv6]] Adressen
- `pppp:pppp:pppp:ssss:xxxx:xxxx:xxxx:xxxx` -> $8 \cdot 16$ [[Bit]]; Darstellung [[Hexadezimalsystem|hexadezimal]]
	- `p`: International gültiger Prefix
	- `s`: [[Subnetting|Subnetz]]-ID
	- `x`: Interface-ID => Für jedes Interface eindeutig => Pro Knoten mehrere IPv6 Adressen
- Für die **längste** Folge an Nullen: Abkürzung durch `::` 

#### Besondere Adressen
- `::`: All Zeros -> Default Adresse
- `::1`: [[Loopback]]
- `ff05::z` -> [[Multicast]] (`z` definiert wie für MAC und IPv4)
- `f080::` -> Unique Local Scope (gültig bis zu [[Gateway]]) 