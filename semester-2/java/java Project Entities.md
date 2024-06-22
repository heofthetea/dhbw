result of [[grep]] on the file:
```bash
grep "New_Entity" movieproject2024.db
New_Entity: "actor_id","actor_name"
New_Entity: "movie_id","movie_title","movie_plot","genre_name","movie_released","movie_imdbVotes","movie_imdbRating"
New_Entity: "director_id","director_name"
New_Entity: "actor_id","movie_id"
New_Entity: "director_id","movie_id"
```

### ERM of Persons
Okay I see mermaid has its limitations

```mermaid
flowchart TD
	Movie[Movie] --- movie_id([movie_id])
	Movie --- movie_title([movie_title])
	Movie --- movie_plot([movie_plot])
	Movie --- genre_name([genre_name])
	Movie --- movie_released([movie_released])
	Movie --- movie_imdbVotes([movie_imdbVotes])
	Movie --- movie_imdbRating([movie_imdbRating])

	Actor[Actor] --- actor_id([actor_id])
	Actor --- actor_name([actor_name])

	Director[Director] --- director_id([director_id])
	Director --- director_name([director_name])

	Director --- Movie
	Actor --- Movie
```

### UML
Okay fuck it what classes do I need

- [ ] Actor
- [ ] Movie
- [ ] Director
- [ ] Actor-Movie
- [ ] Director-Movie (bro dafuqfuq)
- [ ] Database


```mermaid
classDiagram
	direction TB

	Database *-- Movie
	Database *-- Actor
	Database *-- Director
	Database *-- ActorMovie
	Database *-- DirectorMovie
	ActorMovie -- Actor
	ActorMovie -- Movie

	DirectorMovie -- Director
	DirectorMovie -- Movie

	MovieDbReader -- Database
	MovieDbReader -- Actor
	MovieDbReader -- Movie
	MovieDbReader -- Director
	MovieDbReader -- ActorMovie
	MovieDbReader -- DirectorMovie

	Main -- Database
	Main -- MovieDbReader
	Main -- Actor
	Main -- Movie


	class Database {
		<<Singleton>>
		+ getActorByName(name: String) Actor
		+ getters()
		+ setters()
	}

	class Actor {
		- id: int
		- name: string
		+ equals(actor: Actor) boolean
		+ hashCode() int
		+ toString() String
		+ getters()
		+ setters()
		
	}

	class Director {
		- id: int
		- name: string
		+ equals(director: Director) boolean
		+ hashCode() int
		+ toString() String
		+ getters()
		+ setters()
	}

	class Movie {
		- id: int
		- title: String
		- plot: String
		- genre: String
		- rleased: String
		- imdbVotes: int
		- imdbRating: double
		+ equals(movie: Movie) boolean
		+ hashCode() int
		+ toString() String
		+ getters()
		+ setters()
	}


	class ActorMovie {
		+ equals(am: ActorMovie) boolean
		+ hashCode() int
		+ getters()
		+ setters()
	}
	
	class DirectorMovie {
		+ equals(dm: DirectorMovie) boolean
		+ hashCode() int
		+ getters()
		+ setters()
	}

	class Main {
		+ static main(args: String[]) void
		+ static filmsuche(title: String) void
		+ static schauspielersuche(name: String) void
		+ static schauspielernetzwerk(id: int) void
		+ static filmsuche(id: int) void
	}

	class MovieDbReader {
		- static final ENTITIES: String[]
		+ static readFromFile(path: String) void
		- static readEntity(entity: int, line: String) void
		+ static readActor(line: String) Actor
		+ static readMovie(line: String) Movie
		+ static readDirector(line: String) Director
		+ static readActorMovie(line: String) ActorMovie
		+ static readDirectorMovie(line: String) DirectorMovie
		+ static removeDuplicates(db: Database) void
	}
```

