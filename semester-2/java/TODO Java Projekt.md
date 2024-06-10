[[Filmdatenbank]]

> [!note] Try and really dig into [[Testing]]
> Use "Given When Then" formula, and _really_ do _Unit_ Testing --> Do not rely on external state of file

> [!note] Try and write pure functions
> e.g. return output instead of printing directly
> - also try not to over-engineer tho lol


## [[Epic]] for Movie database
- [ ] Well enough testing is implemented
- [ ] Code is documented
- [ ] Code is clean
### Modellierung
- [ ] Erstellen von Klassen
	- [ ] Schauspieler
	- [ ] Regisseur
	- [ ] Film
- [ ] [[UML Diagram]] 

### File Handling
- [ ] Remove duplicate rows
	- [ ] Duplicate rows are verified to exist
- [ ] Load entities
	- [ ] Each type of entity is loaded into its own array
	- [ ] Each loaded array is sorted
- [ ] Remove duplicates
	- [ ] No duplicate entries exist in the final form of an array
	Can Duplicates be removed using [[Filter]]?

### Funtionality
- [ ] Write CLI
	- [ ] An entrypoint exists handling all possible CLI arguments
		- [ ] `--filmsuche="Term"`
		- [ ] `--schauspielersuche="Term"`
		- [ ] `--filmnetzwerk=id`
		- [ ] `--schauspielernetzwerk=id`
	- [ ] method parameters are extracted correctly from CLI arguments
	- [ ] For each cli parameter, an entrypoint method is called

#### Searching
[[Binary Search]] - List is sorted 
- [ ] Search movies
	- [ ] A movie can be found by its name|id
	- [ ] All information about movie is displayed (id, details)
- [ ] Search actors
	- [ ] An actor can be found by its name|id
	- [ ] All information about actor is displayed (id, details)

#### Networks
[[Java Project - Network Graph]]
- [ ] Movie network
	- [ ] query by `movie_id`
	- [ ] Get List of all actors acting in the movie
	- [ ] For each actor a: Get list of all movies a acts in
	- [ ] The output does not contain duplicate names
	- [ ] The output adheres to format specified in [[Anforderungen_java_projekt.pdf]]
- [ ] Actor network
	- [ ] query by `actor_id`
	- [ ] Get list of all movies actor is acting in
	- [ ] For each movie m: Get list of all actors acting in m
	- [ ] The output does not contain duplicate entries
	- [ ] The output adheres to format specified in [[Anforderungen_java_projekt.pdf]]