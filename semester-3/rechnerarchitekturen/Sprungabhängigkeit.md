[[Assembler Verzweigungsbefehle]], [[Pipelining]], [[Probleme mit Pipelining]]

- In [[Pipelining|Pipeline]]: `(PC), (PC + 1), (PC + 2), ...`
- es passiert ein [[8051 JZ|Jump]] - aber: `(PC + 1)` wurde gelesen 
	- je länger die Pipeline, desto schlimmer - \#suckitintel

> [!error] `(PC + 1)` Darf auf keinen Fall ausgeführt werden!
### Beispiel

| Takt | CF       | D                        | OF       | E                                     | W        |
| ---- | -------- | ------------------------ | -------- | ------------------------------------- | -------- |
| 1    | `Inst a` |                          |          |                                       |          |
| 2    | `JZ X`   | `Inst a`                 |          |                                       |          |
| 3    | `Inst 1` | `JZ X`<br>Sprung erkannt | `Inst a` |                                       |          |
| 4    | `Inst 2` | `Inst 1`                 | `JZ X`   | `Inst a`                              |          |
| 5    | `Inst 3` | `Inst 2`                 | `Inst 1` | `JZ X`<br>Sprung passiert -> `Inst b` | `Inst a` |
| 6    | `Inst b` | `Inst 3`                 | `Inst 2` | `Inst 1`                              | `JZ X`   |


- Wenn Sprung entschieden wurde, wurden $3$ [[Instruktion|Befehle]] schon gelesen - einer hat sich sogar schon Operanden geholt
	- !! DIESE BEFEHLE DÜRFEN NICHT AUSGEFÜHRT WERDEN!!

## Abhilfe
- **wenn** [[8051 JZ|Jump]] entschieden -> einfach immer **alles** verwerfen
	- Pipeline wird verzögert (➖)
	- evtl. müssen Ergebnisse verworfen werden (➖)
	- unnütze Buszugriffe (➖)
- **wenn** [[8051 JZ|Jump]] erkannt (-> in Phase D) => **nichts neues Laden** (stall)
	- Pipeline wird _immer_ verzögert (auch wenn Sprung nicht nachgegeben wird) (➖)
	- nichts/wenig verwerfen (➕) (nur noch ein Befehl)
	- weniger Buszugriffe (weil weniger Befehle geladen) (➕)