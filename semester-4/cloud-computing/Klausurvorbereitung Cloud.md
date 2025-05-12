
- 1:12 pro Aufgabe lolol
- [[5 essential characteristics of the Cloud]]
- [[Cloud Service Models]] -> Wo sind Grenzen zwischen [[IaaS]], [[PaaS]] und [[SaaS]]
- Multi-Agenten Fähigkeit - warum wichtig?
- [[SLA]] und SLO - 
- OSS, BSS = Dienstleistung, Rechtliches
- [[Hybrid Cloud]]
- Systems of (Aufteilung für [[Hybrid Cloud]])
	- [[Systems of Record]]
	- [[Systems of Engagement]]
	- [[System of Insight]]

## IaaS
- [[IaaS]] -> Alle Hardware bis zu [[Hypervisor]]
- [[Data Center]]s: -> [[Service Regions]] 
	- Availability Zone: ein Server-Raum
	- [[POD]] 
	- [[IaaS physical Layout|POP]] (Point of Presence) -> [[Router]]
- Kundenspeicherung ist wichtig: Datenschutz
- Wenn die Lieferanten sagen "ich befolge die Datenschutzrichtlinien" => "ich selber mach nichts,  mit denen", der Klient soll sich damit auseinander setzen
- [[n+1 Redundancy]]
- Typ 1 und Typ 2 [[Hypervisor]]
- [[Thin Provisioning]] und Over-allocation
- [[MAPE-K-Loop]] Prinzip -> [[Automat]] der versucht, desired state zu erhalten
- [[Software-Defined]] -> was muss ich festlegen
- [[Resource Dependencies]] - beispiel dafür (z.B. um Ansible laufen zu lassen brauch ich [[SSH]])
- Unterschied [[OpenStack]] und [[Terraform]]
- Unterschied [[Terraform]] & [[Ansible]]

## Docker
(so hier muss ich dann Punkte rausholen lol)

## Kubernetes
- [[Kubernetes Cluster]]
- Kubernetes labelling
- [[Kubernetes Control Plane|Master plane]] und [[Worker node]] -> welche Management funktionen laufen üblicherweise wo?
- [[Kubernetes Objects]]
- [[Kubernetes Namespace]] vs kubernetes label
- Welche drei anwendungstypen gibt es? -> [[Stateless]], [[Stateful]], Jobs
- [[Cluster IP]]; [[Headless Service]]
- [[Service]] & [[Service Discovery]]
- [[NodePort Service]], [[Ingress]]
- [[Service-Mesh|Sidecar Pattern]]
- [[PaaS]] configuration -> was macht ein admin, was macht ein developer?
- Unterschied [[Serverless]] und [[FaaS]]
- [[Event-driven Architecture]] - was sind bedingungen?
	- Änderungen der url
	- datenbank updaten

## Microservices
- 2 factors der [[12 factor app]]
- [[CAP theorem]]
- [[CouchDB]] versioning
- Nutzung von COS
- Zugriffsindex -> [[JavaScript]]