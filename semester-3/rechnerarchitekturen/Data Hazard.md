> [[Instruktion|Befehl]] benötigt Wert, der vom vorherigen Befehl berechnet wird - **Datenabhängigkeit**

[[Probleme mit Pipelining]], [[Pipelining]], [[8051 ADD]]

| Takt | CF          | D     | OF                                      | E                            | W                                   |
| ---- | ----------- | ----- | --------------------------------------- | ---------------------------- | ----------------------------------- |
| 1    | `CLR R1`    |       |                                         |                              |                                     |
| 2    | `ADD A, R1` | `CLR` |                                         |                              |                                     |
| 3    |             | `ADD` | `CLR`<br>R1 für CLR laden               |                              |                                     |
| 4    |             |       | `ADD`<br>R1 für ADD laden (R1 $\neq 0$) | `CLR`                        |                                     |
|      |             |       |                                         | `ADD`<br>$R1 + A \neq 0 + A$ | `CLR`<br>_jetzt_ passiert (R1) <- 0 |
=> Programm macht nicht das was es soll

## Abhilfe
- [[Steuerwerk]] weiß nach Decode alles -> kann entscheiden, ob gestallt werden muss oder nicht
- Hardware: **stall** -> `ADD` bleibt stehen
	- Zeitverlust :(
- [[Register]]-Bypassing/Feed-Forward:
	- nach R1 geschriebener Wert wird auch in der Pipeline nach vorne gegeben

> [!hint] Feed-Forwarding wird idR tatsächlich gemacht.

#### Dumme Abhilfe
- ist ein _Software_-Befehl: [[Compiler]] mach mal padding (i.e. NOP)
	- ist besser, wenn man Befehle umordnen kann -> kein Zeitverlust durch NOPs

> [!error] [[Compiler]] muss wissen, wie viele NOPs er einfügen muss -> Dafür muss er _genau_ wissen, mit welchem Prozessor er arbeitet, und wie er funktioniert!
> Bringt nichts; ist langsamer als stalling; wird in Praxis nicht gemacht lol



