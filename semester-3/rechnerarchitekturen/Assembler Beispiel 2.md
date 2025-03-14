[[Assemblersprache]], [[Aufbau eines Assemblerprogramms]]

```asm
name Test1; Test=Dateiname

; Beschreibung

K1  EQU 5
	MOV A, K1
	CLR A
	MOV A, #K1
ende: NOP
	JMP ende
END
```

- wieder [[Endlosschleife]] am Ende, um zu verhindern, dass irgendwas als nächstes Eingelesen wird
1. K1 wird mit 5 deklariert
2. A wird mit _dem, was an der Adresse 5 steht_, belegt
3. A wird gecleared
4. A wird mit dem _Zahlenwert_ $5$ belegt