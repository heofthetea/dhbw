> - Abstrahierung von [[Resource|Resourcen]] zu logisch vollständigen Einheiten, sodass Sie für Applications wirken, als hätten sie Zugriff auf eine gesamte Resource.
> - Aus mehreren kleinen physischen Einheiten, eine große (unabhängig unterteilbare) logische Einheit machen.
- teilen von [[Resource|Ressourcen]]
- hohe Skalierbarkeit
- hohe Ausfallsicherheit
- gute Wartbarkeit

> [!hint] Oft kombiniert mit [[Emulation]] -> z.B. wird [[BIOS]] emuliert, weil [[POST]] sinnlos ist obv
### Motivation
- historissch: jeder physische [[Server]] hat genau eine aufgabe -> [[Monolithisches Betriebssystem]]
- Löst dieses Problem der [[Traditionelle IT Infrastruktur|traditionellen IT Infrastruktur]]
- Löst auch das Problem des Overprovisioning
## Arten
- [[Application Virtualization]]
- [[Desktop Virtualization]]
- [[Hardware Virtualization]]
	- Storage: [[NAS]] und [[SAN]]
- [[Netzwerk Virtualization]]

## Funktionsweise
- Einfügen eines "-1"-ten [[x86 Rings of Protection|Ring]] "VMX[^1] root" vor Ring 0 => hier ist [[Hypervisor]] angesiedelt
- neue [[Instruktion|Instruktionen]] für das Verwalten und überwachen von [[Virtual Machine|VM]]
- neue Funktionen:
	- [[Interrupt]] mapping => Interrupts direkt an die [[Virtual Machine|VM]] schicken
	- [[IO]] assignment => Geräte direct an der [[Virtual Machine|VM]] 

### Ablauf
1. `VMXON` aktiviert VMX ROOT mode
2. [[Hypervisor]] startet in VMX ROOT
3. [[Hypervisor]] kann mit `VMLAUNCH` und `VMRESUME`zwischen verschiedenen [[Virtual Machine|VMs]] wechseln
4. `VMXOFF` beendet VMX ROOT mode

> [!hint] Ähnlich zu [[Prozess Scheduler|Process Scheduling]] -> [[Preemptive Strategien|präventives Scheduling]] von Gastsystemen.

![[Pasted image 20250505102515.png]]

[^1]: Virtual Machine Extension
	
