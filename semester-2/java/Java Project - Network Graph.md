Excerpt from [[Epic Java Projekt]]
- [ ] Movie network
	- [ ] query by `movie_id`
	- [ ] Get List of all actors acting in the movie
	- [ ] For each actor a: Get list of all movies a acts in
	- [ ] The output does not contain duplicate names
	- [ ] The output adheres to format specified in [[Anforderungen_java_projekt.pdf]]
---
using [[Filter]] appears to be the most elegant solution
```java
movies.stream().
	filter(movie -> actorPlaysInMovie(movie)).
	collect();
```

--> This does require the array to not contain any duplicates (although I _could_ remove duplicates from only the resulting List...)