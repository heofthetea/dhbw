#übung-logik 
![[semester-1/logik/scripts/Logik-handout.pdf#page=246|Logik-handout page 246]]

### Fragen
- Werden _Argumente_ umbenannt?


## 2. Attempt

> Idea: simply bruteforce it lol

[[crossword.pl]]

```prolog
word(astante, a, s, t, a, n, t, e).
word(astoria, a, s, t, o, r, i, a).
word(baratto, b, a, r, a, t, t, o).
word(cobalto, c, o, b, a, l, t, o).
word(pistola, p, i, s, t, o, l, a).
word(statale, s, t, a, t, a, l, e).


crossword(V1, V2, V3, H1, H2, H3) :-
    word(V1, _, V1H1, _, V1H2, _, V1H3, _),
    word(V2, _, V2H1, _, V2H2, _, V2H3, _),
    word(V3, _, V3H1, _, V3H2, _, V3H3, _),

    word(H1, _, V1H1, _, V2H1, _, V3H1, _),
    word(H2, _, V1H2, _, V2H2, _, V3H2, _),
    word(H3, _, V1H3, _, V2H3, _, V3H3, _),

    no_duplicates(V1, V2, V3, H1, H2, H3).


no_duplicates(A1, A2, A3, B1, B2, B3) :-
    A1 \== B1,
    A2 \== B2,
    A3 \== B3.
``` 

- For every row/column: Make sure that _intersection points_ match.
	- every other square is irrelevant, thus only referencing it as [[Anonyme Variable|anonymous variable]].
- Also confirm that there are no cuplicates. For this, only _one_ intersection point for each row/column is needed (only works because of the very specific construction of the words i believe).


### What prolog produces

![[solution_crossword_prolog.png]]

