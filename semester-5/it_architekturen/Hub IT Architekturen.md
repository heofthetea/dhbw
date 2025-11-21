### pdf
- [[ITA_10_Einfuehrung_2025.10.pdf]]
- [[ITA_20_Servervirtualisierung_2025.10.pdf]]
- [[ITA_30_Storage_2025.11.pdf]]
- [[ITA_31_Storage_2025.11.pdf]]
- [[ITA_40_Clusterarchitekturen_2025.11.pdf]]
- [[ITA_42_ScaleOut_2025.11.pdf]]\

### Prüfungsleistung
- Case Study über _fiktive_ Firma
- Dreiergruppen -> maybe more
- jede Gruppe macht ein Teilthema davon
- Dozenten sind "IT-Leiter", wir müssen qualified pitch als Referat machen
- [[IT Architekturen Case Study]]

## Intro
- [[Enterprise Architektur]]
- [[Anwendungs-Architektur]]
- [[IT Architektur Analogie Stadtbau]]
- [[Open Group Architecture Framework]]
- [[LeanIX Metamodell]]
- [[Architektur Methoden TOGAF]]
	- [[nichtfunktionale Anforderungen]]
		- [[Availability]]
	- [[Architecture Definition]]
- [[Beispiel IT Architekturen intro]]
	- [[IT System]]

### Dynamische IT Infrastrukturen
- [[Traditionelle IT Infrastruktur]]
- [[Entwicklungsstufen einer Dynamischen IT Infrastruktur]]
	- [[Harmonisierung und Konsolidierung]]
	- [[Virtualisierung]]
	- [[Automation]]
	- [[Hub Cloud Computing]]
- [[Provisioning eines neuen Servers]]

### Cloud
- [[IaaS]]
- [[PaaS]]
- [[Cloud Migration]]

## Server Virtualisierung
- [[ITA_20_Servervirtualisierung_2025.10.pdf]]
- [[Linux Hardware Inspection Comands]]
- [[Proxmox]]

### Partitioning
- [[Hardware Partitioning]]
- [[Logical Partitioning]]
- [[Hypervisor]]
- [[Containerization]]

### Containerization
- [[Containerization]]
	- [[Kernel Namespace]]
	- [[cgroup]]
- [[Discretionary Access Control]]
	- [[Mandatory Access Control]]
- [[Kubernetes]]
	- [[Kubernetes Pod]]
	- [[K8s Storage]]

### x86 Virtualisierung
- Literatur: [[virt_book.pdf]]
- [[Virtualisierung]]
- [[Hypervisor]]
- [[x86 Rings of Protection]]
	- [[Arten von Instruktionen]]
- [[Paravirtualisierung]]
- [[VMX root mode]]
- [[Translation Lookaside Buffer]] für memory virt
- [[Virtual Memory Management]]
- [[IO Virtualization]]

## Zentralisierter Storage
- [[SSD]]
- Arten
	- [[File IO]]
	- [[Block IO]]
	- [[Object Storage]]
- [[Network Filesystem]]
	- [[NAS]]
	- [[SAN]]
- [[iSCSI]]
	- [[SCSI]]
	- [[NVMe]]

### Raid
- [[RAID]]
	- [[RAID 0]]
	- [[RAID 1]]
	- [[RAID 5]]
	- [[RAID 6]]
- [[Write-Once-Read-Many]]
- [[Speicher Virtualization|Software-Defined Storage]]
- [[Hyperconverged Infrastructure]]

## Clusterarchitekturen
- [[Symmetric Multiprocessor System]]
- [[Horizontal Scaling]]
- [[Throw faster hardware at the problem|Vertical Scalability]]
- [[Message-based Kommunikation]] (zwischen Servern)
- [[HA Cluster]]
	- [[Split-Brain Problem]]
- [[HPC Cluster]]
### Scale-Out Data Centers
- [[Data Center]]
- [[PUE]]
	- [[Air Cooling]]
	- [[Water Door Cooling]]
	- [[Direct Water Cooling]]
## IT-Betrieb


---
## Kubernetes
> (the notes I added/modified while actually digging into it seperately from cloud)

- [[k8s Deployment]]
- [[Kubernetes Pod]]
- [[Service]]
	- [[Loadbalancer Service]]
- [[Kubernetes Secret]]
- [[Kubernetes ConfigMap]]

### tooling
- [[minikube]]
- [[kubectl]]
- [[Helm]]