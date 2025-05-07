### Libraries
[[Library Betriebssysteme Basics]]
[[Library Virtual Memory Management]]
[[Library Prozesse]]
[[Library Booting]]

### misc
- [[CPUs are fast]]
- [[sleep is actually fast]]


### Klausurvorbereitung
- [[TINF17B_2018_Klausur.pdf]]
- [[TINF17B_2018_Nachklausur.pdf]]
- [[TINF18B_2019_Klausur.pdf]]

#### Übungen
- [[Prozess Scheduling mit IO]]
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
	- [[Race Condition]]
	- [[Kritischer Abschnitt]]
		- [[Unterbrechungssperre]]
		- [[Test-Set Instruktion]]
		- [[Semaphor]]
		- [[Synchronisation - Monitor]]
		- [[Synchronisation über Nachrichten]]

## 4. Multitasking
[[04_Multitasking.pdf]]

- [[Ziele Multitasking]]
- [[Multitasking]]
- [[Multithreading]]
- [[Hyperthreading]]
- [[Forking]]
	- [[Forking Synchronisierung]]
	- [[Exit Status]]
	- [[Exec]]
- [[Thread]]
	- [[Threading Use Cases]]
	- [[User-Level Thread]]
	- [[Kernel-Level Thread]]
	- [[User- vs. Kernel Thread]]
	- [[pthreads]]

## 5. Booting
- [[05_Booten.pdf]]
- [[Booting]]
	- [[Kaltstart]]
	- [[Warmstart]]
		- [[Suspend to Disk]]
		- [[Suspend to RAM]]
		- [[Suspend to RAM and Disk]]
- [[Etymologie Booting]]
- [[Physical Startup]]
	- [[BIOS]]
	- [[UEFI]]
- [[Booting Windows]]
- [[Booting Linux]]
- [[Master Boot Routine]]
	- [[Master Boot Record]]
	- [[Volume Boot Record]]
	- [[Bootloader]]
		- [[Chainloader]]
		- [[Multi-Stage Bootloader]]
	- [[PXE]]
		- [[Wake on LAN]]

## 6. Filesystem
- [[06_Dateisysteme.pdf]]
- [[File]] 
- [[Filesystem]]
	- [[Lineares Filesystem]]
	- [[Hierarchical Filesystem]]
	- [[Network Filesystem]]
	- [[Virtual Filesystem]]
- Speichermedien
	- [[Hard Drive]]
	- [[SSD]]
	- [[Flash Speicher]]
	- [[Optical Disk]]
- [[RAID]]
- [[Partition]]
	- [[Partition Table]]
		- [[CHS Format]]
	- [[Beispiel Partition Table]]
- [[Defragmentierung]]

### Arten
- [[FAT]]
- [[NTFS]]
- [[HFS]]
	- [[APFS]]
- [[Everything is a file]]
	- [[Inode]]
- [[ext4]]


## Virtualisierung
[[07_Virtualisierung.pdf]]

- [[Virtualisierung]]
	- [[Simulation]]
	- [[Emulation]]
- Arten
	- [[Application Virtualization]]
	- [[Desktop Virtualization]]
	- [[Hardware Virtualization]]
		- [[Software Assisted Virtualization]]
		- [[Hardware Assisted Virtualization]]
	- [[Netzwerk Virtualization]]
	- [[Speicher Virtualization]]
- [[SLAT]]

### Docker again
- [[chroot]]
- [[Kernel Namespace]]
- [[cgroup]]

## Shell programming
- [[08_Shellprogrammierung_I.pdf]] -> Windows CMD
- [[08_Shellprogrammierung_II.pdf]] -> Powershell
- [[08_Shellprogrammierung_III.pdf]] -> Bash
- [[Monad Manifest]]
- [[Powershell]]
- [[Bash]]
	- [[Bash Array]]
	- [[Bash for loop]]
	- [[Output redirection]]
