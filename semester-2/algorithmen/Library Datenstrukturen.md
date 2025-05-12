[[Library Graphen]]

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
- [[Löschen aus BST]]: Abhängig davon, wo der [[Knoten]] liegt --> worst case (2 Kinder) $\in \mathcal{O}(log\, n)$, ansonsten $\in \mathcal{O}(1)$
	1. [[Blatt]]: simply yeet
	2. ein [[Kindknoten|Kind]]: Ersetze [[Knoten]] durch Kind
	3. zwei [[Kindknoten|Kinder]]: Ersetze [[Knoten]] durch <span style="color:rgb(245, 154, 35)">größten</span> Knoten im <span style="color:rgb(245, 154, 35)">linken</span> Teilbaum
### Baumrotationen
[[Baumrotation]]
- Operation, um die [[Höhenbalance]] eines Baums zu verändern ==> alle Eigenschaften eines [[Binary Search Tree|Suchbaums]] bleiben aber erhalten!!
- Bildlich: "einfach rüber ziehen, und Glied, das ersetzt wird, umhängen" (code: [[rotate.c]])

[[Doppelrotation]] 
- wenn Vorzeichen der [[Höhenbalance|Balancen]] von <span style="color:rgb(245, 154, 35)">Wurzel</span> und <span style="color:rgb(245, 154, 35)">Pivot</span> der [[Baumrotation|Rotation]] unterschiedlich sind
- eine Rotation zum "Vorbereiten" der eigentlichen Rotation => Danach sind die Vorzeichen gleich
	- "ich will eigentlich nach links, also muss ich davor nach rechts" 
## AVL Trees
[[AVL Baum]]
[[Binary Search Tree]] mit Anforderung an [[Höhenbalance]]
- Für jeden [[Knoten]] $K$ soll gelten: $-1 \leq depth(K.right)- depth(K.left) \leq 1$
	- wenn $-1$: <span style="color:rgb(245, 154, 35)">linker</span> Teilbaum ist tiefer
	- wenn $\ \ \ 1$: <span style="color:rgb(245, 154, 35)">rechter</span> Teilbaum ist tiefer
	- wenn $\ \ \ 0$: beide Teilbäume <span style="color:rgb(245, 154, 35)">gleich</span> tief (optimal)
	- sobald $\pm 2$: Muss durch [[Baumrotation|Rotationen]] behoben werden

> [!hint] [[Höhenbalance]] wird durch [[Baumrotation|Baumrotationen]] gewährleistet
> 

#### Operationen
> [!note] Operationen sind gleich wie auf [[Binary Search Tree|BSTs]] + [[Baumrotation|Baumrotationen]]


- [[Einfügen in AVL Baum]]
	- [[Höhenbalance]] kann nur geringfügig gestört werden ==> maximal _eine_ [[Doppelrotation]]
	1. neuen [[Knoten]] einfügen + [[Höhenbalance]] neu kalkulieren
	2. Falls $\not\in (-1, 1)$ : [[Höhenbalance]] wieder herstellen (ggf. [[Doppelrotation]] bei unterschiedlichen Vorzeichen)

> [!warning] Nach einer [[Baumrotation|Rotation]] kann aufgehört werden!
- [[Löschen aus AVL-Baum]]
	- Höhenbalance kann stark beeinträchtigt werden
	1. von gelöschtem Knoten aus [[Pfad]] zur [[Wurzel]] hoch gehen + [[Höhenbalance]] kalkulieren
	2. _für jede_ Dysbalance: [[Baumrotation|Rotieren]]

> [!warning] Beim [[Einfügen in AVL Baum|Einfügen]] muss **bis zur Wurzel durch gegangen werden!** 


## Hash Maps

### Hashing
**Idee**: wenn man für jeden möglichen [[semester-2/algorithmen/Schlüssel]] eine eigene Speicheradresse hätte, könnte man [[Konstante Laufzeit|konstant]] drauf zu greifen wie mit [[Arrays im Speicher|Arrays]], aber man hat den Overhead beim [[Operationen auf Arrays|Ein/Ausfügen]] nicht
**Problem**: Sehr speicher-ineffizient, weil 90% der [[semester-2/algorithmen/Schlüssel|Keys]] realistisch nie genutzt werden
==> **Lösung**: [[Hashing]] - "klein hacken der Keys"

---
[[Hash-Funktion]] - Transformiere großen [[semester-2/algorithmen/Schlüssel]] in einen kleineren [[semester-2/algorithmen/Schlüssel]]
- <span style="color:rgb(245, 154, 35)">Einweg</span>-Funktion (nicht rekonstruierbar) --> [[Modulo]]
- Es gehen zwangsweise Daten verloren - sollte möglichst gut streuen, um [[semester-2/algorithmen/Kollision|Kollisionen]] zu vermeiden
[[semester-2/algorithmen/Kollision]]: Passiert, wenn zwei [[semester-2/algorithmen/Schlüssel|Schlüssel]] denselben Hash-Wert haben

### Umgang mit Kollisionen

[[Chaining]]:
- Anstatt der tatsächlichen befindet sich an jedem Hash-Wert ein [[Listenanker]]
- Wenn Bereits ein Wert existiert, wird der neue einfach in die Liste geschoben
- **Problem**: Werden die [[Liste|Listen]] zu lang, geht die [[Konstante Laufzeit]] der Map verloren ==> $\Theta\left(\frac{n}{N}\right)$ 
[[Linear Probing]]:
- Wenn [[semester-2/algorithmen/Kollision]] auftritt, schiebe Element einfach wo anders hin
- Schrittweite $m$ ist für jedes Element gleich
==> [[Re-hashing]]: Schrittweite $m$ wird durch zweite [[Hash-Funktion]] (vom _Datensatz_!!) ermittelt


> [!warning]- $m$ muss [[teilerfremd]] zu $N$ sein
> Wemm Schrittgröße und Länge der [[Hash Map]] gemeinsame Teiler haben, werden in manchen Fällen nicht alle Felder getroffen
> - gilt natürlich auch für das [[Bild einer Funktion|Bild]] der [[Re-hashing|Re-Hash-Funktion]]


## Scorecard

| Operation                | [[Heap]]                  | [[Binary Search Tree\|BST]]      | [[AVL Baum]]           | [[Hash Map]]              |
| ------------------------ | ------------------------- | -------------------------------- | ---------------------- | ------------------------- |
| [[semester-2/algorithmen/Schlüssel]] finden           | $\mathcal{O}(n)$          | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ | $\mathcal{O}(1)$          |
| Element einfügen         | $\mathcal{O}(log\, n)$    | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ | $\mathcal{O}(1)$          |
| Element bedingt einfügen | $\mathcal{O}(n)$          | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ | $\mathcal{O}(1)$          |
| Element entfernen        | $\mathcal{O}(log\, n)$    | $\mathcal{O}(log\, n)$*          | $\mathcal{O}(log\, n)$ | $\mathcal{O}(1)$          |
| Sortierte Ausgabe        | $\mathcal{O}(n\ log\, n)$ | $\mathcal{O}(n)$                 | $\mathcal{O}(n)$       | $\mathcal{O}(n\ log\, n)$ |
|                          |                           | * Worst case is $\mathcal{O}(n)$ |                        |                           |

