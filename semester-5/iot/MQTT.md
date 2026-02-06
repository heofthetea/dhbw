> [[Message Queue|Message Queuing]] Telemetry Transport

[[Rust MQTT Broker]]

- [[Layer 7]] protocol on top of [[TCP]]
- kann extended werden mit [[TLS]]

## Roles
> [!hint] Bildet ein [[Client Server Architecture|Client-Server Modell]], mit dem Broker being the server.
- [[Message Broker]]
- [[Client]]: Jedes Gerät, was sich beim [[Message Broker]] registriert

## Ablauf
- publisher/subscriver architecture -> [[Event-driven Architecture]]
- [[ACK]]
```mermaid
sequenceDiagram
    participant P as Publisher
    participant B as Broker
    participant S as Subscriber

    P->>B: CONNECT
    B->>P: CONNACK
    
    S->>B: CONNECT
    B->>S: CONNACK
    
    S->>B: SUBSCRIBE (topic)
    B->>S: SUBACK
    
    P->>B: PUBLISH (topic, message)
    B->>S: PUBLISH (topic, message)
    S->>B: PUBACK
    B->>P: PUBACK
    
    P->>B: DISCONNECT
    S->>B: DISCONNECT
```
