![[Pasted image 20240205151535.png]]

[[Prädikat Member]], [[Prädikat sublist]]
[[zebra.pl]]

```Prolog
suffix(Suf, List) :- append(_, Suf, List).

sublist(Sub, List) :- 
	prefix(Pre, List),
	suffix(Sub, Pre).


solve(X) :-
    % form: [colour, nation, pet]
    Street = [[_, _, _], [_, _, _], [_, _, _]],
    member([_, spain, jaguar], Street),
    member([red, england, _], Street),
    sublist([[_, _, snail], [_, japan, _]], Street),
    sublist([[green, _, _], [green, _, _]], Street),
    member([_, X, zebra], Street).
```