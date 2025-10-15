---
aliases:
  - Schichtenarchitektur
---
> Architektur wird in Schichten aufgeteilt - jede Schicht kommuniziert nur mit der tieferliegenden

- Vorteil: einzelne Schichten können einfach ausgetauscht werden

### Beispiele
- [[OSI-7-Schichten Modell]]
- [[Controller-Service-Repository Architecture]]

# Networking
- Jede Ebene packt einen Header an die Daten 
	- beim Empfänger werden diese Header nach und nach wieder verarbeitet ([[semester-2/algorithmen/Stack#pop|pop]])
> [!hint]- Wozu?
> Funktionen zuordnen, Aufgaben zuteilen
## Interaktion zwischen Schichten
[[SAP]]
- ICI: Information, was die Schicht zu tun hat ("Steuerinformation")
- [[PCI]]: Protokoll - Damit weiß andere Seite, was gerade gemacht wird
	- wird von **PDU** - Protocol Document? Unit - gemacht
- IDU: macht zeug mit [[SAP]] von niederer Schicht
![[Pasted image 20240918094645.png]]
