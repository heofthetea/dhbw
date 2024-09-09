> Deswegen sind [[Heap|Heaps]] so effizient

- [[Array]] wird der Breite des [[Baum|Baums]] nach von vorne nach hinten in Array gescrhieben
![[Pasted image 20240628103617.png]]
> [!note] Wir malen Bäume, und meinen Arrays
### Finden der [[Kindknoten]] im Array
- Sei $i_{E}$ Der Index eines [[Knoten]] $E$
- Dann sind die Indizes der [[Kindknoten]]:
	- $i_{K_{1}} = 2\cdot i_{E} + 1$ 
	- $i_{K_{1}} = 2\cdot i_{E} + 2$ 

### Finden der [[Elternknoten]] im Array
$$\left\lfloor\frac{i_{K} - 1}{2}\right\rfloor$$