### Libraries

[[Library Betriebssysteme Basics]]
[[Library Virtual Memory Management]]
[[Library Prozesse]]

### misc
- [[CPUs are fast]]

### Klausurvorbereitung
- [[TINF17B_2018_Klausur.pdf]]
- [[TINF17B_2018_Nachklausur.pdf]]
- [[TINF18B_2019_Klausur.pdf]]
- [[TINF18B_2019_Klausur.pdf]]
## 1. Basics

[[Betriebssystem]]
[[Betriebssystem im Rechnersystem]]

[[Arten von Betriebssystemen]]
[[Geschichte der Betriebssysteme]]

[[UNIX]]
[[Linux]]

### Architekturen

[[Monolithisches Betriebssystem]]
[[Geschichtettes Betriebssystem]]
[[Mikroarchitektur]]
=>[[Modulares Betriebssystem]]

## 2. Speicherverwaltung

[[Speicherverwaltung]]
[[RAM]]

- [[Program Heap]] & ([[Call Stack]])
- [[Virtual Memory Management]]
- [[MMU]]
	 - [[MMU Funktionsweise]]
- [[Paging]]
	- [[Segmentation Fault]]
	- [[Demand Paging]]
- [[Übung MMU]]
- [[Swapping]]
	- [[Swapping Strategien]]
- [[Page Sharing]]
- [[Address Space Layout Randomization]]

## 3. Prozesse

[[03_Prozesse.pdf]]

- [[Prozess]]
  - [[Prozesszustand]]
  - [[Prozess Scheduler]]
    - [[Prozess Blocking]]
    - [[Preemptive Strategien]]
    - [[Non-preemptive Strategien]]
    - [[Prozess Scheduling in Praxis]]
    - [[Übung Scheduling]]
  - [[Ausführungsmodi]]
    - [[User Mode]]
    - [[Kernel Mode]]
    - [[x86 Rings of Protection]]
  - [[Deadlock]]
    - [[Handlung gegen Deadlocks]]
    - [[Deadlocks verhindern]]
	- [[Resource Allocation Graph]]
		- [[Übung Resource Allocation Graph]]
	- [[Banker's Algorithm]]
    - [[Deadlocks beheben]]
- [[ps]]
- [[Interrupt]]
	- [[Synchroner Interrupt]]
	- [[APIC]]
- [[Prozesskommunikation]] 
	- [[Speicherbasierte Prozesskommunikation]]
	- [[Message-based Kommunikation]]
		- [[Message Queue]]
		- [[Pipe]]
- [[Prozesssynchronisierung]]
	- [[Kritischer Abschnitt]]
		- [[Unterbrechungssperre]]
		- [[Test-Set Instruktion]]
		- [[Semaphor]]
		- [[Synchronisation - Monitor]]
		- [[Synchronisation über Nachrichten]]

## 4 Multitasking
[[04_Multitasking.pdf]]

- [[Ziele Multitasking]]
- [[Multitasking]]
- [[Multithreading]]
- [[Hyperthreading]]
- [[Forking]]
	- [[Forking Synchronisierung]]
	- [[Exit Status]]