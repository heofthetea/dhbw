> Virtualisierung von [[IO]] [[Device|devices]]

## 1. [[Emulation]]
- meistens ausreichend
- wird meistens gemacht

## 2. Full Device Passthrough
- [[Driver]] läuft in [[Virtual Machine|VM]]
- das [[Device]] wird 1:1 übergeben -> [[Virtual Machine|VM]] ist zuständig für managem

> [!warning] Probleme - keine Live migration mehr (man ist an Hardware gebunden)

![[Pasted image 20251107085122.png]]

## 3. Single-root/IO virtualization