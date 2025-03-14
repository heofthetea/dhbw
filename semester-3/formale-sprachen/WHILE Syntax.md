[[Kontextfreie Grammatik]], [[Syntax]]

Die Syntax von [[WHILE Programm|WHILE Programmen]] ist wie folgt induktiv definiert:
1. Wertzuweisung: Für $i, j, c \in \mathbb{N}$ $$x_{i} := x_{j} + c\ \ \ und\ \ \ x_{i}:= x_{j} \dot{-} c$$
2. Komposition: Sind $P_{1}$ und $P_{2}$ WHILE-Programme, dann auch $$P_{1}; P_{2}$$
3. While-Loop: Ist $P$ ein WHILE-Progamm und $i \in \mathbb{N}$, dann auch $$\textbf{while}\ x_{i}\ \textbf{do}\ P\ \textbf{end}$$
> [!warning] Um $x_{i} = x_{j}$ darzustellen, muss $x_{i} = x_{j} + 0$ genutzt werden!

