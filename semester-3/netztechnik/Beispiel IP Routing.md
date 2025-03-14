[[Subnetting]], [[Subnet Mask]]

- $/24$ -> C-[[Netzwerkklassen|Klasse]] Netzwerk; Host-Teil 1 [[Byte]]
- $/8$ -> A-Klasse Netzwerk; Host-Teil 3 [[Byte]]
![[Pasted image 20241106114542.png]]

### Szenario A -> B
1. Eigenen Netzwerk-Teil Rausfinden
	1. eigene [[IP Adresse]] mit [[Subnet Mask]] verknüpfen -> $192.168.0.0$
2. Entscheiden, ob Ziel im selben Netz ist oder nicht
	1. Eigene [[Subnet Mask]] über **Ziel**-[[IP Adresse]] legen -> $192.168.0.0$
3. lol noice ich kann B direkt adressieren weee 🥳

### Szenario A -> E
1. eigener Netzwerk-Teil -> $192.168.0.0$
2. Ziel-Netzwerkteil according to _eigener_ [[Subnet Mask]]: $10.0.0.25 \land 255.255.255.0 \leadsto 10.0.0.0$
3. A muss [[Paket]] an seinen [[Default Gateway]] (den [[Router]]) schicken