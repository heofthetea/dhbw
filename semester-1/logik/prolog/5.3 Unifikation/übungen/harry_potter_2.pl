house_elf(dobby).
witch(hermione).
witch('McGonagall').
wizard(ron).
magic(X) :- house_elf(X) ; wizard(X) ; witch(X).