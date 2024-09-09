[[Binary Search Tree]]
auf jeden Fall erstmal [[Suchen auf BST|Suchen]]
1. Kein [[Kindknoten]]: einfach löschen
2. ein [[Kindknoten]]: ersetze [[Elternknoten|Parent]] durch [[Kindknoten|Kind]]
3. zwei [[Kindknoten]]: ersetze [[Knoten]] durch <span style="color:rgb(245, 154, 35)">größten</span> [[Knoten]] im linken Teilbaum (= Ersatzknoten)[^1]


## Komplexität
[[Complexity]]
man muss nur suchen --> [[Logarithmische Laufzeit]] (average case)




[^1]: kleinstes Element des rechten Teilbaums geht auch, aber ist in Klausur  nicht erwünscht