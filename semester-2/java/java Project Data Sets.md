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
	Actor "n"--"m" Movie
	Director "n"--"m" Movie

	Database *-- Movie
	Database *-- Actor
	Database *-- Director


	class Database {
		<<Singleton>>
	}
```

