### Entferne leere Regeln
vgl. [[epsilon-Abschluss]]
sei $G = (N, \Sigma, P, S)$
1. $L := \set{A \in N\ |\ A \rightarrow \epsilon \in P}$
2. Führe [[Iteration|iterativ]] zu $L$ alle [[Symbol|Symbole]] $M$ hinzu, für dass es eine [[Produktionsregel]] $M \rightarrow \beta$ mit $\beta \in L^{*}$ gibt
	3. repeat bis kein neues [[Symbol]] $M$ gefunden werd
4. Wenn auf Rechter Regelseite mindestens ein $B_{i} \in L$ vorkommt:
	1. füge eine Regel für jede [[Permutation]] hinzu, bei der mindestens ein $B_{i}$ wegfällt (= direkt durch $\epsilon$ ersetzt wird)
5. Entferne alle Regeln $A \rightarrow \epsilon$ aus $P$
6. Wenn $S \in L$ gilt: Kommt $S$ auf einer rechten Seite vor?
	1. nein: behalte $S \rightarrow \epsilon$
	2. ja: verwende _neues_ [[Startsymbol]] $S_{0}$ und füge [[Produktionsregel|Regel]] $S_{0}\rightarrow S|\epsilon$ hinzu

> [!warning] **zuerst** neue Regeln dazu nehmen, **danach** $\epsilon$-Regeln entfernen
> denn: neue Regeln können $\epsilon$-Regeln sein

## Beispiel

![[Pasted image 20241009145455.png]]

- für $S$ kommen keine neuen Regeln dazu, weil es alle Möglichkeiten schon gibt
- für $A$ kommen zwei neue Regeln hinzu
- Hier braucht man tatsächlich das neue [[Startsymbol]] $S_{0}$
