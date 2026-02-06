> Sicherheitsringe auf [[CPU]]-Ebene

![[Pasted image 20250317102427.png]]

- 0 & 1: [[Betriebssystem]]-Ebene (analog [[Kernel Mode]])
	- 0 = [[Kernel]]
		- Alle Hardware darf benutzt werden, alle [[Register]] dürfen beschrieben werden
	- 1 = [[Driver]] & [[Kernel Module]] - Festplatte etc; von [[Betriebssystem]] genutzt
- 2 & 3: Anwendungsebene - analog [[User Mode]]
	- 2 = [[Driver]] - von Software genutzt 
	- 3 = Anwendungen

> [!warning] Das ist so nicht virtualisierbar -> [[VMX root mode]]
## Beispiel Computerspiel
- 3: Spiel will was anzeigen
- 2: Cuda/Vulkan Driver
- 1. noch ein Driver
- 0: Hardware macht Berechnungen