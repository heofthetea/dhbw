[[Armstrong Axiome]]
$$R = \set{[a, b, c, d, e]}$$
$$F = \begin{cases}a \rightarrow ed \\ b \rightarrow ed \\ ab \rightarrow c \\ a \rightarrow b\end{cases}$$

- Armstrong (**Verstärkung**): $a \rightarrow b \Longrightarrow aa \rightarrow ab$
	- Da stecken [[Menge|Mengen]] dahinter: $\set{a, a} = \set{a} \Longrightarrow \set{a} \rightarrow \set{a, b} \rightarrow c$ 
### a) [[Schlüsselkandidat|Schlüsselkandidaten]]
1. $K_{1} = \set{a}$

### b) NF
- ist in [[2NF]]: Schlüssel aus nur einem Attribut

[[Prüfen auf 3NF]]:

| X   | a   | super | prim |
| --- | --- | ----- | ---- |
| a   | e   | ✅     |      |
|     | d   | ✅     |      |
|     | b   | ✅     |      |
| b   | e   | ❌     | ❌    |
|     | d   | ❌     | ❌    |
| ab  | c   | ✅     |      |
=> nicht in [[3NF]]
### c) Zerlegen
$$R_{1} = \set{\underline{a}, c, b\uparrow}$$
$$R_{2} = \set{\underline{b}, e, d}$$

### d) verlustlos/hüllentreu
#### gültig
$R_{1} \cup R_{2} = \set{a, b, c, d, e}$ ✅

#### [[Verlustlose Zerlegung|verlustlos]]
$[R_{1}] \cap [R_{2}] = \set{b}$
$\set{b} \rightarrow [R_{2}]$ ✅
#### hüllentreu
[[Hüllentreue Zerlegung]] ✅

1. $F_{[R_{1}]} = \set{a \rightarrow c, a \rightarrow b}$
2. $F_{[R_{2}]} = \set{b \rightarrow e, b \rightarrow d}$
	1.  $b \rightarrow e \land b \rightarrow d \Rightarrow b \rightarrow ed$ (Bijektivität der Zerlegung)
3. Armstrong: $a \rightarrow b \land b \rightarrow ed \Rightarrow a \rightarrow ed$ ([[transitiv|Transitivität]])
4. auch trivial: $a \rightarrow c \land b \rightarrow c \Rightarrow ab \rightarrow c$ ([[Superschlüssel]])


zu 4. ([[Turing Machine]]):
![[Pasted image 20241112155141.png]]
