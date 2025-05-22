---
aliases:
  - MBR
---
> Führt das Startup des [[Betriebssystem|Betriebssystems]] durch

- passiert nach [[Physical Startup]]
- [[Booting Linux]]
- [[Booting Windows]]


### Schematischer Ablauf
#klausurrelevant 

1. [[Bootloader]] an $7c00_{16}$ laden & ausführen
2. [[Bootloader]] verschiebt sich selbst an $600_{16}$
3. [[Bootloader]] führt sich schonmal durch -> an einem gewissen Punkt(nach [[Partition Table]]), werden eventuelle nächste [[Bootloader]] geladen
4. nächster [[Bootloader]] wird an $7c00_{16}$ geladen

> [!info] Ermöglicht, dass die [[Bootloader]] nichts voneinander wissen, nur wo sie was hin schreiben müssen. Der [[Programm Counter|PC]] kann einfach immer die routine an $7c00_{16}$ aufrufen -> Weiß das ist ein [[Bootloader]]


> [!question] Wieso mehrere [[Bootloader]]? => [[Chainloader]]
> Ermöglicht mehrstufiges Laden -> z.B. erst [[Hard Drive]] entschlüsseln, danach [[Betriebssystem|OS]] laden, etc.

## Beispiel

![[05_Booten.pdf#page=15]]


