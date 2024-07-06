[[Filmdatenbank]], [[Epic]]

> [!note] Try and really dig into [[Testing]]
> Use "Given When Then" formula, and _really_ do _Unit_ Testing --> Do not rely on external state of file

> [!note] Try and write pure functions
> e.g. return output instead of printing directly
> - also try not to over-engineer tho lol


## [[Epic]] for Movie database
- [ ] Well enough testing is implemented
- [ ] Code is documented
- [ ] Code is clean

### Testing
- [x] [[JUnit]] is imported into the project correctly
### Modellierung
Does it make sense to implement an [[Interface]] `Relation`?

- [x] Erstellen von Klassen
	- [x] Schauspieler
	- [x] Regisseur
	- [x] Film
	- [x] Actor-Movie Relation
	- [x] Director-Movie Relation
#### UML Diagram
[[java Project Entities]]
- [ ] create a [[UML Diagram]] 
- [ ] 

Further Classes required for Operation:
- [x] Reader
- [x] Main (serves as Entrypoint)
- [x] a unique class for searches and networks?
	- [x] **NO**
### File Handling
- [x] Remove duplicate rows
	- [x] Duplicate rows are verified to exist
- [x] Load entities
	- [x] Each type of entity is loaded into its own array
	- [x] Each loaded array is sorted (unessecary)
- [x] Remove duplicates
	- [x] No duplicate entries exist in the final form of an array
	Can Duplicates be removed using [[filter Operation]]? --> they can, but you need to override hashCode()

### Funtionality
- [x] Write CLI
	- [x] An entrypoint exists handling all possible CLI arguments
		- [x] `--filmsuche="Term"`
		- [x] `--schauspielersuche="Term"`
		- [x] `--filmnetzwerk=id`
		- [x] `--schauspielernetzwerk=id`
	- [x] method parameters are extracted correctly from CLI arguments
	- [x] For each cli parameter, an entrypoint method is called

#### Searching
[[Binary Search]] - List is sorted 
no dipshit, you'll just use [[Java Stream|streams]] and filter like every normal human beings
- [x] Search movies
	- [x] A movie can be found by its name|id
	- [x] All information about movie is displayed (id, details)
- [x] Search actors
	- [x] An actor can be found by its name|id
	- [x] All information about actor is displayed (id, details)

#### Networks
[[Java Project - Network Graph]]
- [x] Movie network
	- [x] query by `movie_id`
	- [x] Get List of all actors acting in the movie
	- [x] For each actor a: Get list of all movies a acts in
	- [x] The output does not contain duplicate names
	- [x] The output adheres to format specified in [[Anforderungen_java_projekt.pdf]]
- [x] Actor network
	- [x] query by `actor_id`
	- [x] Get list of all movies actor is acting in
	- [x] For each movie m: Get list of all actors acting in m
	- [x] The output does not contain duplicate entries
	- [x] The output adheres to format specified in [[Anforderungen_java_projekt.pdf]]
- [x] `ProjektTester.java` runs successfully
- [ ] Network Code is documented
- [ ] Network Code (on Database-level) is unit-tested