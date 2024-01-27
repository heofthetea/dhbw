## Aufgabenstellung
![[A5 Schach.pdf]]
#### python implementation because i hate c
[[knights.py]]

input: koordinates
output: chess board with  "after which move the knight is where"
(also output: the move)

==> backtracking
Optimizing strategy: Prioritize squares with _less_ opportunities to jump forward (Warnsdorf)
-->mainly abuses list inserting syntax


#### implementation in c
[[knights.c]]
Literally just a translation of the python code
--> "Hellmich-strategy": forcefully construct tools where needed