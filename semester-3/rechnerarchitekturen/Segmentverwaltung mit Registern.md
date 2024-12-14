[[Segmentierung]], [[Register]], [[Leitwerk]]

### intel doing intel things
- mehr physikalischer [[Memory|Speicher]] als CPU-Adressraum
	- Adressraum: $64kb$ --> [[Register]] aus je $16$ bit
	- Speicher braucht $4$ Bit mehr als Adresse
- Ergänzendes ($16b$) [[Register]] -> [[Segment]] Register bzw. "Offset Register"

```
Physikalische Adresse = f(Segment Register, Offset Register) = (SR : OR)
```

(war früher: `(CS : IP)` = [[Programm Counter]])

> [!note] Verknüpfung `f` ist prozessorabhängig

$$f = (SR) \cdot 16 + (OR) + direct$$
- hier (nicht offizielle Notation) OR: Offset Register, SR : Segment Register
	- SR: Wählt [[Segment]]
		- ein [[Register]] für jede Segment-Art
	- OR: Wird dazu Addiert um [[Adresse]] zu finden
		- Für jede Segmentart gibt es spezielle Register, die als Offset-Register angegeben werden können:
			- IP (Instruction Pointer) -> CS
			- SP (Stack pointer) -> SS
	- direct: probably to find bitwise?

> [!hint] Die Startadresse eines [[Segment|Segments]] ist durch $16$ teilbar (Granularität von $16$ [[Byte]])

> [!warning] Mehrere `(Seg : Off)` führen zu selber physischen [[Adresse]]
> - $0000_{16} : a735_{16} \mapsto 0a735_{16}$
> - $0001_{16} : a725_{16} \mapsto 0a735_{16}$
> - [[CPU]] überprüft das nicht

![[Pasted image 20241026150509.png]]

#### ???
- phys: 20 [[Adresse|Adress]]-Leitungen, $1MB$ [[Memory|Speicher]]
- [[Register]] aus 16 Bit
	- [[Segment]] Register (CS Code, SS Stack, DS Daten, ES Extra)
	- Offset [[Register]] ([[Instruktion|Instruction]] [[Pointer]], Base Register, Index Register, Stack Pointer)
- Darstellung: `(Segment Register : Offset Register)`
	- z.B.: `(CS : IP)` $\hat{=}$ [[Programm Counter]] 
	- Enthält jeweils den Wert an diesem Register - hat man mal auf Blue Screens gesehen lol
