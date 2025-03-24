#klausurrelevant

1. Zerlege $F$ in einzelne [[Funktionale Abhängigkeit|Abhängigkeiten]] (durch [[Armstrong Axiome|Interferenzregel]] 4: Dekomposition)
2. Prüfe ob gilt: $X$ ist [[Superschlüssel]] **oder** $\alpha$ ist [[Primattribut|prim]] (schicke Tabelle) (technically $\alpha \in X$ müsste auch überprüft werden, aber ist hier aufgrund Trivialität weg gelassenzz)

| $X$    | $\alpha$ | $X$ ist [[Superschlüssel]] | $\alpha$ ist [[Primattribut\|prim]] |
| ------ | -------- | -------------------------- | ----------------------------------- |
| ProjNr | Bez      | ✅                          | ❌                                   |
|        | Beginn   | ✅                          | ❌                                   |
| PersNr | VN       | ❌                          | ❌                                   |
|        | NN       | ❌                          | ❌                                   |
=> Die zweite [[Funktionale Abhängigkeit|FA]] erfüllt die [[3NF]] **nicht** 

> [!question]- Mach ich die [[Prüfen auf 3NF|Prüfung auf 3NF]] vor, oder nach dem Auflösen/"Hereinziehen" von [[Relationship|Relationships]]?
> Davor. Durch das Hinzufügen eines [[Fremdschlüssel|Fremdschlüssels]] wird keine neue [[transitiv|transitive]] [[Funktionale Abhängigkeit]] mehr hinzukommen. Es ist also nur zusätzliche Information. Es danach zu machen wird aber kein falsches Ergebnis geben.

# Beispiel
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