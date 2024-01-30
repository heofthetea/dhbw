
```
human(vincent).
male(vincent).
human(mia).
female(mia).

woman(Y) :- human(Y), female(Y).
```

#### im Stack
![[berechnungsbaum.png]]
1. Unifiziere woman(X) mit woman(Y)
2. Ersetze [[Horn-Formel#Head|Head]] im Stack durch [[Horn-Formel#Body|Body]] 
3. 2 Elemente im [[Stack]] --> aufspalten des Baums
4. repeat for (human(X))
**ACHTUNG!!** Variable `X` kann _nur_ neu gebunden werden, da [[Prolog Interpreter]] _backtrackt_ und somit die Variablenbelegung für X resetted wird!!

#### In Prädikatenlogik
![[resolution_graph_suchbaum.png]]