Verändern Höhenbalance eines Baumes, ohne die Eigenschaften eines [[Binary Search Tree|BST]] zu verändern
- wähle Pivot
	- Pivot wird neue [[Wurzel]] werden
- Ziehe an Baum, schmeiß einen Teilbaum an was anderes

> [!hint] For Example, see [[Löschen aus AVL-Baum]]
### Pseudo Code
```python
def rotate_left(tree, root, pivot):
	temp = pivot.left
	root, pivot.left = pivot, root
	root.right = temp #re-attach Teilbaum
```

## Rechtsrotation

![[Pasted image 20240705102524.png]]
