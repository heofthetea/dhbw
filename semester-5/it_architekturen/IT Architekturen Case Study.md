> in 5. Vorlesung vorgestellt

6 Wochen Bearbeitungszeit

### Additional Hints
- **sinnvolle** Annahmen treffen bei nicht-eindeutigen Problemen
- externe Quellen gewollt, aber keine extensive Literaturrecherche (-> sprich paar docs, guides, etc)

### Aufbau
1. Ist Situation darstellen ~2 Seiten
2. Soll Situation beschreiben (begründeter Architekturvorschlag) ~6 Seiten


> [!hint] Lieber mehr text -> wie in SWE 1 gemacht lel
> Es sollten alle groben Gedankengänge in den Folien ersichtlich sein
## Miniwelt
- 23BD-Pharma
- Wollen eigenes Data Center bauen

### Gruppe 1
- Anforderungen an das tatsächliche Gebäude

### Gruppe 2 - Storage
- Wie wird der Storage betrieben?
- Wie kann ein Application owner das bestellen?

### Gruppe 3 - Platform
- Welche Server kaufen wir?
- Welche Specs?
- Wie machen wir [[Virtualisierung]]?
- Welche Maschinen stellenwir zu verfügung?

## Gruppe 4 - Container (was wir machen)
- Welche Plattform?
- Wie viel hardware brauchen wir?
- Wie wird's technisch umgesetzt - Kubernetes/openshift etc?

### Bewertungsmatrix
- Möglichkeiten:
	- Kubernetes (what we'll use)
	- Docker Swarm
	- OpenShift
	- vendor-specific managed platforms (AWS ECS, Azure Cloud Instances)


| Product                            | On-Premise Nutzbarkeit (KO)                 | Open-Source | Lizenzkostenfrei | Flexibilität bzgl. Betriebssysteme | Einfachkeit | On-Demand Scaling & Load Balancing          | Support                 |
| ---------------------------------- | ------------------------------------------- | ----------- | ---------------- | ---------------------------------- | ----------- | ------------------------------------------- | ----------------------- |
| Kubernetes                         | 10                                          | 10          | 10               | 10                                 | 0           | 8                                           | 3 (große community)     |
| OpenShift                          | 10                                          | 0           | 0                | 1                                  | 5           | 10                                          | 10 (enterprise supprot) |
| Docker Swarm                       | 10                                          | 10          | 10               | 8                                  | 3           | <span style="color:rgb(255, 0, 0)">X</span> | 0                       |
| Vendor-specific CaaS (eg. AWS ECS) | <span style="color:rgb(255, 0, 0)">X</span> | X           | 5                | 1                                  | 5           |                                             | ?                       |
|                                    |                                             |             |                  |                                    |             |                                             |                         |
- KO Kriterien (die die alle erfüllen):
	- on-demand horizontal scaling (citations)
	- Lifecycle Management
- OpenShift is priced "per core"/worker node - can get out of hand rather easily i suppose

> [!hint] [[Kubernetes]] can also work on [[Windows]] Server - https://kubernetes.io/docs/tasks/tools/install-kubectl-windows/ (that may be advantageous?)



### Sources
- https://k21academy.com/azure-cloud/devops/openshift-vs-kubernetes/#
- https://circleci.com/blog/docker-swarm-vs-kubernetes/
- https://kubernetes.io/docs/tasks/tools/install-kubectl-windows/
- https://kubernetes.io/docs/concepts/overview/working-with-objects/namespaces/
- https://www.redhat.com/en/resources/self-managed-openshift-subscription-guide?extIdCarryOver=true&sc_cid=701f2000001Css5AAC