brother(albert, arthur).
brother(arthur, albert).
brother(beth, bob).

child(albert, beth).
child(beth, charlie).

uncle(X, Y) :- brother(Z, Y), child(Z, X).