[[Binärsystem]]
- ist eine 8-Bitfolge (für 8-bit [[CPU|Prozessor]] wie [[8051 Architektur|8051]])
- besteht aus 2 Teilen:
	1. Operations Code
	2. Operand: Werte/Daten bzw. Ort/[[Adresse]] der Werte

üblich: `[opCode | Operand]` ([[Instruktion]])
- opCode an MSB = "Most significant Bit"
- Anzahl der Bits variieren nach [[Instruction Set Architecture|ISA]] 

[[Instruktionen mit mehreren Operanden]]
[[Klassifizierung von Prozessoren]]

---
## Beispiel 8051
`[ 00101 | 001 ]`
- [[RTL]]: `(A) <- (A) + (R1)`
- [[Assemblersprache]]: `ADD A,R1`