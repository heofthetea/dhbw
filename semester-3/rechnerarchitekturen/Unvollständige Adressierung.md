> nicht alle Adressleitungen werden ausgewerted

[[Adressierung]]

- Bsp: nur 3 aus 4: z.B. $CS = A15 \land \lnot A14 \land \lnot A13$ --> $A12$ fehlt
- You might ask - why the FOQ?????? Because corporate greed


> [!hint] Man kann auf eine Adresse (bsp. $8010_{16}$) schreiben, und an einer anderen Stelle ($9010_{16}$) lesen

> [!warning] Keine ein-eindeutige Zuordnung (nicht [[Injektive Funktion|injektive]] [[Abbildung]]) --> vgl. [[Hashing]]


![[Pasted image 20241014084946.png]]
## Speicherzuordnung
**Start**: $100x\ 0000\ 0000\ 0000$
$\alpha$: $1000\ 0000\ 0000\ 0000\ = 8000_{16}$
$\beta$: $1001\ 0000\ 0000\ 0000 = 9000_{16}$

**Ende**: $100x\ 1111\ 1111\ 1111$
$\alpha$: $1000\ 1111\ 1111\ 1111 = 8FFF_{16}$
$\alpha$: $1001\ 1111\ 1111\ 1111 = 9FFF_{16}$
