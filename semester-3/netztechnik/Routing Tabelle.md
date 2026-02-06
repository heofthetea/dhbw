- Ziel: [[IP Adresse]] des Zielgeräts
- Next Hop: Der nächste [[Router]], an den sich gewendet werden muss
- Metrik: Wie viele [[Knoten]] muss ich besuchen, bis ich am Ziel angekommen bin?

> [!info] [[Default Gateway]] wird verwendet, wenn [[IP Adresse]] nicht explizit in der Tabelle steht.
> "Er schickt es an einen anderen Router, der es dann hoffentlich besser weiß".

![[Pasted image 20240918110331.png]]

> [!hint] Ermöglicht [[Redundanz]], falls ein Router ausfällt


## Linux
```bash
routes
```

- gibt die routing tabelle aus