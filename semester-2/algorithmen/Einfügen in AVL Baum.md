1. [[Einfügen in BST]] wie gewöhnlich
2. durchlaufe den [[Baum]] vom neuen [[Knoten]] bis zur [[Wurzel]]
	==> nur _ein_ [[Pfad]] ist relevant
	- Passe Balance für jeden Knoten durch
3. wenn in einem [[Knoten]] $k$die Balance nicht stimmt: [[Baumrotation]] mit $k$ als [[Wurzel]] und $k -1$ (auf Pfad) als Pivot

> [!hint] Es muss maximal eine [[Doppelrotation]] durchgeführt werden!!
> Durch _einen_ Knoten kann nur an einer Stelle die [[Höhenbalance]] zerstört werden

#### Wie muss rotiert werden
- $b(k) = 2$: rechts größer ==> Linksrotation
