> Dynamic Host Control Protocol

- Dynamische Vergabe von [[IP Adresse|IP Adressen]] an Geräte in einem lokalen [[Netzwerk]] von einem zentralen [[DHCP Server]]
- Leasetime: [[DHCP Server]] gibt dem Gerät auch eine Zeit mit, wie lange Gerät die [[IP Adresse]] hat

## Ablauf

- Init: Gerät schickt Anfrage, ob es einen [[DHCP Server]] 
	- wenn er keinen findet: gibt sich selbst [[Zeroconf]] 
- Offer: [[DHCP Server]] schicht Gerät eine frei Adresse
- Request: Gerät fragt ins Netz, ob die Adresse schon jemand hat
	- wenn nein: => bound
![[Pasted image 20241113113630.png]]