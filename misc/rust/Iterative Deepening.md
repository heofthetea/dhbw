> Continuously search do [[Alpha-Beta-Pruning|alpha-beta-search]] one move deeper in each step

## Advantages
1. solid time management -> we can cut everything off at some point
2. move ordering -> subsequent searches can be made more efficient due to earlier pruning

> [!question]- How does 2. come about?
> 1. if good moves remain good, they will result in a **high evaluation** on left [[Pfad|Branches]]
> 2. => this leads to high $\alpha$ values on the root level
> 3. high alpha values are more likely to be undercut by low $\beta$ values in later branches -> cutting those in the tree (see [[Alpha-Beta-Pruning#Beispiel aus https //www.youtube.com/watch?v=l-hh51ncgDI&t=221s|Alpha-Beta-Pruning > Beispiel aus Video]])


## Current version in thunfisch
- always looks at all moves -> no pruning for root moves
```python
def iterative_deepening(board, max_depth: int):
	best_local = (None, -INFINITY)
	for depth in max_depth:
		best_moves = []
		for mv in board.moves():
			best_eval = alpha_beta(board.make(mv), -∞, +∞, depth, player)
			best_move.push((mv, best_eval))
		best_local = max_by_eval(best_local, max_by_eval(best_moves))
	
```