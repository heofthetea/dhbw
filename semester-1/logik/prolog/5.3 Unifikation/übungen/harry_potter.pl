hasWand(harry).
quidditchPlayer(harry).
wizard(X) :- hasBroom(X), hasWand(X).
wizard(ron).
hasBroom(X) :- quidditchPlayer(X).