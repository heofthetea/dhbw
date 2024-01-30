#übung-logik
### Pulp Fiction

![[semester-1/goodnotes/Logik/source/Logik-handout.pdf#page=235|Logik-handout page 235]]

[[Goal]]
[[Regeln (Rules)]]

```
killer(butch).
married(marsellus, mia).
dead(zed).
kills(marsellus, X) :- massages_feet(X, mia).
loves(mia, X) :- good_dancer(X).
eats(jules, X) :- lecker(X) ; nahrhaft(X).
```

### Harry Potter

[[harry_potter.pl]]
2. false because [[Closed World Assumption]].
```
?- wizard(ron).
true.
?- wizard(hermione).
false.
?- wizard(harry).
true.

?- wizard(harry).
X = ron ;
X = harry.
```

-> warum wird `ron` _vor_ `harry` ausgegeben?
--> Reihenfolge der Klauseln in Wissensbank ist relevant --> `wizard(ron)` bindet stärker.