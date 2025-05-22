> [[Binary Search Tree]] ohne Worst Case Laufzeiten

> [!hint] Wird z.B. benutzt für die interne Indexierung von [[Datenbank|Relationalen Datenbanken]].

[[Binary Search Tree]] kann entarten --> Entspricht [[Liste]]
Idee: [[Höhenbalance]] (Höhenbalance)

- ist immer ein [[Binary Search Tree]] (nicht anders herum!!)
- Jeder [[Knoten]] ist zusätzlich mit einer Balance beschriftet:
	- $b(K) = height(K.right) - height(K.left)$ ("rechts minus links")
- ist nur korrekter [[AVL Baum]], wenn für jeden [[Knoten]] gilt; $b(k) \in \set{-1, 0, 1}$ 

> [!hint] Höhe eines [[AVL Baum|AVL Baums]] ist immer [[Logarithmus|logarithmisch]]


