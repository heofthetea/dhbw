- Jede [[Reguläre Sprache]] $L$ wird von einem [[Endlicher Automat|endlichen Automaten]] erkannt
- Wenn $L$ beliebig lange Wörter enthält, muss $A_{L}$ einen [[Zyklus]] enthalten
- Wenn $A_{L}$ einen Zyklus enthält, kann dieser _beliebig_ oft durchlaufen werden (ohne Einfluss auf die Akzeptanz)


## Formal
Sei $L$ eine [[Reguläre Sprache]].
Dann gibt es ein $k \in \mathbb{N}^{\geq 1}$, so dass für jedes [[Wort]] $s \in L$ mit $|s| \geq k$ gilt:
1. $\exists_{u, v, w \in \Sigma^{*}}(s = u\cdot v \cdot w)$ -> $s$ besteht aus Prolog, [[Zyklus]] und Epilog
2. $v \neq \epsilon$ -> [[Zyklus]] hat mindestens die Länge $1$
3. $|u \cdot v| \leq k$ -> Prolog und Zyklus haben zusammen höchstens die Länge $k$
4. $\forall_{h\in \mathbb{N}}(u\cdot v^{h}\cdot w \in L)$  -> eine _beliebige_ Anzahl an [[Zyklus]]-Durchläufen erzeugt ein [[Wort]] der Sprache $L$.

> [!hint] $k \leq |Q|$ 
## Beispiel Pumping-Automat
![[Pasted image 20241002132943.png]]