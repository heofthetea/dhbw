> Für Redundanz gibt es aus lokalem Netzwerk _zwei_ [[Gateway|Gateways]] ins [[Internet]]
## VRRP
- Arbeiten mit Prioritäten
- Clients müssen sich merken, welche [[Router]] es alles gibt

> [!info] Erweiterung: Ein [[DHCP Server]] vergibt nicht nur [[IP Adresse|IP Adressen]], dondern auch, welcher der beiden [[Router]] für ein Gerät zum [[Default Gateway]] wird => Dann werden auch beide Verbindungen immer benutzt

![[Pasted image 20241113112840.png]]


## HSRP

> [!info] ist von [[CISCO]] lizensiert

- beide [[Gateway|Gateways]] können durch ein $.1$ adressiert werden => obwohl sie eigentlich andere Adressen haben
- wenn $R1$ ausfällt: Reserve ($R2$) schicht "unsolicited [[ARP]]-Reply" (Antwort auf eine ARP-Request, die nie da war), damit alle Geräte ihren [[ARP]]-Cache updaten können

> [!warning] Man benötigt **drei** [[IP Adresse|IP Adressen]] für _eine_ Verbindung

![[Pasted image 20241113112633.png]]