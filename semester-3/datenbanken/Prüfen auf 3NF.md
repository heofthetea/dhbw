#klausurrelevant

$$R: \set{[A, B, C, D, E, F]}$$
$$F = \begin{cases}AB \rightarrow CDEF \\ C \rightarrow B \\ D \rightarrow F \\ F \rightarrow E\end{cases}$$

## Schlüsselkandidaten finden
- [[Schlüsselkandidat]]: 
	- $K_{1} = \set{A, B}$
	- $K_{2} = \set{A, C}$ -> [[Armstrong Axiome]] !!!!!
- teilweise [[Funktionale Abhängigkeit|FAs]]: keine

## Überprüfung auf [[3NF]]

> [!warning] Es geht hier nur um [[Schlüsselkandidat|Schlüsselkandidaten]], nicht den Schlüssel => ob $K_{1}$ oder $K_{2}$ gewählt wird **ist egal**!!

| $X$ | $\alpha$ | [[Superschlüssel]] | [[Primattribut]] |
| --- | -------- | ------------------ | ---------------- |
| AB  | C        | ✅                  | ✅                |
|     | D        | ✅                  | ❌                |
|     | E        | ✅                  | ❌                |
|     | F        | ✅                  | ❌                |
| C   | B        | ❌                  | ✅                |
| D   | F        | ❌                  | ❌                |
| F   | E        | ❌                  | ❌                |

## Auslagern
- $R_{1} = \set{[\underline{D}, F]}$
- $R_{2} = \set{[\underline{F}, E]}$