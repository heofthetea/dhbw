> Definiert, was Netzwerk- und weas Hostanteil ist


> [!info] [[IP Adresse]] mit [[Subnet Mask]] bitwise [[AND|verunden]] liefert die ID des [[Netzwerk|Netzwerks]]


- [[IP]] ist aufgeteilt in zwei Teile:
	- Netzwerkanteil
	- Host-anteil
![[Pasted image 20241106113415.png]]
## Darstellung
$$255.255.255.0$$
oder: man zählt die Anzahl der einsen - sind hier $3 \cdot 8 = 24$
und schreibt das einfach hinter einen Slash bei einer [[IP]]

## Beispiel
- [[IP Adresse]]: $195.212.30.5/24$   
- [[Subnet Mask]]: $255.255.255.0$

==> Netzwerk-Adresse: $194.212.30.0$