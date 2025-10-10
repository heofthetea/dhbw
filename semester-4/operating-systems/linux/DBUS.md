> Desktop [[BUS-System|Bus]]

-  Interface between userspace und kernel space
- Serves the [[Prozesskommunikation]]

> [!hint] Configured in `/usr/share/dbus-1/`

- somewhat like a [[Message Queue]], but messages are [[Prozess Blocking|blocking]] and consumed immediately -> [[BUS-System]]

[[Kernel]]

```mermaid
graph TB
    Apps["Applications<br/>(VS Code, Obsidian, Firefox)"]
    DBC["D-Bus Client Libraries<br/>(libdbus, GDBus, QtDBus)"]
    DBD["D-Bus Daemon<br/>(dbus-daemon)"]
    Kernel["Linux Kernel<br/>(Unix sockets)"]
    Services["Services<br/>(Nautilus, NetworkManager, systemd)"]
    
    Apps --> DBC
    DBC --> DBD
    DBD --> Kernel
    Services --> DBC
    
    style DBD fill:#f9f,stroke:#333,stroke-width:2px
```