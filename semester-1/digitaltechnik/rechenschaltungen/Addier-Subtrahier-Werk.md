![[Pasted image 20240205171154.png]]
- durch XORs wird entschieden, ob Subtrahend Summand wird
	- je nachdem wird Komplement gebildet
_Idee_: for some fucking reason????????? - Bei Steuerleitung invertieren

- statt $XOR$s $AND$s: Information wird _nur_ weitergeleitet, wenn $S = 1$ ist
	==> ansonsten liegen nur 0 an -->[[Neutrales]] 

### Steuerschaltung

| S | B | Expected Output X |
| ---- | ---- | ---- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |
==>$X = S \oplus B$  