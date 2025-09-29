> I'm actually proud of myself for figuring this one out, it was a complete mess

[[moodle-ratingallocate-mapout.excalidraw]]
## Algorithm
1. Build up [[Graph]]
	1. Connect every user $u$ to [[Source Node]] with **one** [[Kante|Edge]] $e_{u} = (s, u)$ with weight = 0
	2. Connect every choice $c$ to [[Sink Node]] $t$ with **one** [[Kante|Edge]] $e_{c} = (c, t)$ 
		1. $e_{c}.weight = 0$; $e_{c}.capacity = c.maxusers$ 
	3. For every Pair of $user \times choice$ $(u, c)$ and $\exists_{(u, c)} (u, c) \mapsto r \neq 0$ (a rating exists):
		1. add an [[Kante|edge]] $e_{uc} = (u, c)$ with $weight = -r$
2. Perform [[Dijkstras Algorithm]] (or rather Bellman-Ford, since negative edges exist) repeatedly:
	1. Try to find [[kürzester Pfad|shortest path]] from [[Source Node]] to [[Sink Node]]
	2. -> this is an [[Augmenting Path]] trying to give the **highest** rating for each student (the higher the path cost)
	3. Augment the path, which means:
		1. increase the flow of the edge $(c, t)$ 
		2. delete the other edges and create a [[Reciprocal Edge]] with the negative weight
			1. e.g.: $(u, c)_{w}$ (where $w$ is the weight) turns into $(c, u)_{-w}$
3. If no more [[Augmenting Path]] can be found: done
4. Evaluation: For each existing [[Reciprocal Edge]] $(c, u)$, assign the user to this choice : $u \mapsto c$
	1. $weight((c, u)) = r$ (da [[Reciprocal Edge]])

> [!info] It's definitely possible to formulate the problem entirely within Flow Graph theory without deleting edges and doing augmentation properly, however I couldn't be bothered 
### my specific use case
#### Axiom 1
The maximum flow must be equal to the number of users, as the total capacity of the courses needs to be greater than the number of users. 


##### Collorary 1.1
From [[#Axiom 1]] and $\forall_{u} \exists_{c}(u,c) \in E$ and $\forall_{u}!\exists_{e \in E}\ e = (s, u)$
it follows that $\exists_{u}\forall_{c}(|\set{(u, c)\ |\ (u, c) \in E}| = 1) \Longrightarrow u \mapsto c \in distribution$
## Example stuff
```python
# id => capacity
choices = {
	1: 2,
	2: 2
}

# (user_id, choiceid) -> rating
ratings = [
	{(1, 1): 5},
	{(1, 2): 3},
	{(2, 1): 5},
	{(2, 2): 2},
	{(3, 1): 2},
	{(3, 2): 0},
	{(4, 1): 4},
	{(4, 2): 4},
	{(5, 1): 3}
]

compute_distribution(choices, ratings, usercount=5)
```

### in compute_distribution
```python
# choicedata is trivial, it's just what I made of choices
choicecount = 2
source = 0
sink = 2 + 5 + 1 = 8
```

## [[Graph]] construction
- blue: users
- purple: choices
![[Pasted image 20250605234819.png]]

## Graph after Algorithm
> [!warning] I'm definitely not 100% sure. In the last step, you could've done a different heuristic choice that would've lead to 3 getting a spot... idk how this thing behaves there, but since this is irrelevant for my use case (see [[#Collorary 1.1]]), it's fine. 


![[Pasted image 20250605234912.png]]


---
## Original test code from moodle
```php
public function test_edmondskarp(): void {
	$choices = [];
	$choices[1] = new \stdClass();
	$choices[1]->maxsize = 2;
	$choices[1]->id = 1;
	$choices[2] = new \stdClass();
	$choices[2]->maxsize = 2;
	$choices[2]->id = 2;

	$ratings = [];
	$ratings[1] = new \stdClass();
	$ratings[1]->userid = 1;
	$ratings[1]->choiceid = 1;
	$ratings[1]->rating = 5;

	$ratings[2] = new \stdClass();
	$ratings[2]->userid = 1;
	$ratings[2]->choiceid = 2;
	$ratings[2]->rating = 3;

	$ratings[3] = new \stdClass();
	$ratings[3]->userid = 2;
	$ratings[3]->choiceid = 1;
	$ratings[3]->rating = 5;

	$ratings[4] = new \stdClass();
	$ratings[4]->userid = 2;
	$ratings[4]->choiceid = 2;
	$ratings[4]->rating = 2;

	$ratings[5] = new \stdClass();
	$ratings[5]->userid = 3;
	$ratings[5]->choiceid = 1;
	$ratings[5]->rating = 2;

	$ratings[6] = new \stdClass();
	$ratings[6]->userid = 3;
	$ratings[6]->choiceid = 2;
	$ratings[6]->rating = 0;

	$ratings[7] = new \stdClass();
	$ratings[7]->userid = 4;
	$ratings[7]->choiceid = 1;
	$ratings[7]->rating = 4;

	$ratings[8] = new \stdClass();
	$ratings[8]->userid = 4;
	$ratings[8]->choiceid = 2;
	$ratings[8]->rating = 4;

	$ratings[9] = new \stdClass();
	$ratings[9]->userid = 5;
	$ratings[9]->choiceid = 1;
	$ratings[9]->rating = 3;

	$usercount = 5;

	$solver = new \solver_edmonds_karp();
	$distribution = $solver->compute_distribution($choices, $ratings, $usercount);
	$expected = [1 => [2, 5], 2 => [4, 1]];
	$this->assertEquals($expected, $distribution);
	$this->assertEquals($solver::compute_target_function($ratings, $distribution), 15);

	// Test against Koegels solver.
	$solverkoe = new \solver_ford_fulkerson();
	$distributionkoe = $solverkoe->compute_distribution($choices, $ratings, $usercount);
	$this->assertEquals($solverkoe::compute_target_function($ratings, $distributionkoe), 15);
	$this->assertEquals($solverkoe::compute_target_function($ratings, $distributionkoe),
			$solver::compute_target_function($ratings, $distribution));
}
```