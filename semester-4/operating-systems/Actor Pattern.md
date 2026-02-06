> Provide handlers to [[Thread|Threads]] 
> An abstraction around a [[Message-based Kommunikation|message-based communication]] between threads


- Thread $A$ holds a handler to Thread $B$
- if $A$ wants $B$ to do something, it calls an [[API]] method on $A$'s handle

```mermaid
sequenceDiagram

participant Caller

box Service
participant Handler
participant Aktor
end

Caller ->> Handler: start
Handler -->> Aktor: start thread
Handler -->> Caller: Reference to self
Caller ->> Handler: do_something
Handler -->> Aktor: channel send: do_something
Aktor -->> Aktor: does something
```

