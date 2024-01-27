> J steht für "jump"
> K steht für "Kill"
> --> ACTUALLY: Nobody fucking knows, these inputs are just random xd

Im wesentlichen eine _Erweiterung_ des [[T-Flipflop (Toggle-FF)|T-Flipflops]]:
- Eingänge steuern, ob Toggle ermöglicht wird
- $J = K = 1\Leftrightarrow$ [[T-Flipflop (Toggle-FF)|T-FF]] 

_Vorteil_:
- [[Verbotener Fall]] wird durch Invertierung gelöst

### Charakteristische Gleichung
![[Charakteristische Gleichungen#JK-Flipflop]]
### Schaltsymbol
![[jk_ff_symbol.png]]
#### Wahrheitstabelle
| K | J | $Q_{1_{n}}$ |
| ---- | ---- | ---- |
| 0 | 0 | $Q_{1_{n-1}}$ |
| 0 | 1 | 1 |
| 1 | 0 | 0 |
| 1 | 1 | $\lnot Q_{1_{n-1}}$ |

### Aufbau
![[jk_ff_aufbau.png]]

[[Speicherfall]]: trivial
[[Verbotener Fall]]: wird gehandlet, indem $Q_{1}$ invertiert wird
_Kill und Jump_: Abusen Speicherfall, um gewünschten wert an $Q_{1}$ zu erzeugen

**Jump**:
1. $Q_{1_{n-1}} = 0$ --> $Q_{1} = \lnot Q_{1_{n-1}} \land J = 1 \land 1 = 1$ ==> SET
2. $Q_{1_{n-1}} = 1$ --> $Q_{1} = \lnot Q_{1_{n-1}} \land J = 0 \land 1 = 0$ 
	- Aber: $K = 0 \rightarrow R = 0$ --> [[Speicherfall]] 
	- --> $Q_{1} = Q_{1_{n-1}} = 1$
**Kill**: Herleitung analog zu Jump
