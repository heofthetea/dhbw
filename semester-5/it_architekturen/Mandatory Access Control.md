---
aliases:
  - AppArmor
  - h
---
> Jedes [[Executable]] hat eine ACL (Access Control List)
- Gegenkonzept zu [[Discretionary Access Control]] in [[Betriebssystem]]

> [!hint] See:
> ```bash
> ls -lZ
> ```
### ACL
- Eigene [[Linux file permissions|permissions]] für verschiedene Ressourcen (files, network interfaces, etc)

> [!warning] [[Executable]] darf nur das, was explizit freigegeben ist!


> [!hint] Get ACL for file:
> ```bash
> getfacl file
> ```
