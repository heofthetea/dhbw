[[Message Queue]]

```mermaid
flowchart LR

a["X happens"] --"emits E"--> b[trigger] --"starts"--> c["process 1"]
b --"starts"--> d["process 2"]
```

- X is a "significant change to a system"