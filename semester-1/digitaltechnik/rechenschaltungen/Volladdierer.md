> addiert _3_ Binärziffern


> [!hint] [[Komplexität|Laufzeit]]
> - als Elementarschaltung: $2\Delta T$
> - als aufbau aus [[Halbaddierer]]: $4 - 5 \Delta T$
### Schaltsymbol
![[Pasted image 20240205155521.png]]
- _CI_ = Carry In
- _CO_ = Carry Out
### Funktionsgleichungen
| CI | B | A |  | CO | Z |
| ---- | ---- | ---- | ---- | ---- | ---- |
| 0 | 0 | 0 |  | 0 | 0 |
| 0 | 0 | 1 |  | 0 | 1 |
| 0 | 1 | 0 |  | 0 | 1 |
| 0 | 1 | 1 |  | 1 | 0 |
| 1 | 0 | 0 |  | 0 | 1 |
| 1 | 0 | 1 |  | 1 | 0 |
| 1 | 1 | 0 |  | 1 | 0 |
| 1 | 1 | 1 |  | 1 | 1 |
--> _Funktionsgleichungen_ nach KV-Diagramm Vereinfachung:

$Z = A \lnot B \lnot C \lor \lnot AB\lnot C \lor \lnot A \lnot BC \lor ABC$ 
$Ü = AB \lor BC \lor AC$ 

### Aufbau
- _Prinzip_: Aufbau aus _zwei_ [[Halbaddierer|Halbaddieren]] und einem ODER-Glied

![[Pasted image 20240205160044.png]]
