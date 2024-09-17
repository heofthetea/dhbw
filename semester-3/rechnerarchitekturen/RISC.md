> **R**educed **I**nstruction **S**et [[Definition Computer|Computer]]
> nimmt nur die essenziell wichtigen [[Instruktion|Befehle]] aus dem [[i386]] [[Instruction Set Architecture|Instruction set]]
==> He smol, he fast, he more energy efficient

> [!hint] "Computer" müsste eigentlich "CPU" heißen - sagt nur keiner

[[Instruction Set Architecture]]

### Eigenschaften
- Reduziertes [[Instruction Set Architecture|Instruction Set]]
- in der Regel [[Instruktionen mit mehreren Operanden|3 Adress-Parameter]]
- General-Purpose [[Register]] ersetzen [[Memory]]
	- Zugriff auf [[Memory]] über nur [[LSU]] - nicht direkt
	- besondere [[Register]] - $R0$ ist `/dev/null` und `/dev/zero`
- Feste Anzahl an Bytes & fester Aufbau

> [!info] Viele Register, wenig Befehle


## Vorteile
(bzw. Verbesserungen gegenüber i386)
- einfaches [[Steuerwerk]]: fester und daraus feste Befehlslänge
	- ermöglicht Optimierung von Speicherzugriff und [[BUS-System]]

> [!info]  Fun Fact
> Intel Pentium basiert auf [[RISC]] - aber nimmt sich einen [[i386|CISC]]-Befehl, jagt ihn durch einen Decoder und führt den resultierenden [[RISC]] [[Instruktion|Befehl]] aus. RISC ist so viel besser, dass man sich diesen Decoder locker leisten kann.

## Aufbau
![[Pasted image 20240912112818.png]]