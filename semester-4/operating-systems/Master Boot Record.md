---
aliases:
  - MBR
---
> [[Docker Image|Image]] der [[Master Boot Routine]]

- ersten 512 [[Byte]] auf der [[Hard Drive|Festplatte]]
	1. [[Master Boot Routine]]
	2. [[Partition Table]]
	3. Magic Number => Bootsector [[Function Signature|Signatur]] ($x55AA$) #klausurrelevant 


> [!warning] Ist die Bootsector Signature **nicht** `x55AA`, ist es **keine** [[Master Boot Routine|Boot Routine]]!!! #klausurrelevant 

> [!info] Nachteil: Nur 4 [[Partition|partitionen]] unterstützt; auch von der Größe her limitiert.


#todo übernehmen aus Cybersec 

![[Pasted image 20250414102334.png]]
