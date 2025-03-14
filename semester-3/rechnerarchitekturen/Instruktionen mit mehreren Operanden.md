nach Anzahl der Operanden
- 4
	- Bei jeder [[Instruktion]] wird die [[Adresse]] des nächsten Befehls mitgegeben
- 3 - Adressierung
	- [[RTL]]: `(z) <- (x) + (y)`
	- Hochsprache: `z = x + y`
	- [[Assemblersprache]] `ADD x,y,z` 
	- [[Instruktion|Maschinensprache]] `[op | x | y | z]`
- 2 - überdeckte Adressierung
	- `(z) <- (z) + (x)`
	- `z += x`
	- `ADD z,x`
	- `[op | z | x]`
- 1 - [[Akkumulator]] 
	- `(A)` fest mit `op` verknüpft (implizite Adressierung)
	- `(A) <- (A) + x`
	- `A = A + x`
	- `ADD A,x`
	- `[op | x]`
- 0 - [[Stack Machine]]

> [!hint] [[CPU|Prozessor]]-Zuordnung (meist) nicht eindeutig?
> z.B. [[8051 Architektur|8051]] zählt sich zu [[Akkumulator]] - aber:
> `ADD A,x` - 1 Adresse
> `MUL A B` - 0 Adressen
> [[RISC]] hat meistens $3$ Aressen

