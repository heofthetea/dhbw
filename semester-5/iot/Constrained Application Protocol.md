---
aliases:
  - CoAP
---
> [[Layer 7|Application Layer]] Protocol
> Request/Response oriented

> [!hint] Builds on top of [[UDP]]

- speziell ausgelegt für constrainte Knoten (i.e. low-power [[IoT]] stuff)
- stark angelehnt an [[HTTP]]

```mermaid
sequenceDiagram
participant CoAP Server 1
participant Client
participant CoAP Server 2

Client -->> CoAP Server 1: GET /nest_bedroom_temp: 21
CoAP Server 1 -->> Client: 20 °C
Client -->> CoAP Server 2: POST /nest_bedroom_temp
CoAP Server 2 -->> CoAP Server 2: set temp
```