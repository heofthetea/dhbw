---
aliases:
  - Online Transaction Processing
---
> Kleine [[Transaktion|Transaktionen]] eines [[Operative System]]

- mostly [[CRUD]]
- arbeitet immer auf dem latest valid Datensatz

> [!hint] Modell: [[ERM]]

## Charakteristiken
- häufig in [[3NF]]
- => viele [[Join|Joins]] => slow as fuck für reads
- aber: fast for writes