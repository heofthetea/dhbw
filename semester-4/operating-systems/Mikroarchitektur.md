[[Betriebssystem]], [[Client Server Architecture]]


- Funktionalität wird außerhalb des [[Kernel]] ausgelagert
- [[Kernel]] verwaltet Kommunikation zwischen Client und Server
	- Einzelne [[Driver]] können untereinander über [[System Call]] oder [[Loopback]] ([[HTTP]]) kommunizieren (vgl. [[Docker]] ig)
	- [[Kernel]] gibt Aufgaben an die [[Driver]] ab