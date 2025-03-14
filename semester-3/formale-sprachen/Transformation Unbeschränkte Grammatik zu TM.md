[[Unbeschränkte Grammatik]], [[k-Band Turing Machine]]

> [!hint] Da [[Grammatik]] inherently nichtdeterministisch ist, wird die [[Turing Machine]] das auch
> 

- Band 1 speichert Eingabewort $w$
- Band 2 simuliert von [[Startsymbol]] ausgehende [[Ableitung (Sprache)|Ableitungen]] gemäß [[Produktionsregel|Produktionsregeln]]

> [!info] Wenn Band 1 gleich Band 2 ist, konnte das [[Wort]] durch die [[Grammatik]] erzeugt werden.


## Ablauf
1. wähle Poition $p$ auf Band $2$
2. wenn das auf $p$ beginnende [[Wort]] zu einer [[Produktionsregel]] $\alpha \rightarrow \beta$ passt
	1. verschiebe Bandinhalt wenn nötig
	2. ersetze $\alpha$ durch $\beta$ 
3. vergleiche Band 1 und 2
	1. wenn gleicher Inhalt: gehe in akzeptierende Stopkonfiguration
4. repeat