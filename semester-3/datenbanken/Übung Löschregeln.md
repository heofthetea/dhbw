
> [!warning] Für [[n-m Relation|n-m Beziehungen]] **nie** [[null]] setzen!!!! (weil der [[FOREIGN KEY Constraint|Foreign Key]], der null gesetzt werden würde, ein [[PRIMARY KEY Constraint|Primärschlüssel]] ist und nicht null sein **darf**)

![[Pasted image 20250409141429.png]]


- Legende:

```mermaid
flowchart LR
	A --> B
```

- B wird gelöscht
- B referenziert A in einem [[FOREIGN KEY Constraint]]