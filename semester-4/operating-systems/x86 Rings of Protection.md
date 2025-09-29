> Sicherheitsringe auf [[CPU]]-Ebene

[[Layered Architecture]]

![[Pasted image 20250317102427.png]]

- 0 & 1: [[Betriebssystem]]-Ebene (analog [[Kernel Mode]])
	- 0 = [[Kernel]]
	- 1 = [[Driver]] & [[Kernel Module]] - Festplatte etc; von [[Betriebssystem]] genutzt
- 2 & 3: Anwendungsebene - analog [[User Mode]]
	- 2 = [[Driver]] - von Software genutzt 
	- 3 = Anwendungen

> [!hint] Ring 2 & 3 verschwimmt manchmal bisschen
## Beispiel Computerspiel
- 3: Spiel will was anzeigen
- 2: Cuda/Vulkan Driver
- 1. noch ein Driver
- 0: Hardware macht Berechnungen