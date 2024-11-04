![[Pasted image 20241014160301.png]]



- Startadresse für [[Chip Select|Chip]] 9: $9000_{16}$ (9 für [[Chip Select|CS]] - dann alles Nullen lol)
	- Endadresse: $9fff_{16}$
	- Anzahl der Adressen: $9FFF_{16} - 9000_{16} = FFF_{16} = 4095_{10}$

---

## Beispiel 2 ig
[[Adressierung]]
#klausurrelevant 

- Leitungen: 
	- CPU: $64K = 2^{16} \rightarrow 16$
	- $IC1 / 2: ld(2048) = 11$
	- $IC3: 4 \cdot 1K = 2 + 10 = 12$ 

### End-Adressen
- IC1/2: (2k) $0111\ 1111\ 1111 = 7FF_{16}$
- IC3: (4k) $1111\ 1111\ 1111 = FFF_{16}$

### Dekoder
![[Pasted image 20241014090330.png]]
#### IC3
[[Unvollständige Adressierung]] (ein [[Bit]] fehlt)
$CS_{3} = \lnot A15 \land A14 \land \lnot A13$ -> $3B + 12B \neq 16B$ 
Start: $010X\ 0000\ 0000\ 0000$
Adressbereich: $[4000_{16}, 5FFF_{16}]$


### Lass uns malen
![[Pasted image 20241014090744.png]]