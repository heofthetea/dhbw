- [[lineare Laufzeit]] (weil _jeder_ Knoten ausgegeben werden muss)


[[Binary Search Tree]]
```python
def print_tree(node):
	if node.left:
		print_tree(node.left)
	if node.right:
		print_tree(node.right)
	print(node)
```