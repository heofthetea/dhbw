> Creates and runs [[Virtual Machine|Virtual Machines]]

- [[Virtualisierung|Virtualisiert]] [[Resource|Resourcen]] wie:
	- [[CPU]] Kerne
	- [[Memory]]
	- [[Hard Drive|Persistenten Speicher]]
- Auch genannt: VMM (Virtul Machine Monitor/Manager)
- zwei Typen - unterschieden anhand ihrer intended purpose (virtualisierung im vorder- oder Hintergrund?)

> [!hint] Eselsbrücke: "Typ $n$ [[Hypervisor]]" => [[Hypervisor]] ist die $n$-te Schicht über der Hardware

### Eigenschaften
1. **Resource Control** -> [[Hypervisor]] braucht komplette Kontrolle über die virtualisierten [[Resource|Ressourcen]] (=> nichts darf an Hypervisor vorbei gemacht werden)
2. **Efficiency** -> Die meisten [[Instruktion|Instruktionen]] müssen auf der [[CPU]] ausgeführt werden, _ohne_ dass der [[Hypervisor]] eingreift 
3. **Equivalency** -> Ein [[Prozess]] in der [[Virtual Machine|VM]] soll sich gleich verhalten wie auf bare metal.
## Typ 1
- [[Hypervisor]] ist das [[Betriebssystem]] -> **muss** [[Virtual Machine|VMs]] starten, damit System benutzbar wird

> [!hint] Das, was in der [[Cloud]] benutzt wird.

![[Pasted image 20250505101702.png]]

## Typ 2
> [!hint] Das, was von Endnutzern genutzt wird.

![[Pasted image 20250505101718.png]]
