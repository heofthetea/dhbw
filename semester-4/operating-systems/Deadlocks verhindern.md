 [[Deadlock]]


![[Pasted image 20250317104404.png]]

> [!hint] Resourcen teilbar machen wird gerne gemacht bei [[Hard Drive|Festplatte]] und [[Netzwerk]]

- lineare Ordnung für [[Resource|Ressourcen]]: Was darf in welcher Reihenfolge überhaupt reserviert werden?

---
## Resource Management

- [[Prozess]] gibt vorab info, welche Ressourcen benötigt werden
- [[Betriebssystem]] gewährt Zugriff entsprechend
- Prozesse müssen warten, bis sie die Ressourcen zugeteilt bekommen
- Methoden:
	- [[Resource Allocation Graph]]
	- [[Banker's Algorithm]]


### Vorteile
- System wird stretig auf [[Prozess Blocking|blockierende]] Zustände überprüft
- Regulierung der Ressourcen verhindert [[Deadlock]]

### Nachteile
- oft sind im Vorraus nicht alle Rressourcen bekannt
- in Theorie gut; in Praxis rechnungsaufwendig und schwer