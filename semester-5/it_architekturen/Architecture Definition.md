> Diagramme/Tabellen zur Darstellung des gesamten [[IT System]]

- z.B. Standorte/geografische Verteilung ([[Service Regions]])
- [[Topologie]] des [[Netzwerk]] (auch <span style="color:rgb(0, 122, 255)">Zonen</span>)
- Die [[Server]]/[[Worker node|Node]] mit [[Betriebssystem]] & physischer Hardware specifications
	- abhängig von logischer/physischer sicht: logisch Node, physisch Server
- Middleware (Server driver (jboss, quarkus), Kommunikation ([[Message Queue]]))
- Benutzerzugänge von Endnutzern **und** Admininstratur

> [!hint] Hier sieht man, wie die Applikations-Komponenten auf die Infrastruktur-Komponenten zugreifen! [[IT System]]


![[Pasted image 20251010090923.png]]


## DMZ
- demilitarized Zone
- eigenes [[Netzwerk]], welches alle customer-facing server enthält
	- abgetrennt von Unternehmensnetz durch [[Firewall|Firewalls]]

> [!hint] Grund: Endkunden will ich nicht in meinem Unternehmensnetz haben lel