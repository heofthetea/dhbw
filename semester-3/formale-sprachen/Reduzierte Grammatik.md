
Eine [[Kontextfreie Grammatik]] $G = (N, \Sigma, P, S)$:
- $A \in N$ heißt terminierend, wenn $A \Rightarrow^{*} w$ für ein [[Wort]] $w \in \Sigma^{*}$
	- berechne von hinten nach vorne
- $A \in N$ heißt errreichbar, wenn $S \Rightarrow^{*} uAv$ für [[Wort|Wörter]]  $\set{u, v} \subset V^{*}$
	- berechne von vorne nach hinten
- $G$ ist reduziert, wenn $N$ nur aus erreichbaren und terminierenden [[Symbol|Symbolen]] besteht.

> [!warning] Entfernen von nicht-terminierenden Symbolen kann andere Symbole unerreichbar machen!!
> 1. fine und entferne **nicht terminierende** Symbole
> 2. finde und entferne **unerreichbare** Symbole

> [!hint] Liefert Lösung für [[Leerheitsproblem]]: Wenn [[Startsymbol]] nicht terminiert, ist die [[Sprache]] leer
## Algorithmen
![[Pasted image 20241009151529.png]]

## Beispiel
![[Pasted image 20241009151709.png]]
