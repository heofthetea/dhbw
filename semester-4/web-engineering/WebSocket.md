> enables bidirectionally initiated communication between [[Client]] and [[Server]]

[[Broadcast]], [[HTTP]]

- specified in [[RFC]] 6455
- One central [[Server]] exposes a [[WebSocket]]
- multiple [[Client|Clients]] can connect and subscribe to the [[WebSocket]]

### Attributes
A [[WebSocket]] is an [[Object]]  defining the following operations:
- `onOpen` - callback when connected to a socket
- `onMessage` - callback when a [[Nachricht|Message]] is received
- `onClose` - Callback when connection is closed

A [[WebSocket]] usually also keeps track of all it's sessions in an [[Attribut|Attribute]]:

- `Map<identifier, Session> connections`

## Reference
- https://quarkus.io/guides/websockets-next-reference