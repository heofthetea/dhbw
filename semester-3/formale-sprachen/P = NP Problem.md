[[TIME und NTIME]]

$$P = \bigcup\limits_{p\ ist\ Polynom\ in\ n}TIME(p(n))$$
- Ein Problem ist in $P$, wenn es eine [[Determinismus|deterministische]] [[Turing Machine]] gibt, die das Problem in [[Polynomielle Laufzeit|polynomieller Laufzeit]] entscheiden kann. Ein $p \in P$ heißt <span style="color:rgb(245, 154, 35)">tractable</span> (= effizient lösbar).
$$NP = \bigcup\limits_{p\ ist\ Polynom\ in\ n}NTIME(p(n))$$
- Ein Problem ist in $NP$, wenn es eine **nichtdeterministische** [[Turing Machine]] gibt, die das Problem in [[Polynomielle Laufzeit|polynomieller Laufzeit]] entscheiden kann. Ein $p \in NP$ heißt <span style="color:rgb(245, 154, 35)">intractable</span>.

> [!warning] Das $N$ steht **nicht** für "nicht polynomiell".
> Durch die [[Simulation NTM durch DTM|Simulation der NTM durch eine DTM]] werden diese Probleme dann [[exponentielle Laufzeit|exponentiell]].

> [!info] Viele Probleme sind weder in $P$ noch in $NP$.

## Das Problem
Aus [[TIME und NTIME]] folgt:
$$P \subset NP$$
Ist $P$ eine **echte** [[Teilmenge]], oder gleich mächtig wie $NP$?

