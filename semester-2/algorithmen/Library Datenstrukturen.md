## Heap
- [[Heap]] - fast vollständiger [[Binary Tree]]
- [[Heap Eigenschaften]]:
	1. Shape-Eigenschaft:
		1. vollständiger [[Baum]] bis auf [[Blatt|Blätter]] -> diese von _links_ aufgefüllt
	2. [[Ordnungsrelation]]
		1. [[Min-Heap]]: $Parent \leq Child$
		2. [[Max-Heap]]: $Parent \geq Child$
- kann Duplikate enthalten
- [[Heaps are an Array]]:
	- Baum wird von oben nach unten, links nach rechts in [[Array]] geschrieben
	- [[Wurzel]] steht an Index $0$, [[Blatt|Blätter]] am Ende
- Get Parent Element: $\left\lfloor\frac{k - 1}{2}\right\rfloor$ 
- Get Child Elements: $2k +1$; $2k + 2$

#### Operationen
> [!info] Hier wird immer von [[Max-Heap]] ausgegangen

[[Operationen auf Heaps]]
- `find_max`: [[Wurzel]] heraus suchen lol
- [[bubble down]]: Element sinkt nach unten
	- [[Kindknoten]] werden miteinander verglichen, mit größerem wird getauscht
- [[bubble up]]: Element steigt nach oben
- `remove_max`: `find_max`, Letztes Element als neue [[Wurzel]] festlegen und [[bubble down]]
- [[Heapify]]: [[Heap Eigenschaften]] wieder her stellen
	- [[bubble up]]  für jedes Element von hinten nach vorne

> [!note] Note: for [[Heap Sort]], see [[Library Sortieren#Heap Sort|Library Sortieren]]


## Binary Search Trees (BST)
[[Binary Search Tree]]
- [[Binary Tree]], bei dem für jeden [[Knoten]] $K$ gilt:
	- alle [[Knoten]] im linken Teilbaum von $K$ sind kleiner als $K$
	- alle [[Knoten]] im rechten Teilbaum von $K$ sind größer als $K$
> [!note] [[Binary Search Tree|BSTs]] dürfen keine Duplikate enthalten!

> [!warning] Ein [[Binary Search Tree|BST]] kann entarten (= jeder Knoten hat _ein_ Kind) -> ist dann äquivalent zu einer [[Liste]]

#### Operationen
- [[Suchen auf BST]]: Von [[Ordnungsrelation]] gebrauch machen - bei jedem [[Knoten]] schauen, in welche Richtung man gehen muss --> $\mathcal{O}(log\, n)$
- [[Einfügen in BST]]: Nach Element [[Suchen auf BST|suchen]] - dort, wo es sein _sollte_, einfügen --> $\mathcal{O}(log\, n)$
- [[Löschen aus BST]]: Abhängig davon, wo der [[Knoten]] liegt --> immer $\in \mathcal{O}(log\, n)$ tho
	1. [[Blatt]]: simply yeet
	2. ein [[Kindknoten|Kind]]: Ersetze [[Knoten]] durch Kind
	3. zwei [[Kindknoten|Kinder]]: Ersetze [[Knoten]] durch <span style="color:rgb(245, 154, 35)">größten</span> Knoten im <span style="color:rgb(245, 154, 35)">linken</span> Teilbaum
### Baumrotationen
[[Baumrotation]]
- Operation, um die [[Höhenbalance]] eines Baums zu verändern ==> alle Eigenschaften eines [[Binary Search Tree|Suchbaums]] bleiben aber erhalten!!
## AVL Trees
[[AVL Baum]]
[[Binary Search Tree]] mit Anforderung an [[Höhenbalance]]
- Für jeden [[Knoten]] $K$ soll gelten: $-1 \leq depth(K.right)- depth(K.left) \leq 1$
	- wenn $-1$: <span style="color:rgb(245, 154, 35)">linker</span> Teilbaum ist tiefer
	- wenn $\ \ \ 1$: <span style="color:rgb(245, 154, 35)">rechter</span> Teilbaum ist tiefer
	- wenn $\ \ \ 0$: beide Teilbäume <span style="color:rgb(245, 154, 35)">gleich</span> tief (optimal)
	- sobald $\pm 2$: Muss durch [[Baumrotation|Rotationen]] behoben werden
#todo
## Hash Maps

#todo




## Scorecard

| Operation                | [[Heap]]                  | [[Binary Search Tree\|BST]]      | [[AVL Baum]]           | [[Hash Map]] |
| ------------------------ | ------------------------- | -------------------------------- | ---------------------- | ------------ |
| [[Key]] finden           | $\mathcal{O}(n)$          | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ |              |
| Element einfügen         | $\mathcal{O}(log\, n)$    | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ |              |
| Element bedingt einfügen | $\mathcal{O}(n)$?         | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ |              |
| Element entfernen        | $\mathcal{O}(log\, n)$    | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ |              |
| Sortierte Ausgabe        | $\mathcal{O}(n\ log\, n)$ | $\mathcal{O}(n)$                 | $\mathcal{O}(n)$       |              |
|                          |                           | * Worst case is $\mathcal{O}(n)$ |                        |              |

