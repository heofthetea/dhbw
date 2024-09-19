
> [!hint] Nicht feasible mit mehr als 4 Bit --> [[#Blockbildung]]




#todo !important!!!


## Blockbildung
- [[Ripple-Carry-Adder]] aus 4-Bit-addierern 
- $2B+2B \rightarrow 2B + C_{out}$


`(R4|R5) <- (R2|R1) + (R4|R3)`
`(Low Byte) <- (Low Byte) + (Low Byte)`
`(High Byte) <- (High Byte) + (High Byte) + (Carry_`

### in Assembler
- zwei $2$ Byte Zahleln addieren
```asm
MOV A, R1;
ADD A, R3;
MOV R5, A;

MOV A,R2;
ADDC A,R4;
MOV R6,A
```