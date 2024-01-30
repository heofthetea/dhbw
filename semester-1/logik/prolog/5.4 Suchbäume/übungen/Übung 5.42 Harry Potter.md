#übung-logik 
wissensbank: [[harry_potter_2.pl]]
Anfrage: `magic(X)`.

### Tipps
- Immer _ältere_ Variablen beibehalten
	- hier: nicht `X = A`, sondern `A = X`
- [[Ohne Fakten in der Wissensbank kann es nur falsche oder nicht terminierende Resolutionen geben]]

### Suchbaum
![[übung_5.44.png]]

#### Ausgabe
```
?- magic(A).
A = dobby ;
A = ron ;
A = hermione ;
A = 'McGonagall'.
```


