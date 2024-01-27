basiert auf [[D-Flipflop (Delay-FF)]]
--> Erweiterung durch _Vorbereitungseingang V_

_V = 1_: Funktion analog zu [[D-Flipflop (Delay-FF)]]
_V = 0_: [[Speicherfall]] / do nothing
### Schaltsymbol
![[dv_ff.png]]

| $(t_{n})$ |  | $(t_{n+1})$ |
| ---- | ---- | ---- |
| $D$ | V | $Q_{1}$ |
| 0 | 0 | $Q_{1_{n}}$ |
| 0 | 1 | 0 |
| 1 | 0 | $Q_{t_{n}}$ |
| 1 | 1 | 1 |


